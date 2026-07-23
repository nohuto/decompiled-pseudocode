/*
 * XREFs of sub_1403FB0EC @ 0x1403FB0EC
 * Callers:
 *     sub_1406884C4 @ 0x1406884C4 (sub_1406884C4.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1403FB0EC(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0

  v2 = *a2;
  *(_DWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 16) = v2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 32) = a2;
}
