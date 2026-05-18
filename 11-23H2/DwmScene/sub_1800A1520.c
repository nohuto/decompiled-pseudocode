/*
 * XREFs of sub_1800A1520 @ 0x1800A1520
 * Callers:
 *     sub_180027020 @ 0x180027020 (sub_180027020.c)
 * Callees:
 *     sub_180057460 @ 0x180057460 (sub_180057460.c)
 */

char __fastcall sub_1800A1520(__int64 a1)
{
  char result; // al
  __int64 v2; // r8

  result = sub_180057460(a1 + 184);
  if ( result )
    return sub_1800A14B0(v2, *(_QWORD *)(v2 + 192));
  return result;
}
