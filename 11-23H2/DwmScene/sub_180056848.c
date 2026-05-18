/*
 * XREFs of sub_180056848 @ 0x180056848
 * Callers:
 *     sub_180028A20 @ 0x180028A20 (sub_180028A20.c)
 *     sub_180053430 @ 0x180053430 (sub_180053430.c)
 *     sub_180055DE8 @ 0x180055DE8 (sub_180055DE8.c)
 *     sub_18006F308 @ 0x18006F308 (sub_18006F308.c)
 *     sub_1800CD1B0 @ 0x1800CD1B0 (sub_1800CD1B0.c)
 *     sub_1800CE190 @ 0x1800CE190 (sub_1800CE190.c)
 *     sub_1800CF2D0 @ 0x1800CF2D0 (sub_1800CF2D0.c)
 *     sub_1800D11F0 @ 0x1800D11F0 (sub_1800D11F0.c)
 *     sub_1800D2FD0 @ 0x1800D2FD0 (sub_1800D2FD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180056848(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(__int64 **)(a1 + 112);
  result = 0LL;
  if ( v1 )
  {
    v3 = *v1;
    if ( v3 )
      return *(unsigned int *)(v3 + 4);
  }
  return result;
}
