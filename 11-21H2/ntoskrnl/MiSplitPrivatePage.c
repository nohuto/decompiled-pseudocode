/*
 * XREFs of MiSplitPrivatePage @ 0x14028E238
 * Callers:
 *     MiCopyToCfgBitMap @ 0x140700460 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MiMakeProtoLeafValid @ 0x140240C38 (MiMakeProtoLeafValid.c)
 *     MiIsPrototypePteVadLookup @ 0x1402806A0 (MiIsPrototypePteVadLookup.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     MiGetNextPageTable @ 0x14028F080 (MiGetNextPageTable.c)
 *     MiIncreaseUsedPtesCount @ 0x14028FB74 (MiIncreaseUsedPtesCount.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiGetUsedPtesHandle @ 0x1402D03D0 (MiGetUsedPtesHandle.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiGetProtoPteAddress @ 0x140319600 (MiGetProtoPteAddress.c)
 *     MiVadPureReserve @ 0x140319990 (MiVadPureReserve.c)
 *     MiMakeSystemAddressValid @ 0x14032CE60 (MiMakeSystemAddressValid.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiCopyOnWriteCheckConditions @ 0x1405BCAF8 (MiCopyOnWriteCheckConditions.c)
 *     MiReturnFullProcessCommitment @ 0x1406FEC50 (MiReturnFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1407BDB60 (MiCommitPageTablesForVad.c)
 *     MiChargeFullProcessCommitment @ 0x1407BE280 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiSplitPrivatePage(ULONG_PTR a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v4; // r13
  __int64 v5; // r15
  unsigned __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  unsigned __int64 v10; // r14
  int v11; // ebp
  char v12; // di
  int v13; // r9d
  unsigned __int64 NextPageTable; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rax
  int v20; // r13d
  unsigned int v21; // ebx
  unsigned __int64 v22; // rdx
  int v23; // eax
  char v24; // di
  int v25; // ebp
  __int64 v26; // rbx
  _KPROCESS *v27; // r14
  __int64 UsedPtesHandle; // rax
  __int64 v30; // rdx
  __int16 v31; // ax
  int v32; // r13d
  __int64 v33; // rdi
  __int64 v34; // rdx
  int v35; // ebx
  unsigned __int64 v36; // rbp
  struct _KTHREAD *v37; // rdi
  unsigned int SessionId; // ecx
  char *p_Process; // rbx
  __int64 v40; // r8
  int v41; // r9d
  struct _KTHREAD *v42; // rax
  ULONG_PTR v43; // r14
  int v44; // r13d
  int v45; // r9d
  __int64 v46; // rax
  bool v47; // zf
  struct _KTHREAD *v48; // rdi
  unsigned int v49; // ecx
  char *v50; // rbx
  __int64 v51; // r8
  int v52; // r9d
  struct _KTHREAD *v53; // rax
  int v54; // [rsp+30h] [rbp-98h]
  __int64 v55; // [rsp+38h] [rbp-90h] BYREF
  int v56; // [rsp+40h] [rbp-88h]
  int v57; // [rsp+44h] [rbp-84h]
  struct _KTHREAD *v58; // [rsp+48h] [rbp-80h]
  _KPROCESS *Process; // [rsp+50h] [rbp-78h]
  int v60; // [rsp+58h] [rbp-70h] BYREF
  __int64 v61; // [rsp+60h] [rbp-68h]
  __int64 ProtoPteAddress; // [rsp+68h] [rbp-60h]
  __int64 v63[11]; // [rsp+70h] [rbp-58h] BYREF
  char v66; // [rsp+E0h] [rbp+18h]
  int v67; // [rsp+E8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v58 = CurrentThread;
  v60 = 0;
  v4 = a2;
  Process = CurrentThread->ApcState.Process;
  v5 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  v56 = MiVadPureReserve(a2);
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v63[0] = *(_QWORD *)(v7 + 72);
  v9 = MiChargeFullProcessCommitment(v8, 1LL);
  v10 = 0LL;
  v11 = (*(_DWORD *)(v4 + 48) >> 12) & 0x7F;
  v67 = v9;
  v54 = 0;
  v57 = 0;
  v61 = v9;
  v12 = MiLockWorkingSetShared(&Process[1].ActiveProcessors.StaticBitmap[26]);
  v66 = v12;
  while ( 1 )
  {
    LOBYTE(v13) = v12;
    if ( !v56 )
    {
      MiMakeSystemAddressValid(v6, 0, v11, v13, 0);
      goto LABEL_6;
    }
    NextPageTable = MiGetNextPageTable(v6, v6, 0, v13, 0, (__int64)&v60);
    if ( NextPageTable )
      v10 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v6 != NextPageTable )
      break;
LABEL_6:
    ProtoPteAddress = MiGetProtoPteAddress(v4, a1 >> 12, 0LL, v63);
    v16 = ProtoPteAddress;
    v55 = MI_READ_PTE_LOCK_FREE(v6);
    v18 = v55;
    if ( !v55 )
    {
      if ( v61 < 0 )
        goto LABEL_113;
      UsedPtesHandle = MiGetUsedPtesHandle(a1);
      MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
      if ( v56 )
      {
        if ( !v16 )
          goto LABEL_15;
        v31 = MI_READ_PTE_LOCK_FREE(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        if ( (v31 & 1) == 0 && (v31 & 0x3E0) == 0 )
          goto LABEL_15;
      }
      v55 = MiSwizzleInvalidPte(-4294966240LL, v30);
      v18 = v55;
      v32 = 0;
      v33 = v55;
      if ( !(unsigned int)MiPteInShadowRange(v6) )
        goto LABEL_32;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v32 = 1;
        if ( !HIBYTE(word_140C51864) )
        {
          v47 = (v18 & 1) == 0;
          goto LABEL_81;
        }
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v47 = (v18 & 1) == 0;
          v18 = v55;
LABEL_81:
          if ( !v47 )
            v33 |= 0x8000000000000000uLL;
          goto LABEL_32;
        }
        v18 = v55;
      }
LABEL_32:
      *(_QWORD *)v6 = v33;
      if ( v32 )
        MiWritePteShadow(v6, v33);
      v4 = a2;
      v16 = ProtoPteAddress;
    }
    if ( (v18 & 1) != 0 )
    {
      v19 = 6 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v55) >> 12) & 0xFFFFFFFFFFLL);
      if ( *(__int64 *)(8 * v19 - 0x220000000000LL + 40) >= 0
        || (*(_QWORD *)(8 * v19 - 0x220000000000LL + 8) | 0x8000000000000000uLL) != v16 )
      {
        goto LABEL_9;
      }
      if ( v61 < 0 )
      {
LABEL_113:
        if ( v10 )
          MiUnlockPageTableInternal(v5, v10);
        v21 = v67;
LABEL_116:
        LOBYTE(v17) = v66;
        MiUnlockWorkingSetShared(v5, v17);
        return v21;
      }
      v35 = MiCopyOnWrite(a1);
      if ( v35 >= 0 )
        goto LABEL_16;
      if ( v10 )
      {
        MiUnlockPageTableInternal(v5, v10);
        v10 = 0LL;
      }
      v12 = v66;
      LOBYTE(v34) = v66;
      MiUnlockWorkingSetShared(v5, v34);
      MiCopyOnWriteCheckConditions(v5, (unsigned int)v35);
      MiLockWorkingSetShared(v5);
      CurrentThread = v58;
    }
    else
    {
      if ( (v18 & 0x400) == 0 )
      {
        v20 = 0;
        goto LABEL_20;
      }
      if ( !MiIsPrototypePteVadLookup(v18) )
      {
        v17 = qword_140C50780;
        v46 = v18;
        if ( qword_140C50780 && (v18 & 0x10) == 0 )
          v46 = v18 & ~qword_140C50780;
        if ( v46 >> 16 != v16 )
        {
LABEL_9:
          v20 = 0;
LABEL_20:
          if ( v10 )
            MiUnlockPageTableInternal(v5, v10);
          LOBYTE(v17) = v66;
          MiUnlockWorkingSetShared(v5, v17);
          v27 = Process;
          if ( v57 )
          {
            v36 = (unsigned __int64)&Process[1].Affinity.StaticBitmap[8];
            if ( (_InterlockedExchangeAdd64(
                    (volatile signed __int64 *)&Process[1].Affinity.StaticBitmap[8],
                    0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(&v27[1].Affinity.StaticBitmap[8]);
            v37 = KeGetCurrentThread();
            if ( v36 - qword_140C50630 < 0x8000000000LL )
              SessionId = MmGetSessionIdEx((__int64)v37->ApcState.Process);
            else
              SessionId = -1;
            _disable();
            p_Process = (char *)&v37[1].Process;
            v40 = 0LL;
            while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v36 & 0x7FFFFFFFFFFFFFFCLL)
                 || !p_Process[18]
                 || (*(_DWORD *)p_Process & 1) != 0
                 || *((_DWORD *)p_Process + 2) != SessionId )
            {
              v40 = (unsigned int)(v40 + 1);
              p_Process += 96;
              if ( (unsigned int)v40 >= 6 )
                goto LABEL_65;
            }
            p_Process[18] = 0;
            if ( p_Process )
            {
              if ( *(__int64 *)p_Process < 0 )
              {
                *p_Process |= 2u;
                _enable();
                KiAbEntryRemoveFromTree(p_Process, 0x7FFFFFFFFFFFFFFCLL, v40);
                _disable();
              }
              v41 = *((_DWORD *)p_Process + 22);
              *((_DWORD *)p_Process + 22) = 0;
              p_Process[17] = 0;
              *(_QWORD *)p_Process = 0LL;
              v37->AbEntrySummary |= 1 << p_Process[16];
              _enable();
              if ( v41 )
                KiAbThreadRemoveBoostsSlow((ULONG_PTR)v37, (__int64)&v27[1].Affinity.StaticBitmap[8], v41);
              goto LABEL_56;
            }
LABEL_65:
            if ( (*((_DWORD *)&v37->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v37, (ULONG_PTR)&v27[1].Affinity.StaticBitmap[8], SessionId, 0LL);
            _enable();
LABEL_56:
            v42 = v58;
            v47 = v58->SpecialApcDisable++ == -1;
            if ( v47 && ($CEA84C04E3712D858E5667A507841A2A *)v42->ApcState.ApcListHead[0].Flink != &v42->152 )
              KiCheckForKernelApcDelivery();
          }
          if ( !v20 && v67 >= 0 )
            MiReturnFullProcessCommitment(v27, 1LL);
          return 0LL;
        }
      }
      v12 = v66;
      if ( (int)MiMakeProtoLeafValid(v6, 24LL, v66) < 0 && v18 == MI_READ_PTE_LOCK_FREE(v6) )
      {
        v21 = v67;
        if ( v67 < 0 )
        {
          if ( v10 )
            MiUnlockPageTableInternal(v5, v10);
          goto LABEL_116;
        }
LABEL_15:
        v54 = 1;
LABEL_16:
        v22 = (((unsigned __int64)*(unsigned __int8 *)(v4 + 34) << 31) | *(_DWORD *)(v4 + 52) & 0x7FFFFFFF) + 1;
        v23 = v22 ^ *(_DWORD *)(v4 + 52);
        v17 = v22 >> 31;
        *(_DWORD *)(v4 + 52) ^= v23 & 0x7FFFFFFF;
        *(_BYTE *)(v4 + 34) = v17;
        v20 = 1;
        if ( !v54 )
          goto LABEL_20;
        v55 = MiSwizzleInvalidPte(32LL, v17);
        v24 = v55;
        v25 = 0;
        v26 = v55;
        if ( !(unsigned int)MiPteInShadowRange(v6) )
          goto LABEL_18;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v25 = 1;
          if ( !HIBYTE(word_140C51864) )
            goto LABEL_121;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
LABEL_121:
          if ( (v24 & 1) != 0 )
            v26 |= 0x8000000000000000uLL;
        }
LABEL_18:
        *(_QWORD *)v6 = v26;
        v20 = 1;
        if ( v25 )
        {
          MiWritePteShadow(v6, v26);
          v20 = 1;
        }
        goto LABEL_20;
      }
      CurrentThread = v58;
      if ( v10 )
      {
        MiUnlockPageTableInternal(v5, v10);
        v10 = 0LL;
      }
    }
  }
  if ( v10 )
    MiUnlockPageTableInternal(v5, v10);
  LOBYTE(v15) = v12;
  MiUnlockWorkingSetShared(v5, v15);
  if ( v61 < 0 )
    return (unsigned int)v67;
  --CurrentThread->SpecialApcDisable;
  v57 = 1;
  v43 = (ULONG_PTR)&Process[1].Affinity.StaticBitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.StaticBitmap[8], 0LL);
  v44 = MiCommitPageTablesForVad(v4, a1);
  if ( v44 >= 0 )
  {
    v10 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    LOBYTE(v45) = MiLockWorkingSetShared(v5);
    v66 = v45;
    MiMakeSystemAddressValid(v6, 0, v11, v45, 0);
    v4 = a2;
    goto LABEL_6;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v43, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v43);
  v48 = KeGetCurrentThread();
  if ( v43 - qword_140C50630 >= 0x8000000000LL )
    v49 = -1;
  else
    v49 = MmGetSessionIdEx((__int64)v48->ApcState.Process);
  _disable();
  v50 = (char *)&v48[1].Process;
  v51 = 0LL;
  while ( (*(_QWORD *)v50 & 0x7FFFFFFFFFFFFFFCLL) != (v43 & 0x7FFFFFFFFFFFFFFCLL)
       || !v50[18]
       || (*(_DWORD *)v50 & 1) != 0
       || *((_DWORD *)v50 + 2) != v49 )
  {
    v51 = (unsigned int)(v51 + 1);
    v50 += 96;
    if ( (unsigned int)v51 >= 6 )
      goto LABEL_104;
  }
  v50[18] = 0;
  if ( v50 )
  {
    if ( *(__int64 *)v50 < 0 )
    {
      *v50 |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(v50, 0x7FFFFFFFFFFFFFFCLL, v51);
      _disable();
    }
    v52 = *((_DWORD *)v50 + 22);
    *((_DWORD *)v50 + 22) = 0;
    v50[17] = 0;
    *(_QWORD *)v50 = 0LL;
    v48->AbEntrySummary |= 1 << v50[16];
    _enable();
    if ( v52 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v48, v43, v52);
    goto LABEL_107;
  }
LABEL_104:
  if ( (*((_DWORD *)&v48->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v48, v43, v49, 0LL);
  _enable();
LABEL_107:
  v53 = v58;
  v47 = v58->SpecialApcDisable++ == -1;
  if ( v47 && ($CEA84C04E3712D858E5667A507841A2A *)v53->ApcState.ApcListHead[0].Flink != &v53->152 )
    KiCheckForKernelApcDelivery();
  if ( v67 >= 0 )
    MiReturnFullProcessCommitment(Process, 1LL);
  return (unsigned int)v44;
}
