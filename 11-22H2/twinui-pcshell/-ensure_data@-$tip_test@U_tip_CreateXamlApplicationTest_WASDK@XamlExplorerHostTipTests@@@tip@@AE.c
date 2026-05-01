/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_CreateXamlApplicationTest_WASDK@XamlExplorerHostTipTests@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_CreateXamlApplicationTest_WASDK@XamlExplorerHostTipTests@@@details@tip@@@std@@XZ @ 0x18002F078
 * Callers:
 *     ??0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002F0C4 (--0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?LoadWinUIFrameworkPackage@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18002F2B0 (-LoadWinUIFrameworkPackage@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Int.c)
 * Callees:
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_CreateXamlApplicationTest_WASDK@XamlExplorerHostTipTests@@@details@tip@@@std@@QEAA@XZ @ 0x18002F004 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_CreateXamlApplicationTest_WASDK@XamlExplore.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall tip::tip_test<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest_WASDK>::ensure_data(
        _QWORD *a1)
{
  void *v2; // rax
  __int64 XamlApplicationTest; // rax
  std::_Ref_count_base *v4; // rcx

  if ( !*a1 )
  {
    v2 = operator new(0xD0uLL);
    XamlApplicationTest = std::_Ref_count_obj2<tip::details::test_merged_data<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest_WASDK>>::_Ref_count_obj2<tip::details::test_merged_data<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest_WASDK>>((__int64)v2);
    *a1 = XamlApplicationTest + 16;
    v4 = (std::_Ref_count_base *)a1[1];
    a1[1] = XamlApplicationTest;
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
  return a1;
}
