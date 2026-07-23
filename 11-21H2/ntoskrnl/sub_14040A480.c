/*
 * XREFs of sub_14040A480 @ 0x14040A480
 * Callers:
 *     <none>
 * Callees:
 *     sub_14040106C @ 0x14040106C (sub_14040106C.c)
 */

__int64 __fastcall sub_14040A480(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbx

  v4 = *(_DWORD **)(a1 + 616);
  sub_14040106C(1, v4, a2 + 32, a3, a4);
  sub_14040106C(1, v4, *(unsigned int *)(a1 + 36) + a2 + 32, a3, a4);
  return sub_14040106C(0, *(_DWORD **)(a1 + 616), (unsigned int)(2 * *(_DWORD *)(a1 + 36)) + a2 + 32, a3, a4);
}
