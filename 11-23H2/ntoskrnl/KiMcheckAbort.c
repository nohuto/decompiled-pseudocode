/*
 * XREFs of KiMcheckAbort @ 0x140430C80
 * Callers:
 *     KiMcheckAbortShadow @ 0x140AF69C0 (KiMcheckAbortShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140310070 (KiCheckForSListAddress.c)
 *     KeWakeProcessor @ 0x140341B10 (KeWakeProcessor.c)
 *     KiMcheckFastForward @ 0x14035AB90 (KiMcheckFastForward.c)
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiSetSpecCtrlNmi @ 0x140424720 (KiSetSpecCtrlNmi.c)
 *     KxMcheckAbort @ 0x1404312C0 (KxMcheckAbort.c)
 *     KzSetIrqlUnsafe @ 0x14056C720 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 */

void __fastcall KiMcheckAbort(
        __int64 a1,
        __int64 _RDX,
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
  unsigned __int32 v16; // eax
  unsigned __int64 v17; // rdx
  int v18; // eax
  int v19; // r8d
  unsigned int v20; // eax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int128 v23; // xmm4
  __int128 v24; // xmm5
  __int64 v26; // rcx
  __int64 v27; // r10
  unsigned __int64 v28; // rax
  unsigned __int8 CurrentIrql; // al
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  int v33; // r8d
  int v34; // r9d
  unsigned __int64 InitialStack; // rcx
  unsigned __int64 v36; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 (__fastcall **v40)(); // rcx
  __int64 (__fastcall *v41)(); // rax
  bool v42; // zf
  _KIDTENTRY64 *IdtBase; // rax
  int v44; // edx
  int v45; // ecx
  __m128i v46; // [rsp+0h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter4[5]; // [rsp+10h] [rbp-80h] BYREF
  unsigned __int8 v48; // [rsp+38h] [rbp-58h]
  unsigned __int8 v49; // [rsp+39h] [rbp-57h]
  char v50; // [rsp+3Bh] [rbp-55h]
  unsigned int v51; // [rsp+3Ch] [rbp-54h]
  __int64 v52; // [rsp+40h] [rbp-50h]
  __int64 v53; // [rsp+48h] [rbp-48h]
  __int64 v54; // [rsp+50h] [rbp-40h]
  __int64 v55; // [rsp+58h] [rbp-38h]
  __int64 v56; // [rsp+60h] [rbp-30h]
  __int64 v57; // [rsp+68h] [rbp-28h]
  __int64 v58; // [rsp+70h] [rbp-20h]
  unsigned __int64 v59; // [rsp+78h] [rbp-18h]
  _OWORD v60[6]; // [rsp+80h] [rbp-10h] BYREF
  unsigned __int64 v61; // [rsp+E0h] [rbp+50h]
  __int64 v62; // [rsp+E8h] [rbp+58h]
  __int16 v63; // [rsp+110h] [rbp+80h]
  unsigned int v64; // [rsp+150h] [rbp+C0h]
  __int64 (__fastcall *retaddr)(); // [rsp+178h] [rbp+E8h]
  unsigned __int16 v66; // [rsp+180h] [rbp+F0h]
  unsigned int v67; // [rsp+188h] [rbp+F8h]
  unsigned __int64 v68; // [rsp+190h] [rbp+100h]
  unsigned __int16 v69; // [rsp+198h] [rbp+108h]

  v50 = 0;
  v52 = v8;
  v53 = a1;
  v54 = _RDX;
  v55 = a3;
  v56 = a4;
  v57 = v9;
  v58 = v10;
  if ( (v66 & 1) == 0 )
  {
    __asm { rdsspq  rdx }
    v62 = _RDX;
    v59 = __readmsr(0xC0000101);
    v16 = __segmentlimit(0x50u);
    if ( v42 )
    {
      v19 = (v16 & 0x3FF) << 6;
      v18 = v16 >> 14;
    }
    else
    {
      if ( (KeFeatureBits & 0x400000000LL) == 0 )
      {
        __sgdt(v60);
        v17 = *(_QWORD *)(*(_QWORD *)((char *)v60 + 2) - 8000LL);
LABEL_8:
        v20 = v17;
        v21 = HIDWORD(v17);
        __writemsr(0xC0000101, __PAIR64__(v21, v20));
        v22 = __readcr2();
        v61 = v22;
        KiSetSpecCtrlNmi(3221225729LL, v21);
        goto LABEL_20;
      }
      __asm { rdtscp }
      v18 = 1;
      v19 = 805306432;
    }
    v17 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v19 | v18]] - 384;
    goto LABEL_8;
  }
  if ( (KiKvaShadow & 1) == 0 )
    __asm { swapgs }
  _mm_lfence();
  _RCX = KeGetPcr()->Prcb.KernelShadowStackInitial;
  if ( _RCX )
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
  KiSetSpecCtrlNmi(_RCX, _RDX);
  if ( KiUserCetPl3SspCanonicalizeUpperMask )
  {
    v26 = 1703LL;
    v28 = __readmsr(0x6A7u);
    if ( HIDWORD(v28) )
    {
      v26 = HIDWORD(v28);
      if ( (KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v28)) != HIDWORD(v28) )
      {
        v26 = 1703LL;
        __writemsr(0x6A7u, __PAIR64__((unsigned int)KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v28), v28));
      }
    }
  }
  v42 = (*(_BYTE *)(v27 + 3) & 3) == 0;
  v63 = 0;
  if ( !v42 )
    *(double *)&v11 = KiSaveDebugRegisterState(v26);
