/*
 * XREFs of sub_140839460 @ 0x140839460
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeRangeList @ 0x1408397E0 (RtlFreeRangeList.c)
 */

__int64 __fastcall sub_140839460(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  RtlFreeRangeList(*(_QWORD *)(a1 + 40));
  v2 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48);
  result = 0LL;
  *(_QWORD *)(a1 + 48) = v2;
  return result;
}
