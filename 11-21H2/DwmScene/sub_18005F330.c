/*
 * XREFs of sub_18005F330 @ 0x18005F330
 * Callers:
 *     sub_18003A638 @ 0x18003A638 (sub_18003A638.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_18005F330(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax
  __int128 v3; // xmm1

  result = a2;
  v3 = *(_OWORD *)(a1 + 464);
  *a2 = *(_OWORD *)(a1 + 448);
  a2[1] = v3;
  return result;
}
