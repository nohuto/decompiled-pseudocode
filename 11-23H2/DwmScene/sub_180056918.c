/*
 * XREFs of sub_180056918 @ 0x180056918
 * Callers:
 *     sub_180028A70 @ 0x180028A70 (sub_180028A70.c)
 *     sub_180053510 @ 0x180053510 (sub_180053510.c)
 *     sub_180055DE8 @ 0x180055DE8 (sub_180055DE8.c)
 *     sub_18006F308 @ 0x18006F308 (sub_18006F308.c)
 *     sub_1800CD1B0 @ 0x1800CD1B0 (sub_1800CD1B0.c)
 *     sub_1800CE190 @ 0x1800CE190 (sub_1800CE190.c)
 *     sub_1800CF2D0 @ 0x1800CF2D0 (sub_1800CF2D0.c)
 *     sub_1800D11F0 @ 0x1800D11F0 (sub_1800D11F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180056918(__int64 a1)
{
  unsigned int **v1; // rcx
  __int64 result; // rax
  unsigned int *v3; // rcx

  v1 = *(unsigned int ***)(a1 + 112);
  result = 0LL;
  if ( v1 )
  {
    v3 = *v1;
    if ( v3 )
      return *v3;
  }
  return result;
}
