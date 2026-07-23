/*
 * XREFs of KiNmiInterruptStart @ 0x14042BF80
 * Callers:
 *     KiNmiInterruptShadow @ 0x140AF7240 (KiNmiInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14030FC00 (KiCheckForSListAddress.c)
 *     KeWakeProcessor @ 0x140341390 (KeWakeProcessor.c)
 *     KiMcheckFastForward @ 0x14035A3F0 (KiMcheckFastForward.c)
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KiSetSpecCtrlNmi @ 0x140423CD0 (KiSetSpecCtrlNmi.c)
 *     KxNmiInterrupt @ 0x14042C400 (KxNmiInterrupt.c)
 *     KiBugCheckDispatch @ 0x1404342C0 (KiBugCheckDispatch.c)
 *     KzSetIrqlUnsafe @ 0x14056C100 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 */

__int64 __fastcall KiNmiInterruptStart(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // r11
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  bool v16; // zf
  unsigned __int32 v17; // eax
  unsigned __int64 v18; // rdx
  int v19; // eax
  int v20; // r8d
  unsigned int v21; // eax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int128 v24; // xmm4
  __int128 v25; // xmm5
  __int64 v28; // rcx
  __int64 v29; // r10
  unsigned __int64 v30; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v32; // cf
  struct _KTHREAD *CurrentThread; // rcx
  int v37; // r9d
  int v38; // r8d
  int v39; // edx
  int v40; // ecx
  ULONG_PTR BugCheckParameter4[5]; // [rsp+0h] [rbp-80h] BYREF
  unsigned __int8 v43; // [rsp+28h] [rbp-58h]
  unsigned __int8 v44; // [rsp+29h] [rbp-57h]
  char v45; // [rsp+2Bh] [rbp-55h]
  unsigned int v46; // [rsp+2Ch] [rbp-54h]
  __int64 v47; // [rsp+30h] [rbp-50h]
  __int64 v48; // [rsp+38h] [rbp-48h]
  __int64 v49; // [rsp+40h] [rbp-40h]
  __int64 v50; // [rsp+48h] [rbp-38h]
  __int64 v51; // [rsp+50h] [rbp-30h]
  __int64 v52; // [rsp+58h] [rbp-28h]
  __int64 v53; // [rsp+60h] [rbp-20h]
  unsigned __int64 v54; // [rsp+68h] [rbp-18h]
  _OWORD v55[6]; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int64 v56; // [rsp+D0h] [rbp+50h]
  __int64 v57; // [rsp+D8h] [rbp+58h]
  __int16 v58; // [rsp+100h] [rbp+80h]
  unsigned int v59; // [rsp+140h] [rbp+C0h]
  __int64 (__fastcall *retaddr)(); // [rsp+168h] [rbp+E8h]
  char v61; // [rsp+170h] [rbp+F0h]

  v45 = 0;
  v47 = v8;
  v48 = a1;
  v49 = a2;
  v50 = a3;
  v51 = a4;
  v52 = v9;
  v53 = v10;
  if ( (v61 & 1) == 0 )
  {
    __asm { rdsspq  rdx }
    v57 = _RDX;
    v54 = __readmsr(0xC0000101);
    v17 = __segmentlimit(0x50u);
    if ( v16 )
    {
      v20 = (v17 & 0x3FF) << 6;
      v19 = v17 >> 14;
    }
    else
    {
      if ( (KeFeatureBits & 0x400000000LL) == 0 )
      {
        __sgdt(v55);
        v18 = *(_QWORD *)(*(_QWORD *)((char *)v55 + 2) - 8000LL);
LABEL_8:
        v21 = v18;
        v22 = HIDWORD(v18);
        __writemsr(0xC0000101, __PAIR64__(v22, v21));
        v23 = __readcr2();
        v56 = v23;
        KiSetSpecCtrlNmi(3221225729LL, v22);
        goto LABEL_20;
      }
      __asm { rdtscp }
      v19 = 1;
      v20 = 805306432;
    }
    v18 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v20 | v19]] - 384;
    goto LABEL_8;
  }
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
  ((void (*)(void))KiSetSpecCtrlNmi)();
  if ( KiUserCetPl3SspCanonicalizeUpperMask )
  {
    v28 = 1703LL;
    v30 = __readmsr(0x6A7u);
    if ( HIDWORD(v30) )
    {
      v28 = HIDWORD(v30);
      if ( (KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v30)) != HIDWORD(v30) )
      {
        v28 = 1703LL;
        __writemsr(0x6A7u, __PAIR64__((unsigned int)KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v30), v30));
      }
    }
  }
  v16 = (*(_BYTE *)(v29 + 3) & 3) == 0;
  v58 = 0;
  if ( !v16 )
    *(double *)&v11 = KiSaveDebugRegisterState(v28);
