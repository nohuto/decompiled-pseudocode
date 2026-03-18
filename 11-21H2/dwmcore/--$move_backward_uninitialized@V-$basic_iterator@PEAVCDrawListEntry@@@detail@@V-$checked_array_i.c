/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@PEAVCDrawListEntry@@@detail@@V?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@@detail@@YAXV?$basic_iterator@PEAVCDrawListEntry@@@0@0V?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@@Z @ 0x1801E2D40
 * Callers:
 *     ?reserve_region@?$vector_facade@PEAVCDrawListEntry@@V?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCDrawListEntry@@_K0@Z @ 0x1801E3E4C (-reserve_region@-$vector_facade@PEAVCDrawListEntry@@V-$buffer_impl@PEAVCDrawListEntry@@$03$00Vli.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::move_backward_uninitialized<detail::basic_iterator<CDrawListEntry *>,stdext::checked_array_iterator<CDrawListEntry * *>>(
        unsigned __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 result; // rax
  _QWORD *v4; // r9
  __int64 v5; // r10
  _QWORD *v6; // rax

  result = *a2;
  v4 = (_QWORD *)a1;
  if ( *a2 != *(_QWORD *)a1 )
  {
    v5 = *a3;
    do
    {
      v6 = (_QWORD *)(result - 8);
      *a2 = (__int64)v6;
      if ( !v5 || (a1 = a3[2]) == 0 || (--a1, a3[2] = a1, a1 >= a3[1]) )
      {
        _o__invalid_parameter_noinfo_noreturn(a1);
        __debugbreak();
        JUMPOUT(0x1801E2D96LL);
      }
      *(_QWORD *)(v5 + 8 * a1) = *v6;
      result = *a2;
    }
    while ( *a2 != *v4 );
  }
  return result;
}
