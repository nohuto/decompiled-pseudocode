/*
 * XREFs of sub_140404950 @ 0x140404950
 * Callers:
 *     sub_140404980 @ 0x140404980 (sub_140404980.c)
 *     sub_140A3792C @ 0x140A3792C (sub_140A3792C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140404950(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_140014850;
  result = 3285377520LL;
  *(_DWORD *)(a1 + 112) = -1009589776;
  return result;
}
