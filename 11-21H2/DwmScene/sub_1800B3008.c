/*
 * XREFs of sub_1800B3008 @ 0x1800B3008
 * Callers:
 *     sub_180052D40 @ 0x180052D40 (sub_180052D40.c)
 *     sub_1800B4528 @ 0x1800B4528 (sub_1800B4528.c)
 * Callees:
 *     sub_1800441D8 @ 0x1800441D8 (sub_1800441D8.c)
 *     sub_1800B2EE0 @ 0x1800B2EE0 (sub_1800B2EE0.c)
 */

__int64 *__fastcall sub_1800B3008(__int64 a1, __int64 *a2)
{
  __int64 v3; // r11
  __int64 v4; // r8
  _QWORD *v5; // r9
  __int64 v6; // r11

  if ( !*(_BYTE *)sub_1800441D8(a1 + 184) || *(_BYTE *)sub_1800441D8(v3 + 185) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_1800B2EE0(v6, a2, *(_QWORD *)(v6 + 192), v4, v5);
  }
  return a2;
}
