/*
 * XREFs of sub_1800A1638 @ 0x1800A1638
 * Callers:
 *     sub_1800A1674 @ 0x1800A1674 (sub_1800A1674.c)
 * Callees:
 *     sub_180057460 @ 0x180057460 (sub_180057460.c)
 */

char __fastcall sub_1800A1638(__int64 a1)
{
  char result; // al
  _QWORD *v2; // r8
  __int64 v3; // r10

  result = sub_180057460(a1 + 184);
  if ( result )
    return sub_1800A1580(v3, *(_QWORD *)(v3 + 192), (__int64)v2, v2);
  return result;
}
