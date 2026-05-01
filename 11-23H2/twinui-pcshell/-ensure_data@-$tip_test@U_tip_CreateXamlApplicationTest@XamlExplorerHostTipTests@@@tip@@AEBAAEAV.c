/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_CreateXamlApplicationTest@XamlExplorerHostTipTests@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_CreateXamlApplicationTest@XamlExplorerHostTipTests@@@details@tip@@@std@@XZ @ 0x18010EEDC
 * Callers:
 *     ?LoadWinUIFrameworkPackage@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18010EC90 (-LoadWinUIFrameworkPackage@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Window.c)
 *     ??0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18010ED44 (--0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_CreateXamlApplicationTest@XamlExplorerHostTipTests@@@details@tip@@@std@@QEAA@XZ @ 0x18010EF28 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_CreateXamlApplicationTest@XamlExplorerHostT.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall tip::tip_test<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest>::ensure_data(_QWORD *a1)
{
  void *v2; // rax
  __int64 XamlApplication; // rax
  std::_Ref_count_base *v4; // rcx

  if ( !*a1 )
  {
    v2 = operator new(0xD0uLL);
    XamlApplication = std::_Ref_count_obj2<tip::details::test_merged_data<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest>>::_Ref_count_obj2<tip::details::test_merged_data<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest>>(v2);
    *a1 = XamlApplication + 16;
    v4 = (std::_Ref_count_base *)a1[1];
    a1[1] = XamlApplication;
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
  return a1;
}
