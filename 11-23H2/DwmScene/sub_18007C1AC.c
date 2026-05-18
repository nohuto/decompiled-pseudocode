/*
 * XREFs of sub_18007C1AC @ 0x18007C1AC
 * Callers:
 *     sub_180034AB0 @ 0x180034AB0 (sub_180034AB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18007C1AC(_OWORD *a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  result = a2;
  *(_OWORD *)(a2 + 24) = *a1;
  return result;
}
