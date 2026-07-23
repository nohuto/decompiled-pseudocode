/*
 * XREFs of sub_1403867F4 @ 0x1403867F4
 * Callers:
 *     sub_140373F2C @ 0x140373F2C (sub_140373F2C.c)
 *     sub_1403DD3F8 @ 0x1403DD3F8 (sub_1403DD3F8.c)
 *     sub_14059673C @ 0x14059673C (sub_14059673C.c)
 *     sub_14059726C @ 0x14059726C (sub_14059726C.c)
 *     sub_14059770C @ 0x14059770C (sub_14059770C.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403867F4(__int64 a1, int a2)
{
  __int64 v3; // rbx
  int v4; // esi
  unsigned __int64 OldIrql; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (*(_DWORD *)(a1 + 4) & 0x20) != 0 )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 16600);
  if ( !v3 )
    return 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
  if ( !*(_DWORD *)(v3 + 40) )
    KeResetEvent((PRKEVENT)v3);
  if ( (a2 & *(_DWORD *)(v3 + 40)) == a2 )
  {
    v4 = 0;
  }
  else
  {
    v4 = 1;
    *(_DWORD *)(v3 + 40) |= a2;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        v10 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( v4 )
    KeSetEvent((PRKEVENT)(v3 + 96), 0, 0);
  if ( a2 != 1024 )
    KeWaitForSingleObject((PVOID)v3, WrVirtualMemory, 0, 0, 0LL);
  return 1LL;
}
