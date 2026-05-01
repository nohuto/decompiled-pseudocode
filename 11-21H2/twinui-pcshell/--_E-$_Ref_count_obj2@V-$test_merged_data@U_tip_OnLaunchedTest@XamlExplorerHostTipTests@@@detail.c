/*
 * XREFs of ??_E?$_Ref_count_obj2@V?$test_merged_data@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@details@tip@@@std@@UEAAPEAXI@Z @ 0x1801797F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<tip::details::test_merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest>>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_obj2<tip::details::test_merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest>>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0xA8uLL);
  return a1;
}
