/*
 * XREFs of sub_14097CA4C @ 0x14097CA4C
 * Callers:
 *     sub_14030B440 @ 0x14030B440 (sub_14030B440.c)
 *     sub_1407B97B0 @ 0x1407B97B0 (sub_1407B97B0.c)
 * Callees:
 *     sub_1405AAF90 @ 0x1405AAF90 (sub_1405AAF90.c)
 *     sub_1405AB030 @ 0x1405AB030 (sub_1405AB030.c)
 *     sub_1406DD778 @ 0x1406DD778 (sub_1406DD778.c)
 */

__int64 __fastcall sub_14097CA4C(__int64 a1, __int64 a2)
{
  int v2; // r9d
  __int64 v3; // r11
  unsigned __int64 v4; // r8
  __int64 v5; // r10

  v2 = 1;
  v3 = a1;
  v4 = 1LL;
  if ( a2 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL) & 1) == 0 )
    {
      v4 = sub_1405AB030(a2);
      if ( !v4 )
        v4 = sub_1405AAF90(v5);
    }
  }
  if ( v4 != 512 )
    v2 = v4 >= 0x40000 ? 2 : 0;
  return sub_1406DD778(
           (*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32)) << 12,
           ((*(unsigned int *)(v3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32)) << 12) | 0xFFF,
           v2);
}
