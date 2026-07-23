/*
 * XREFs of sub_1402E1BD0 @ 0x1402E1BD0
 * Callers:
 *     sub_140259D60 @ 0x140259D60 (sub_140259D60.c)
 *     sub_14026187C @ 0x14026187C (sub_14026187C.c)
 *     sub_1402ABBF0 @ 0x1402ABBF0 (sub_1402ABBF0.c)
 *     sub_1402E1140 @ 0x1402E1140 (sub_1402E1140.c)
 *     sub_1402E18F8 @ 0x1402E18F8 (sub_1402E18F8.c)
 *     sub_1402E1AB0 @ 0x1402E1AB0 (sub_1402E1AB0.c)
 *     sub_140635144 @ 0x140635144 (sub_140635144.c)
 *     sub_1406354FC @ 0x1406354FC (sub_1406354FC.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall sub_1402E1BD0(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // r11
  __int64 v3; // r9

  if ( *(_DWORD *)(a1 + 300) == 1 )
  {
    ExAcquirePushLockExclusiveEx(a1 + 696, 0LL);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v3 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v3 + 20) |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0xFFFC;
    }
    *a2 = CurrentIrql;
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 696));
  }
}
