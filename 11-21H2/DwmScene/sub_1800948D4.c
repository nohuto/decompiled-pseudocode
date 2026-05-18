/*
 * XREFs of sub_1800948D4 @ 0x1800948D4
 * Callers:
 *     sub_180068694 @ 0x180068694 (sub_180068694.c)
 * Callees:
 *     sub_180093E70 @ 0x180093E70 (sub_180093E70.c)
 */

_OWORD *__fastcall sub_1800948D4(__int64 *a1, _OWORD *a2)
{
  char *v3; // rdx
  _OWORD *result; // rax

  v3 = (char *)a1[4];
  if ( v3 == (char *)a1[5] )
    return sub_180093E70(a1 + 3, v3, a2);
  *(_OWORD *)v3 = *a2;
  a1[4] += 16LL;
  return result;
}