LABEL_20:
  v46 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v55[0] = v11;
  v55[1] = v12;
  v55[2] = v13;
  v55[3] = v14;
  v55[4] = v24;
  v55[5] = v25;
  if ( KeGetPcr()->Prcb.DeepSleep )
    KeWakeProcessor();
  if ( &ExpInterlockedPopEntrySListResume < (_UNKNOWN *)retaddr
    && &ExpInterlockedPopEntrySListEnd >= (_UNKNOWN *)retaddr )
  {
    KiCheckForSListAddress((__int64)BugCheckParameter4);
  }
  __incgsdword(0x82C0u);
  if ( (_BYTE)KeSmapEnabled )
    __asm { clac }
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KzSetIrqlUnsafe(15LL);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
  }
  v44 = CurrentIrql;
  KiMcheckFastForward((ULONG_PTR)BugCheckParameter4, 1);
  v32 = _bittestandset16(MK_FP(__GS__, 32806LL), 0);
  if ( v32
    || (v61 & 1) == 0
    && (unsigned __int64)KiNmiInterruptStart <= (unsigned __int64)retaddr
    && &KiNmiInterruptEnd > (_UNKNOWN *)retaddr
    || (unsigned __int64)KiNmiInterruptShadow <= (unsigned __int64)retaddr
    && &KiNmiInterruptShadowEnd > (_UNKNOWN *)retaddr )
  {
    KiBugCheckDispatch(273LL, 0LL, 0LL, 0LL);
  }
  KxNmiInterrupt();
  __writegsbyte(0x8026u, 0);
  if ( (_DWORD)KiIrqlFlags )
    KzSetIrqlUnsafe(v44);
  else
    __writecr8(v44);
  if ( (v61 & 1) != 0 )
  {
    if ( (_BYTE)KeSmapEnabled )
      __asm { stac }
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->Header.LockNV & 0x10000) != 0 && (CurrentThread->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      CurrentThread = KeGetCurrentThread();
    }
    _mm_setcsr(v46);
    if ( v58 )
      KiRestoreDebugRegisterState(CurrentThread);
    if ( _bittest((const signed __int32 *)&KeGetCurrentThread()->116, 0x16u) )
    {
      __asm { rdsspq  rcx }
      if ( _RCX == KeGetPcr()->Prcb.KernelShadowStackInitial + 8 )
      {
        _RCX = KeGetPcr()->Prcb.TransitionShadowStack;
        __asm
        {
          rstorssp qword ptr [rcx]
          saveprevssp
        }
      }
    }
    v37 = v51;
    v38 = v50;
    __writegsbyte(0x856u, v43);
    if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
      __writemsr(0x48u, v59);
    v39 = v49;
    v40 = v48;
    if ( (KiKvaShadow & 1) == 0 )
    {
      if ( (KeGetPcr()->Prcb.BpbState & 0x100) != 0 )
        __asm { verw    [rsp+arg_18] }
      __asm
      {
        swapgs
        iretq
      }
    }
  }
  else
  {
    _mm_setcsr(v46);
    __writegsbyte(0x856u, v43);
    if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
      __writemsr(0x48u, v59);
    __writemsr(0xC0000101, v54);
    __writecr2(v56);
    v37 = v51;
    v38 = v50;
    v39 = v49;
    v40 = v48;
    if ( (KiKvaShadow & 1) == 0 )
      __asm { iretq }
  }
  return KiKernelIstExit(v40, v39, v38, v37, a5, a6, a7, a8);
}
