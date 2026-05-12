/*
 * XREFs of RaidAdapterInsertUnit @ 0x1C001C684
 * Callers:
 *     RaidBusEnumeratorGetUnit @ 0x1C001B154 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C001E9DC (RaidBusEnumeratorProcessNewUnit.c)
 *     RaidUnitConvertToNormalUnit @ 0x1C0020454 (RaidUnitConvertToNormalUnit.c)
 *     StorProcessNVMeNewUnit @ 0x1C0090898 (StorProcessNVMeNewUnit.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C00112B8 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0011350 (RaidAdapterReleaseInterruptLock.c)
 *     StorInsertDictionary @ 0x1C001C738 (StorInsertDictionary.c)
 */

void __fastcall RaidAdapterInsertUnit(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r8
  _QWORD *v5; // rcx
  KIRQL v6; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
  v4 = *(_QWORD **)(a1 + 152);
  v5 = (_QWORD *)(a2 + 56);
  if ( *v4 != a1 + 144 )
    __fastfail(3u);
  *v5 = a1 + 144;
  *(_QWORD *)(a2 + 64) = v4;
  *v4 = v5;
  *(_QWORD *)(a1 + 152) = v5;
  ++*(_DWORD *)(a1 + 160);
  v6 = RaidAdapterAcquireInterruptLock(a1);
  StorInsertDictionary(a1 + 168, a2 + 72);
  RaidAdapterReleaseInterruptLock(a1, v6);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
