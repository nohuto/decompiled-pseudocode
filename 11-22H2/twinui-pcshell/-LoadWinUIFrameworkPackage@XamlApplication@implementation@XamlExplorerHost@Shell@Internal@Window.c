/*
 * XREFs of ?LoadWinUIFrameworkPackage@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18010EC90
 * Callers:
 *     ??0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18010ED44 (--0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x180098A8C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x1800BD3E0 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?IsAuditMode@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YA_NXZ @ 0x18010EA20 (-IsAuditMode@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YA_NXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_CreateXamlApplicationTest@XamlExplorerHostTipTests@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_CreateXamlApplicationTest@XamlExplorerHostTipTests@@@details@tip@@@std@@XZ @ 0x18010EEDC (-ensure_data@-$tip_test@U_tip_CreateXamlApplicationTest@XamlExplorerHostTipTests@@@tip@@AEBAAEAV.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication::LoadWinUIFrameworkPackage(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication *this)
{
  char IsAuditMode; // di
  _QWORD *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  IsAuditMode = winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::IsAuditMode(this);
  v3 = (_QWORD *)tip::tip_test<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest>::ensure_data((char *)this + 72);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v7,
    v3);
  v4 = v7;
  tip::details::test_common_data<0>::begin_update(v7 + 8);
  v5 = v4 + 184;
  if ( !v4 )
    v5 = 8LL;
  *(_BYTE *)v5 = IsAuditMode;
  if ( v4 )
  {
    tip::details::test_common_data<0>::end_update(v4 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v7);
  }
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  v6 = AddDependencyToProcessPackageGraph(L"Microsoft.UI.Xaml.CBS_8wekyb3d8bbwe", 0LL, 0LL, 0LL);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA8,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlApplication.cpp",
      (const char *)(unsigned int)v6,
      v7);
}
