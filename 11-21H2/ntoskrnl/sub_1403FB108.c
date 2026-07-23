/*
 * XREFs of sub_1403FB108 @ 0x1403FB108
 * Callers:
 *     sub_1406884C4 @ 0x1406884C4 (sub_1406884C4.c)
 * Callees:
 *     sub_1403FB004 @ 0x1403FB004 (sub_1403FB004.c)
 */

_OWORD *__fastcall sub_1403FB108(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rbx
  __int64 v3; // rax
  _OWORD *result; // rax

  v2 = (_DWORD *)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 40) & 3;
  *(_DWORD *)(v3 + a1) = 0;
  *(_BYTE *)(v3 + a1) = 0x80;
  sub_1403FB004((unsigned int *)(a1 + 16), a1, 8LL);
  *a2 = *v2;
  a2[1] = *(_DWORD *)(a1 + 20);
  *(_DWORD *)a1 = 0;
  result = *(_OWORD **)(a1 + 32);
  *(_DWORD *)(a1 + 40) = 0;
  *(_OWORD *)v2 = *result;
  return result;
}
