/*
 * XREFs of sub_1800850E8 @ 0x1800850E8
 * Callers:
 *     sub_1800609E8 @ 0x1800609E8 (sub_1800609E8.c)
 *     sub_180084738 @ 0x180084738 (sub_180084738.c)
 * Callees:
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_180084F30 @ 0x180084F30 (sub_180084F30.c)
 */

char __fastcall sub_1800850E8(__int64 a1)
{
  char result; // al
  __int64 v2; // rdx

  result = sub_180011DE0((_QWORD *)(a1 + 112));
  if ( result )
    return sub_180084F30(v2);
  return result;
}
