/*
 * XREFs of ?CreateInBand@XamlExplorerHostShellComponent@@UEAAJIURect@Foundation@Windows@ABI@@PEAPEAUIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@45@@Z @ 0x18002FC30
 * Callers:
 *     <none>
 * Callees:
 *     ??$make@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAIAEBURect@Foundation@67@AEAV?$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_returncode_policy@wil@@@wil@@@winrt@@YA?AUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@0@AEAIAEBURect@Foundation@50@AEAV?$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18002FD14 (--$make@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AE.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GSAVTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005F5A4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GSAVTest@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180060018 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands@@@details@.c)
 *     ?copy_to_abi@winrt@@YAXAEBUIUnknown@Foundation@Windows@1@AEAPEAX@Z @ 0x1800F2A28 (-copy_to_abi@winrt@@YAXAEBUIUnknown@Foundation@Windows@1@AEAPEAX@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall XamlExplorerHostShellComponent::CreateInBand(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const struct IUnknown *a4)
{
  __int64 v5; // r14
  void *v7; // rdi
  DWORD v8; // eax
  __int64 v9; // rdx
  const char *v10; // r9
  char v11; // al
  void **v12; // r8
  int v14; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v15[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = a3;
  v14 = a2;
  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands>::GetImpl'::`2'::impl,
    a2,
    a3);
  a4->lpVtbl = 0LL;
  v7 = *(void **)(a1 + 152);
  v8 = WaitForSingleObjectEx(v7, 0, 0);
  if ( v8 == 258 )
  {
    v11 = 0;
  }
  else
  {
    if ( v8 || WaitForSingleObjectEx(v7, 0, 0) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xA04,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
        v10);
    v11 = 1;
  }
  if ( !v11 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x11C,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
      (const char *)0x80070015LL,
      v14);
  LOBYTE(v9) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GSAVTest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GSAVTest>::GetImpl'::`2'::impl,
    v9);
  ((void (__fastcall *)(_QWORD *, int *, __int64, __int64))winrt::make<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,unsigned int &,winrt::Windows::Foundation::Rect const &,wil::com_ptr_t<IPrivilegedArrangementOperations,wil::err_returncode_policy> &>)(
    v15,
    &v14,
    v5,
    a1 + 136);
  winrt::copy_to_abi((winrt *)v15, a4, v12);
  if ( v15[0] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v15);
  return 0LL;
}