LABEL_20:
  v51 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v60[0] = v11;
  v60[1] = v12;
  v60[2] = v13;
  v60[3] = v14;
  v60[4] = v23;
  v60[5] = v24;
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
  v49 = CurrentIrql;
  _enable();
  KiMcheckFastForward((ULONG_PTR)BugCheckParameter4, 0);
  __incgsbyte(0x8027u);
  if ( (v66 & 1) == 0 )
  {
    v31 = *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 52);
    if ( v68 <= v31 )
    {
      v30 = 24576LL;
      if ( (KiKvaShadow & 1) != 0 )
        v30 = 464LL;
      if ( v68 > v31 - v30 )
        goto LABEL_38;
    }
    if ( (KiKvaShadow & 1) != 0 )
    {
      v32 = *(_QWORD *)(*(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 52) + 8LL);
      if ( v68 <= v32 && v68 > v32 - 24544 )
      {
LABEL_38:
        v69 |= 4u;
        _InterlockedIncrement64(&KiMcheckNmiBlocking);
      }
    }
    if ( *(_BYTE *)retaddr == 0xF4 && *(_WORD *)((char *)retaddr - 1) == 0xF4FB )
    {
      v67 &= ~0x200u;
      retaddr = (__int64 (__fastcall *)())((char *)retaddr - 1);
      _InterlockedIncrement64(&KiMcheckStiBlocking);
    }
  }
  KxMcheckAbort(BugCheckParameter4, v30, &v46);
  if ( (v46.m128i_i8[0] & 1) != 0 )
  {
    if ( (v46.m128i_i8[0] & 0x10) != 0 )
      InitialStack = v68 & 0xFFFFFFFFFFFFFFF0uLL;
    else
      InitialStack = (unsigned __int64)KeGetCurrentThread()->InitialStack;
    *(__m128i *)(InitialStack - 416) = _mm_load_si128(&v46);
    v50 = 1;
  }
  __writegsbyte(0x8027u, KeGetPcr()->Prcb.MceActive - 1);
  _disable();
  if ( (_DWORD)KiIrqlFlags )
    KzSetIrqlUnsafe(v49);
  else
    __writecr8(v49);
  _disable();
  if ( (v66 & 1) != 0 )
  {
    if ( (_BYTE)KeSmapEnabled )
      __asm { stac }
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->Header.LockNV & 0x10000) != 0 && (CurrentThread->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      CurrentThread = KeGetCurrentThread();
    }
    _mm_setcsr(v51);
    if ( v63 )
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
    v34 = v56;
    v33 = v55;
    if ( !v50 )
    {
LABEL_70:
      __writegsbyte(0x856u, v48);
      if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
        __writemsr(0x48u, v64);
      goto LABEL_72;
    }
    v36 = (unsigned __int64)KeGetCurrentThread()->InitialStack;
  }
  else
  {
    if ( !v50 )
      goto LABEL_76;
    v36 = v68 & 0xFFFFFFFFFFFFFFF0uLL;
  }
  v40 = (__int64 (__fastcall **)())(v36 - 40);
  *v40 = retaddr;
  v40[1] = (__int64 (__fastcall *)())v66;
  v40[2] = (__int64 (__fastcall *)())v67;
  v40[3] = (__int64 (__fastcall *)())v68;
  v40[4] = (__int64 (__fastcall *)())v69;
  if ( (v66 & 1) == 0 )
  {
    retaddr = KxMcheckAlternateReturn;
LABEL_76:
    _mm_setcsr(v51);
    __writegsbyte(0x856u, v48);
    if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
      __writemsr(0x48u, v64);
    __writemsr(0xC0000101, v59);
    __writecr2(v61);
    v34 = v56;
    v33 = v55;
    v44 = v54;
    v45 = v53;
    if ( (KiKvaShadow & 1) == 0 )
      goto LABEL_75;
LABEL_73:
    KiKernelIstMceExit(v45, v44, v33, v34, a5, a6, a7, a8);
    return;
  }
  v41 = KxMcheckAlternateReturn;
  v42 = (KiKvaShadow & 1) == 0;
  if ( (KiKvaShadow & 1) != 0 )
  {
    IdtBase = KeGetPcr()->IdtBase;
    *(&IdtBase[1118].Alignment + 1) = KeGetPcr()->Prcb.KernelDirectoryTableBase & 0x7FFFFFFFFFFFFFFFLL;
    IdtBase[1118].Alignment = (unsigned __int64)KeGetPcr();
    IdtBase = (_KIDTENTRY64 *)((char *)IdtBase + 16856);
    IdtBase->Alignment = (unsigned __int64)*v40;
    *(_KIDTENTRY64 *)((char *)IdtBase + 8) = *(_KIDTENTRY64 *)(v40 + 1);
    *(&IdtBase[1].Alignment + 1) = (unsigned __int64)v40[3];
    IdtBase[2].Alignment = (unsigned __int64)v40;
    v41 = KxMcheckAlternateReturnShadow;
  }
  retaddr = v41;
  if ( v42 )
    goto LABEL_70;
LABEL_72:
  v44 = v54;
  v45 = v53;
  if ( (KiKvaShadow & 1) != 0 )
    goto LABEL_73;
  __asm { swapgs }
  _mm_lfence();
LABEL_75:
  KiMcheckExit();
}
