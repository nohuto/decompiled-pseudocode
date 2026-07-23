/*
 * XREFs of sub_140584F10 @ 0x140584F10
 * Callers:
 *     sub_14029C520 @ 0x14029C520 (sub_14029C520.c)
 *     sub_14029C568 @ 0x14029C568 (sub_14029C568.c)
 *     sub_1403198A0 @ 0x1403198A0 (sub_1403198A0.c)
 *     sub_14055A55C @ 0x14055A55C (sub_14055A55C.c)
 *     sub_14055A5BC @ 0x14055A5BC (sub_14055A5BC.c)
 *     NtWriteFileGather @ 0x1406E3F70 (NtWriteFileGather.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

_BOOL8 __fastcall sub_140584F10(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  PEPROCESS v3; // r9
  __int64 *i; // rbx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // edx
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(PEPROCESS *)(a1 + 16);
  LockHandle.LockQueue = 0LL;
  if ( !v3 )
    v3 = PsInitialSystemProcess;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  i = (__int64 *)*((_QWORD *)v3 + 193);
  if ( !i )
    return 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)i + 3, &LockHandle);
LABEL_5:
  for ( i = (__int64 *)*i; i; i = (__int64 *)i[1] )
  {
    if ( a1 < i[3] )
      goto LABEL_5;
    if ( a1 <= i[3] )
    {
      if ( a2 || a3 )
      {
        i[9] = a2;
        i[10] = a3;
        *(_OWORD *)(i + 11) = 0LL;
        *(_OWORD *)(i + 13) = 0LL;
        *(_OWORD *)(i + 15) = 0LL;
      }
      break;
    }
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
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v13 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return i != 0;
}
