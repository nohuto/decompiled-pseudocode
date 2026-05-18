/*
 * XREFs of sub_18003C334 @ 0x18003C334
 * Callers:
 *     sub_18003C72C @ 0x18003C72C (sub_18003C72C.c)
 * Callees:
 *     sub_18003E1D0 @ 0x18003E1D0 (sub_18003E1D0.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 */

_OWORD *__fastcall sub_18003C334(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1

  sub_18003E330(a1);
  if ( *(_QWORD *)(a1 + 352) != *(_QWORD *)(a1 + 208) )
    sub_18003E1D0(a1);
  result = a2;
  v5 = *(_OWORD *)(a1 + 240);
  *a2 = *(_OWORD *)(a1 + 224);
  v6 = *(_OWORD *)(a1 + 256);
  a2[1] = v5;
  v7 = *(_OWORD *)(a1 + 272);
  a2[2] = v6;
  a2[3] = v7;
  return result;
}
