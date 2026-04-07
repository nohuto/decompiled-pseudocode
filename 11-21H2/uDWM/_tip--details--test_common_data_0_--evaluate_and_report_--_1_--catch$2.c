/*
 * XREFs of _tip::details::test_common_data_0_::evaluate_and_report_::_1_::catch$2 @ 0x180065B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall tip::details::test_common_data_0_::evaluate_and_report_::_1_::catch_2(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a2 + 32);
  if ( !*(_BYTE *)(v2 + 96) )
  {
    *(_BYTE *)(v2 + 96) = 3;
    *(_WORD *)(v2 + 98) = 16395;
    *(_QWORD *)(v2 + 104) = 0LL;
  }
  return 0LL;
}
