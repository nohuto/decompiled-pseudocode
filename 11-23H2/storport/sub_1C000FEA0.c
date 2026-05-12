/*
 * XREFs of sub_1C000FEA0 @ 0x1C000FEA0
 * Callers:
 *     sub_1C000FE88 @ 0x1C000FE88 (sub_1C000FE88.c)
 *     sub_1C00A1110 @ 0x1C00A1110 (sub_1C00A1110.c)
 *     sub_1C00A11B0 @ 0x1C00A11B0 (sub_1C00A11B0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 */

__int64 __fastcall sub_1C000FEA0(int a1, IRP *a2)
{
  unsigned int v2; // r8d

  if ( (unsigned int)(a1 - 6) <= 1 )
  {
    a2->IoStatus.Information = 0LL;
    v2 = -1073741738;
  }
  else
  {
    v2 = 0;
  }
  return sub_1C0003440(a2, 0, v2);
}
