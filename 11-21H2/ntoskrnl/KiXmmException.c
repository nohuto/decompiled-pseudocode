/*
 * XREFs of KiXmmException @ 0x140431CC0
 * Callers:
 *     KiXmmExceptionShadow @ 0x140AB5AC0 (KiXmmExceptionShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041F920 (KiSaveDebugRegisterState.c)
 *     KiXmmException @ 0x140431CC0 (KiXmmException.c)
 *     KiBugCheckDispatch @ 0x140434DC0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140434E40 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1404357C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

void __noreturn KiXmmException()
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v4; // rcx
  unsigned __int16 BpbKernelSpecCtrl; // ax
  unsigned __int16 BpbState; // dx
  __int16 v7; // ax
  __int64 v8; // rdx
  void *v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r8
  unsigned __int16 v14; // [rsp+2Ch] [rbp-54h]
  void *retaddr; // [rsp+168h] [rbp+E8h]
  __int16 v16; // [rsp+170h] [rbp+F0h]
  __int16 v17; // [rsp+178h] [rbp+F8h]

  if ( (v16 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    if ( KeGetPcr()->Prcb.KernelShadowStackInitial )
    {
      __asm { rdsspq  rdx }
      if ( _RDX == KeGetPcr()->Prcb.TransitionShadowStack + 8 )
      {
        __asm
        {
          rstorssp qword ptr [rcx]
          saveprevssp
        }
      }
    }
    CurrentThread = KeGetCurrentThread();
    v4 = *(_QWORD *)&CurrentThread->Process[2].ActiveProcessors.Count;
    __writegsqword(0x858u, v4);
    __writegsword(0x852u, KeGetPcr()->Prcb.BpbRetpolineExitSpecCtrl);
    LOWORD(v4) = KeGetPcr()->Prcb.BpbState;
    __writegsword(0x854u, v4);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsword(0x864u, BpbKernelSpecCtrl);
      v4 = 72LL;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    BpbState = KeGetPcr()->Prcb.BpbState;
    if ( (BpbState & 8) != 0 )
    {
      v4 = 73LL;
      __writemsr(0x49u, 1uLL);
      BpbState = KeGetPcr()->Prcb.BpbState;
    }
    if ( (BpbState & 2) != 0 )
      JUMPOUT(0x140431F2DLL);
    if ( (BpbState & 0x200) != 0 )
      KiFlushBhbDuringTrapEntryOrExit(v4);
    _mm_lfence();
    __writegsbyte(0x856u, 0);
    if ( (CurrentThread->Header.Reserved1 & 3) != 0 )
      KiSaveDebugRegisterState(v4);
  }
  else
  {
    __asm { rdsspq  rdx }
    _mm_lfence();
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
      __writemsr(0x48u, KeGetPcr()->Prcb.BpbCurrentSpecCtrl);
    else
      _mm_lfence();
  }
  v14 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  if ( (_BYTE)KeSmapEnabled && (v16 & 1) != 0 )
    __asm { stac }
  if ( (v17 & 0x200) != 0 )
    _enable();
  v7 = ~((v14 >> 7) & 0x3F) & v14;
  v8 = 2LL;
  v9 = retaddr;
  v10 = 0LL;
  if ( v16 == 35 )
    goto LABEL_32;
  v11 = 3221225616LL;
  if ( (v7 & 1) != 0
    || (v11 = 3221225614LL, (v7 & 4) != 0)
    || (v11 = 3221225616LL, (v7 & 2) != 0)
    || (v11 = 3221225617LL, (v7 & 8) != 0)
    || (v11 = 3221225619LL, (v7 & 0x10) != 0)
    || (v11 = 3221225615LL, (v7 & 0x20) != 0) )
  {
    while ( 1 )
    {
      LOBYTE(v7) = KiExceptionDispatch(v11, v8, v9, v10);
LABEL_32:
      v11 = 3221226165LL;
      if ( (v7 & 1) == 0 && (v7 & 4) == 0 && (v7 & 2) == 0 )
      {
        v11 = 3221226164LL;
        if ( (v7 & 8) == 0 && (v7 & 0x10) == 0 && (v7 & 0x20) == 0 )
          break;
      }
    }
  }
  v12 = __readcr4();
  v13 = __readcr0();
  KiBugCheckDispatch(127LL, 9LL, v13, v12);
}
