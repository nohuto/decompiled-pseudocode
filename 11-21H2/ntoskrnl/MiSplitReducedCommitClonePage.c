/*
 * XREFs of MiSplitReducedCommitClonePage @ 0x1405845D4
 * Callers:
 *     MiProbeLeafPteAccess @ 0x14031C290 (MiProbeLeafPteAccess.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MiLocateCloneAddress @ 0x140234F14 (MiLocateCloneAddress.c)
 *     MiLockProbePacketWorkingSet @ 0x14023CB20 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14023CB68 (MiUnlockProbePacketWorkingSet.c)
 *     MiLockLowestValidPageTable @ 0x14027D6E0 (MiLockLowestValidPageTable.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiProcessCommitIntact @ 0x140580CE0 (MiProcessCommitIntact.c)
 *     MiCopyOnWriteCheckConditions @ 0x1405BCAF8 (MiCopyOnWriteCheckConditions.c)
 *     MiReturnFullProcessCommitment @ 0x1406FEC50 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x1407BE280 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiSplitReducedCommitClonePage(_QWORD *a1)
{
  unsigned __int64 v2; // rcx
  int v4; // ebp
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  int v8; // r15d
  __int64 v9; // rsi
  struct _KTHREAD *v10; // rbp
  unsigned int v11; // ecx
  __int64 v12; // rbx
  unsigned int v13; // edx
  int v14; // r8d
  bool v15; // zf
  unsigned __int64 valid; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *CloneAddress; // rax
  __int64 v22; // rcx
  __int64 v23; // rsi
  struct _KTHREAD *v24; // rbp
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v27; // edx
  int v28; // r9d
  unsigned __int64 v29; // [rsp+70h] [rbp+8h] BYREF
  __int64 v30; // [rsp+78h] [rbp+10h] BYREF

  v2 = a1[1];
  v29 = 0LL;
  if ( !(unsigned int)MiProcessCommitIntact(v2) )
    return 3221225477LL;
  MiUnlockProbePacketWorkingSet((__int64)a1);
  v4 = 1;
  CurrentThread = KeGetCurrentThread();
  v6 = ((a1[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = a1[11];
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v7 + 1232, 0LL);
  v8 = MiChargeFullProcessCommitment(a1[11], 1LL);
  if ( v8 >= 0 )
  {
    MiLockProbePacketWorkingSet((__int64)a1);
    valid = MiLockLowestValidPageTable(a1[13], v6, &v29);
    v17 = v29;
    a1[5] = valid;
    if ( v17 == v6 )
    {
      v30 = MI_READ_PTE_LOCK_FREE(v17);
      if ( (v30 & 1) != 0 )
      {
        v18 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v30) >> 12) & 0xFFFFFFFFFFLL)
            - 0x220000000000LL;
        v19 = *(_QWORD *)(v18 + 40);
        if ( v19 < 0 )
        {
          v20 = *(_QWORD *)(v18 + 8);
          if ( v20 < 0 || (v19 & 0x10000000000LL) != 0 || !v20 )
          {
            CloneAddress = MiLocateCloneAddress(a1[11], v20 | 0x8000000000000000uLL);
            if ( CloneAddress )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v22 + 1680) + 344LL) > CloneAddress[12] )
              {
                v8 = MiCopyOnWrite(a1[1], v6, 0xFFFFFFFFFFFFFFFFuLL, 0);
                if ( v8 >= 0 )
                  v4 = 0;
              }
            }
          }
        }
      }
    }
    MiUnlockProbePacketWorkingSet((__int64)a1);
    if ( v4 )
      MiReturnFullProcessCommitment(a1[11], 1LL);
    v23 = a1[11] + 1232LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v23);
    v24 = KeGetCurrentThread();
    if ( (unsigned __int64)(v23 - qword_140C50630) >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v24->ApcState.Process);
    _disable();
    p_Process = (__int64)&v24[1].Process;
    v27 = 0;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v23 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(p_Process + 18)
         || (*(_DWORD *)p_Process & 1) != 0
         || *(_DWORD *)(p_Process + 8) != SessionId )
    {
      ++v27;
      p_Process += 96LL;
      if ( v27 >= 6 )
        goto LABEL_49;
    }
    *(_BYTE *)(p_Process + 18) = 0;
    if ( !p_Process )
    {
LABEL_49:
      if ( (*((_DWORD *)&v24->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v24, v23, SessionId, 0LL);
      _enable();
      goto LABEL_57;
    }
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v28 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    v24->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
    _enable();
    if ( v28 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v24, v23, v28);
LABEL_57:
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    if ( v8 < 0 )
      MiCopyOnWriteCheckConditions(a1[13], (unsigned int)v8);
    MiLockProbePacketWorkingSet((__int64)a1);
    return 0LL;
  }
  else
  {
    v9 = a1[11] + 1232LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
    v10 = KeGetCurrentThread();
    if ( (unsigned __int64)(v9 - qword_140C50630) >= 0x8000000000LL )
      v11 = -1;
    else
      v11 = MmGetSessionIdEx((__int64)v10->ApcState.Process);
    _disable();
    v12 = (__int64)&v10[1].Process;
    v13 = 0;
    while ( (*(_QWORD *)v12 & 0x7FFFFFFFFFFFFFFCLL) != (v9 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v12 + 18)
         || (*(_DWORD *)v12 & 1) != 0
         || *(_DWORD *)(v12 + 8) != v11 )
    {
      ++v13;
      v12 += 96LL;
      if ( v13 >= 6 )
        goto LABEL_15;
    }
    *(_BYTE *)(v12 + 18) = 0;
    if ( !v12 )
    {
LABEL_15:
      if ( (*((_DWORD *)&v10->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v10, v9, v11, 0LL);
      _enable();
      goto LABEL_23;
    }
    if ( *(__int64 *)v12 < 0 )
    {
      *(_BYTE *)v12 |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(v12);
      _disable();
    }
    v14 = *(_DWORD *)(v12 + 88);
    *(_DWORD *)(v12 + 88) = 0;
    *(_BYTE *)(v12 + 17) = 0;
    *(_QWORD *)v12 = 0LL;
    v10->AbEntrySummary |= 1 << *(_BYTE *)(v12 + 16);
    _enable();
    if ( v14 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v10, v9, v14);
LABEL_23:
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    MiLockProbePacketWorkingSet((__int64)a1);
    return (unsigned int)v8;
  }
}
