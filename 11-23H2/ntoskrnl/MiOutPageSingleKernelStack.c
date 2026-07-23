/*
 * XREFs of MiOutPageSingleKernelStack @ 0x14021B580
 * Callers:
 *     <none>
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140211BAC (MiLockAndDecrementShareCount.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiSetPfnIdentity @ 0x140219488 (MiSetPfnIdentity.c)
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiDecrementShareCount @ 0x140280A40 (MiDecrementShareCount.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiGetWorkingSetSwapSupport @ 0x140342C08 (MiGetWorkingSetSwapSupport.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiCreateKernelStackNode @ 0x14062D118 (MiCreateKernelStackNode.c)
 *     MiOutSwapKernelStackPage @ 0x1406530A8 (MiOutSwapKernelStackPage.c)
 */

__int64 __fastcall MiOutPageSingleKernelStack(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rcx
  _QWORD *v7; // r14
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // r9
  __int64 WorkingSetSwapSupport; // r13
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r15
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rbx
  __int64 v18; // rbp
  char v19; // di
  int v20; // r12d
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rsi
  unsigned __int64 v26; // r13
  __int64 *v27; // rdi
  __int64 v28; // r15
  unsigned int v29; // r12d
  unsigned __int64 v30; // rbx
  __int64 v31; // rbp
  __int64 v32; // r14
  int v33; // eax
  __int64 v34; // rcx
  int v35; // r8d
  __int64 v36; // rdx
  int v37; // eax
  unsigned __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 result; // rax
  __int64 v41; // rcx
  bool v42; // zf
  __int64 v43; // rax
  __int64 v44; // rcx
  int v45; // r10d
  __int64 v46; // rdx
  int v47; // r9d
  unsigned __int8 v48; // r8
  int v49; // r11d
  int v50; // r11d
  __int64 v51; // [rsp+20h] [rbp-88h] BYREF
  char *AnyMultiplexedVm; // [rsp+28h] [rbp-80h]
  __int64 v53; // [rsp+30h] [rbp-78h]
  unsigned __int64 v54; // [rsp+38h] [rbp-70h]
  unsigned __int64 v55; // [rsp+40h] [rbp-68h]
  __int64 v56; // [rsp+48h] [rbp-60h]
  __int64 v57; // [rsp+50h] [rbp-58h]
  char v58; // [rsp+B0h] [rbp+8h]
  __int64 v59; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v60; // [rsp+C0h] [rbp+18h]
  __int64 v61; // [rsp+C8h] [rbp+20h] BYREF

  v60 = a3;
  v5 = (((unsigned __int64)(*a2 - 4096LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = a2[2] - 8LL;
  v51 = v5;
  v57 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v61 = v57 << 25 >> 16;
  v7 = (_QWORD *)v57;
  v59 = ((a2[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v53 = (unsigned int)((__int64)(v5 - v57) >> 3) + 1;
  v56 = MiSwizzleInvalidPte(992LL);
  WorkingSetSwapSupport = 0LL;
  v12 = *(_QWORD *)(a1 + 544);
  v13 = *(unsigned __int16 *)(v12 + 1838);
  v14 = v12 + 1664;
  v15 = *(_QWORD *)(qword_140C673C8 + 8 * v13);
  if ( (_UNKNOWN *)v15 != &MiSystemPartition )
  {
    result = MiCreateKernelStackNode(*(_QWORD *)(qword_140C673C8 + 8 * v13), a2);
    if ( !result )
      return result;
    v8 = v59;
    v10 = 0x7FFFFFFFF8LL;
    v9 = 0xFFFFF68000000000uLL;
  }
  v54 = v9 + (v10 & (v8 >> 9));
  v55 = (v10 & (v5 >> 9)) + v9;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v58 = MiLockWorkingSetShared(AnyMultiplexedVm);
  MiLockPageTableInternal(AnyMultiplexedVm, v54, 0LL);
  if ( v54 != v55 )
    MiLockPageTableInternal(AnyMultiplexedVm, v54 + 8, 0LL);
  *(_QWORD *)(a2[2] - 8LL) = a1;
  if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v14) > 2 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v15 + 1176));
    if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v14) <= 2 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 1176));
    else
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v41);
  }
  v16 = v51;
  do
  {
    v51 = MI_READ_PTE_LOCK_FREE(v7);
    v17 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v51) >> 12) & 0xFFFFFFFFFFLL;
    v18 = 48 * v17 - 0x220000000000LL;
    if ( WorkingSetSwapSupport )
      MiOutSwapKernelStackPage(WorkingSetSwapSupport, v15, v7);
    v51 = MiSwizzleInvalidPte((v17 << 12) | 0xBE0);
    v19 = v51;
    v20 = 0;
    v21 = v51;
    if ( (unsigned int)MiPteInShadowRange(v7) )
    {
      if ( (unsigned int)MiPteHasShadow(v23, v22, v24) )
      {
        v20 = 1;
        if ( HIBYTE(word_140C66CFC) )
          goto LABEL_9;
        v42 = (v19 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_9;
        v42 = (v19 & 1) == 0;
      }
      if ( !v42 )
        v21 |= 0x8000000000000000uLL;
    }
LABEL_9:
    *v7 = v21;
    if ( v20 )
      MiWritePteShadow(v7, v21);
    MiLockAndDecrementShareCount(v18, 0);
    ++v7;
  }
  while ( (unsigned __int64)v7 <= v16 );
  v25 = v56;
  if ( WorkingSetSwapSupport )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 1176));
  v26 = v59;
  v27 = (__int64 *)(v57 - 8);
  v28 = v61;
  v29 = v53;
  while ( 2 )
  {
    if ( (unsigned __int64)v27 >= v26 && (*(_BYTE *)v27 & 1) != 0 )
    {
      v51 = MI_READ_PTE_LOCK_FREE(v27);
      v30 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v51) >> 12) & 0xFFFFFFFFFFLL;
      v31 = 48 * v30 - 0x220000000000LL;
      v32 = 48 * (*(_QWORD *)(v31 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      LODWORD(v59) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v59);
        while ( *(__int64 *)(v31 + 24) < 0 );
      }
      v33 = MiPteInShadowRange(v27);
      if ( *(_WORD *)(v31 + 32) == 1 )
      {
        v35 = 0;
        v36 = v25;
        if ( !v33 )
          goto LABEL_21;
        if ( (unsigned int)MiPteHasShadow(v34, v25, 0LL) )
        {
          v35 = v50;
          if ( !HIBYTE(word_140C66CFC) )
            goto LABEL_60;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
LABEL_60:
          if ( ((unsigned __int8)v25 & (unsigned __int8)v50) != 0 )
            v36 |= 0x8000000000000000uLL;
        }
LABEL_21:
        *v27 = v36;
        if ( v35 )
          MiWritePteShadow(v27, v36);
        *(_QWORD *)(v31 + 24) |= 0x4000000000000000uLL;
        MiSetPfnIdentity(48 * v30 - 0x220000000000LL, 0);
LABEL_24:
        v37 = MiDecrementShareCount(v31);
        _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v37 != 3 )
        {
          LODWORD(v61) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v61);
            while ( *(__int64 *)(v32 + 24) < 0 );
          }
          MiDecrementShareCount(v32);
          _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        ++v29;
        v28 -= 4096LL;
        --v27;
        continue;
      }
      v43 = MiSwizzleInvalidPte((v30 << 12) | 0xBE0);
      v45 = 0;
      v51 = v43;
      v46 = v43;
      if ( v47 )
      {
        if ( (unsigned int)MiPteHasShadow(v44, v43, v43) )
        {
          v45 = v49;
          if ( HIBYTE(word_140C66CFC) )
            goto LABEL_54;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_54;
        }
        if ( (v48 & (unsigned __int8)v49) != 0 )
          v46 |= 0x8000000000000000uLL;
      }
LABEL_54:
      *v27 = v46;
      if ( v45 )
        MiWritePteShadow(v27, v46);
      goto LABEL_24;
    }
    break;
  }
  v38 = v54;
  if ( v54 != v55 )
    MiUnlockPageTableInternal(AnyMultiplexedVm, v54 + 8);
  MiUnlockPageTableInternal(AnyMultiplexedVm, v38);
  LOBYTE(v39) = v58;
  MiUnlockWorkingSetShared(AnyMultiplexedVm, v39);
  return MiInsertTbFlushEntry(v60, v28, v29, 0LL);
}
