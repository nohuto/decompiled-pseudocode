/*
 * XREFs of sub_140397BB4 @ 0x140397BB4
 * Callers:
 *     sub_1407EE888 @ 0x1407EE888 (sub_1407EE888.c)
 *     sub_140806FC0 @ 0x140806FC0 (sub_140806FC0.c)
 *     sub_140989F5C @ 0x140989F5C (sub_140989F5C.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_14036A48C @ 0x14036A48C (sub_14036A48C.c)
 *     sub_14036AAC4 @ 0x14036AAC4 (sub_14036AAC4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140397BB4(int a1, char a2)
{
  PVOID *i; // rbx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  bool v9; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C24278, &LockHandle);
  if ( !a2 )
  {
    a1 &= ~dword_140C24480;
    if ( !a1 )
      goto LABEL_10;
    dword_140C24480 |= a1;
  }
  for ( i = (PVOID *)qword_140C242A0; i != &qword_140C242A0; i = (PVOID *)*i )
  {
    if ( a2 )
    {
      if ( (a1 & *((_DWORD *)i + 7)) == a1 )
        continue;
      *((_DWORD *)i + 7) |= a1;
    }
    sub_14036A48C(i, 0LL);
  }
  sub_14036AAC4((__int64)&unk_140C24440, CriticalWorkQueue);
LABEL_10:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)dword_140D06B08;
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v9 = ((unsigned int)result & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= result;
        if ( v9 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
