/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@PEAVCVisual@@@detail@@V?$checked_array_iterator@PEAPEAVCVisual@@@stdext@@@detail@@YAXV?$basic_iterator@PEAVCVisual@@@0@0V?$checked_array_iterator@PEAPEAVCVisual@@@stdext@@@Z @ 0x1801B5D28
 * Callers:
 *     ?reserve_region@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCVisual@@_K0@Z @ 0x1801196A4 (-reserve_region@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expans.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::move_backward_uninitialized<detail::basic_iterator<CVisual *>,stdext::checked_array_iterator<CVisual * *>>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 result; // rax
  __int64 v5; // r10
  _QWORD *v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx

  result = *a2;
  if ( *a2 != *a1 )
  {
    v5 = *a3;
    do
    {
      v6 = (_QWORD *)(result - 8);
      *a2 = (__int64)v6;
      if ( !v5 || (v7 = a3[2]) == 0 || (v8 = v7 - 1, a3[2] = v8, v8 >= a3[1]) )
        _invalid_parameter_noinfo_noreturn();
      *(_QWORD *)(v5 + 8 * v8) = *v6;
      result = *a2;
    }
    while ( *a2 != *a1 );
  }
  return result;
}
