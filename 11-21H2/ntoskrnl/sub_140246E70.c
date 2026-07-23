/*
 * XREFs of sub_140246E70 @ 0x140246E70
 * Callers:
 *     sub_1403C6B00 @ 0x1403C6B00 (sub_1403C6B00.c)
 *     sub_1405B2670 @ 0x1405B2670 (sub_1405B2670.c)
 * Callees:
 *     sub_14025E544 @ 0x14025E544 (sub_14025E544.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140246E70(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  __int64 v4; // rbx
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  bool v8; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 224);
  result = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v1 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 232) + 72LL) + 16LL) + 24512LL * *(unsigned int *)(v1 + 320);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 22808), &LockHandle);
    sub_14025E544(v4, v1, a1);
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
          v7 = *((_QWORD *)CurrentPrcb + 4375);
          result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v8 = ((unsigned int)result & *(_DWORD *)(v7 + 20)) == 0;
          *(_DWORD *)(v7 + 20) &= result;
          if ( v8 )
            result = sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    *(_QWORD *)(a1 + 224) = 0LL;
  }
  return result;
}
