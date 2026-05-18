/*
 * XREFs of sub_18002E000 @ 0x18002E000
 * Callers:
 *     sub_1800DFC90 @ 0x1800DFC90 (sub_1800DFC90.c)
 *     sub_1800E00E0 @ 0x1800E00E0 (sub_1800E00E0.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_18002E000(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax
  __int128 v3; // xmm1

  result = a2;
  v3 = *(_OWORD *)(a1 + 112);
  *a2 = *(_OWORD *)(a1 + 96);
  a2[1] = v3;
  return result;
}
