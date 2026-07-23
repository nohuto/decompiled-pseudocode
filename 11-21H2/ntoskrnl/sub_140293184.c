/*
 * XREFs of sub_140293184 @ 0x140293184
 * Callers:
 *     sub_140701218 @ 0x140701218 (sub_140701218.c)
 * Callees:
 *     sub_14021158C @ 0x14021158C (sub_14021158C.c)
 *     sub_140294574 @ 0x140294574 (sub_140294574.c)
 */

char __fastcall sub_140293184(__int64 a1)
{
  __int64 v1; // rdx
  char result; // al
  unsigned __int8 CurrentIrql; // r8
  __int64 v5; // r11

  v1 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(v1 + 840) & 7) == 0 )
    return sub_140294574(a1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v5 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v5 + 20) |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
  }
  result = sub_14021158C(a1, v1, CurrentIrql);
  if ( !result )
    return sub_140294574(a1);
  return result;
}
