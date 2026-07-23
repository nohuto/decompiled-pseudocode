/*
 * XREFs of sub_1403965EC @ 0x1403965EC
 * Callers:
 *     sub_140A51700 @ 0x140A51700 (sub_140A51700.c)
 *     sub_140A5179C @ 0x140A5179C (sub_140A5179C.c)
 *     sub_140A517EC @ 0x140A517EC (sub_140A517EC.c)
 *     sub_140A51888 @ 0x140A51888 (sub_140A51888.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403965EC(struct _KLOCK_QUEUE_HANDLE *a1)
{
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v5; // r9
  bool v6; // zf

  KeReleaseInStackQueuedSpinLockFromDpcLevel(a1);
  result = (unsigned int)dword_140D06B08;
  OldIrql = a1->OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v5 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
        v6 = ((unsigned int)result & *(_DWORD *)(v5 + 20)) == 0;
        *(_DWORD *)(v5 + 20) &= result;
        if ( v6 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
