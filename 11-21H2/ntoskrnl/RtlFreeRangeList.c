/*
 * XREFs of RtlFreeRangeList @ 0x1408397E0
 * Callers:
 *     sub_140839460 @ 0x140839460 (sub_140839460.c)
 *     sub_140839900 @ 0x140839900 (sub_140839900.c)
 *     ArbBootAllocation @ 0x140839BE0 (ArbBootAllocation.c)
 *     RtlCopyRangeList @ 0x14083A400 (RtlCopyRangeList.c)
 *     sub_14090B3B0 @ 0x14090B3B0 (sub_14090B3B0.c)
 *     sub_14090B4C0 @ 0x14090B4C0 (sub_14090B4C0.c)
 *     sub_14090B860 @ 0x14090B860 (sub_14090B860.c)
 *     ArbRollbackAllocation @ 0x14090BA30 (ArbRollbackAllocation.c)
 *     sub_14090BA50 @ 0x14090BA50 (sub_14090BA50.c)
 *     sub_140962930 @ 0x140962930 (sub_140962930.c)
 *     sub_140962A18 @ 0x140962A18 (sub_140962A18.c)
 *     RtlMergeRangeLists @ 0x1409B59D0 (RtlMergeRangeLists.c)
 * Callees:
 *     sub_14083984C @ 0x14083984C (sub_14083984C.c)
 */

_QWORD *__fastcall RtlFreeRangeList(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v3; // rbx
  _QWORD *i; // rcx
  _QWORD *v5; // rbx
  __int64 v6; // r8
  _QWORD *v7; // rdx

  *(_DWORD *)(a1 + 16) = 0;
  result = *(_QWORD **)a1;
  *(_DWORD *)(a1 + 20) = 0;
  v3 = *result;
  for ( i = result - 5; ; result = i + 5 )
  {
    v5 = (_QWORD *)(v3 - 40);
    if ( (_QWORD *)a1 == result )
      break;
    v6 = *result;
    if ( *(_QWORD **)(*result + 8LL) != result || (v7 = (_QWORD *)result[1], (_QWORD *)*v7 != result) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    sub_14083984C(i);
    i = v5;
    v3 = v5[5];
  }
  return result;
}
