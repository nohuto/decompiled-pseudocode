/*
 * XREFs of CcCopyWriteWontFlush @ 0x140319AB0
 * Callers:
 *     FsRtlCopyWrite @ 0x14084FDE0 (FsRtlCopyWrite.c)
 * Callees:
 *     CcCanIWriteStreamEx @ 0x14020FC80 (CcCanIWriteStreamEx.c)
 *     KxWaitForLockOwnerShip @ 0x1402611B0 (KxWaitForLockOwnerShip.c)
 *     CcGetPrivateVolumeCacheMapFromFileObject @ 0x140319D60 (CcGetPrivateVolumeCacheMapFromFileObject.c)
 *     CcIsFileObjectDirectMapped @ 0x140319DE8 (CcIsFileObjectDirectMapped.c)
 *     KxWaitForLockChainValid @ 0x14031A960 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14046058E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140571A88 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14058045C (KiHaltOnAddressWakeEntireList.c)
 */

BOOLEAN __stdcall CcCopyWriteWontFlush(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  struct _KTHREAD *CurrentThread; // rdx
  int v6; // eax
  unsigned __int64 v7; // r8
  __int64 PrivateVolumeCacheMapFromFileObject; // rbp
  __int64 v9; // r14
  unsigned __int8 CurrentIrql; // dl
  signed __int64 *v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  _DWORD *SchedulerAssist; // r9
  __int64 v16; // r10
  unsigned __int8 v17; // cl
  unsigned __int8 v18; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v20; // r8
  int v21; // eax
  bool v22; // zf
  signed __int32 v23[8]; // [rsp+0h] [rbp-88h] BYREF
  __int128 v24; // [rsp+40h] [rbp-48h] BYREF
  __int64 v25; // [rsp+50h] [rbp-38h]
  __int128 v26; // [rsp+58h] [rbp-30h]
  __int64 v27; // [rsp+68h] [rbp-20h]
  void *retaddr; // [rsp+88h] [rbp+0h]

  if ( Length >= 0x1000000 || (FileObject->Flags & 0x10) != 0 )
    return (unsigned __int8)CcIsFileObjectDirectMapped(FileObject, 0LL) != 0;
  CurrentThread = KeGetCurrentThread();
  v6 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
  v7 = CurrentThread->Process[1].Affinity.StaticBitmap[16];
  if ( v7 && v6 >= *(_DWORD *)(v7 + 1068) )
    v6 = *(_DWORD *)(v7 + 1068);
  if ( (v6 >= 2 || CurrentThread != KeGetCurrentThread() || !LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink))
    && v6 <= 0 )
  {
    return (unsigned __int8)CcIsFileObjectDirectMapped(FileObject, 0LL) != 0;
  }
  v27 = 0LL;
  PrivateVolumeCacheMapFromFileObject = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v24 = 0LL;
  v9 = *((_QWORD *)PspSystemPartition + 1);
  if ( CcEnablePerVolumeLazyWriter )
  {
    *((_QWORD *)&v24 + 1) = &CcMasterLock;
    *(_QWORD *)&v24 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v16) = 4;
      else
        v16 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v16;
    }
    LOBYTE(v25) = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v24, &CcMasterLock);
    }
    else
    {
      v11 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v24);
      if ( v11 )
        KxWaitForLockOwnerShip((signed __int64)&v24, v11);
    }
    PrivateVolumeCacheMapFromFileObject = CcGetPrivateVolumeCacheMapFromFileObject(FileObject, v9);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
    {
      _m_prefetchw(&v24);
      v12 = v24;
      if ( !(_QWORD)v24 )
      {
        if ( (__int128 *)_InterlockedCompareExchange64(
                           *((volatile signed __int64 **)&v24 + 1),
                           0LL,
                           (signed __int64)&v24) == &v24 )
          goto LABEL_14;
        v12 = KxWaitForLockChainValid(&v24);
      }
      *(_QWORD *)&v24 = 0LL;
      v17 = BYTE8(v24);
      if ( ((v17 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v12 + 8), *((__int64 *)&v24 + 1))) & 4) != 0 )
      {
        _InterlockedOr(v23, 0);
        KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v12 + 8) >> 5) & 0x7F], 0LL));
      }
      goto LABEL_14;
    }
    KiReleaseQueuedSpinLockInstrumented(&v24, retaddr);
LABEL_14:
    v13 = (unsigned __int8)v25;
    if ( (_DWORD)KiIrqlFlags )
    {
      v18 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v18 <= 0xFu && (unsigned __int8)v25 <= 0xFu && v18 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v20 = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v25 + 1));
        v22 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v13);
  }
  if ( (FileObject->Flags & 0x1000000) == 0
    || CcCanIWriteStreamEx(v9, PrivateVolumeCacheMapFromFileObject, (__int64)FileObject, Length, 0, 0, 0LL) )
  {
    return 1;
  }
  return (unsigned __int8)CcIsFileObjectDirectMapped(FileObject, 0LL) != 0;
}
