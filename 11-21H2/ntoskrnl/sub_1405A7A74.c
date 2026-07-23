/*
 * XREFs of sub_1405A7A74 @ 0x1405A7A74
 * Callers:
 *     sub_140291FC0 @ 0x140291FC0 (sub_140291FC0.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_14045C52A @ 0x14045C52A (sub_14045C52A.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1405A7A74(__int64 a1, int a2)
{
  if ( a2 == -1073741801 )
  {
    *(_DWORD *)(a1 + 80) |= 2u;
  }
  else if ( a2 == -1073740748 )
  {
    *(_DWORD *)(a1 + 80) |= 4u;
  }
}
