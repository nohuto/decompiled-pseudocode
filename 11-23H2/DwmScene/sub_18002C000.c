/*
 * XREFs of sub_18002C000 @ 0x18002C000
 * Callers:
 *     sub_1800C97F0 @ 0x1800C97F0 (sub_1800C97F0.c)
 *     sub_1800C9C20 @ 0x1800C9C20 (sub_1800C9C20.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_18002C000(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax
  __int128 v3; // xmm1

  result = a2;
  v3 = *(_OWORD *)(a1 + 112);
  *a2 = *(_OWORD *)(a1 + 96);
  a2[1] = v3;
  return result;
}
