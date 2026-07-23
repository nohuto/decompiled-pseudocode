/*
 * XREFs of sub_140AA4380 @ 0x140AA4380
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402ABBD0 @ 0x1402ABBD0 (sub_1402ABBD0.c)
 *     sub_1406021F8 @ 0x1406021F8 (sub_1406021F8.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

char __fastcall sub_140AA4380(__int64 a1)
{
  char result; // al
  unsigned __int8 CurrentIrql; // di

  result = sub_1406021F8(*(_QWORD *)(a1 + 8), 8uLL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    result = sub_1402ABBD0();
    if ( result )
      return sub_140A8C924(0xC4u, 0x40uLL, CurrentIrql, *(_QWORD *)(a1 + 8), 0LL);
  }
  return result;
}
