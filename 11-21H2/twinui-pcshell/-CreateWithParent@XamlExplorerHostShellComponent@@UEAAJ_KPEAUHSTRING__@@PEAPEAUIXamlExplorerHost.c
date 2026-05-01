/*
 * XREFs of ?CreateWithParent@XamlExplorerHostShellComponent@@UEAAJ_KPEAUHSTRING__@@PEAPEAUIXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@ABI@@@Z @ 0x1800F2930
 * Callers:
 *     <none>
 * Callees:
 *     ?copy_to_abi@winrt@@YAXAEBUIUnknown@Foundation@Windows@1@AEAPEAX@Z @ 0x1800F2A28 (-copy_to_abi@winrt@@YAXAEBUIUnknown@Foundation@Windows@1@AEAPEAX@Z.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800F2B2C (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@PEAUHWND__@@AEBUhstring@6@@Z @ 0x1800F536C (--0XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlExplorerHostShellComponent::CreateWithParent(
        XamlExplorerHostShellComponent *this,
        HWND a2,
        HSTRING a3,
        const struct IUnknown *a4)
{
  void *v6; // rbx
  DWORD v7; // eax
  const char *v8; // r9
  char v9; // al
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow *v10; // rbx
  void **v11; // r8
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF
  HSTRING v16; // [rsp+50h] [rbp+18h] BYREF
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow *v17; // [rsp+58h] [rbp+20h] BYREF

  v16 = a3;
  a4->lpVtbl = 0LL;
  v6 = (void *)*((_QWORD *)this + 18);
  v7 = WaitForSingleObjectEx(v6, 0, 0);
  if ( v7 == 258 )
  {
    v9 = 0;
  }
  else
  {
    if ( v7 || WaitForSingleObjectEx(v6, 0, 0) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xA04,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
        v8);
    v9 = 1;
  }
  if ( !v9 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x130,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
      (const char *)0x80070015LL,
      v13);
  v15 = 0LL;
  winrt::hstring::operator=(&v15, &v16);
  v10 = (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow *)operator new(0x78uLL);
  v17 = v10;
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::XamlExplorerHostChildWindow(
    v10,
    a2,
    (const struct winrt::hstring *)&v15);
  *(_QWORD *)v10 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow>::`vftable';
  v10 = (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow *)((char *)v10 + 16);
  v17 = v10;
  winrt::copy_to_abi((winrt *)&v17, a4, v11);
  if ( v10 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
  return 0LL;
}
