/*
 * XREFs of ??_G?$_Ref_count_obj2@V?$test_merged_data@U_tip_GuidedSnapAssistTest@@@details@tip@@@std@@UEAAPEAXI@Z @ 0x18059B8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<tip::details::test_merged_data<_tip_GuidedSnapAssistTest>>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_GuidedSnapAssistTest>>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
