/*
 * XREFs of sub_140268A70 @ 0x140268A70
 * Callers:
 *     sub_1402446B4 @ 0x1402446B4 (sub_1402446B4.c)
 *     sub_140265BE4 @ 0x140265BE4 (sub_140265BE4.c)
 *     sub_14026873C @ 0x14026873C (sub_14026873C.c)
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     sub_140277580 @ 0x140277580 (sub_140277580.c)
 *     sub_1402BBEE0 @ 0x1402BBEE0 (sub_1402BBEE0.c)
 *     sub_1402C7DF0 @ 0x1402C7DF0 (sub_1402C7DF0.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140328690 @ 0x140328690 (sub_140328690.c)
 *     sub_1405C32E4 @ 0x1405C32E4 (sub_1405C32E4.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_140268A70(__int64 a1, int a2)
{
  int v2; // ecx
  _BOOL8 result; // rax

  result = 1;
  if ( (*(_DWORD *)(a1 + 16) & 0x3E0LL) == 0 )
  {
    v2 = *(unsigned __int8 *)(a1 + 34) >> 6;
    if ( v2 == a2 || ((unsigned __int8)((1 << v2) | (1 << a2)) & (unsigned __int8)byte_140C50818) == 0 )
      return 0;
  }
  return result;
}
