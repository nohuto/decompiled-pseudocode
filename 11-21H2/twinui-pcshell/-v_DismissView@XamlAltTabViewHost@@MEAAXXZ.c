/*
 * XREFs of ?v_DismissView@XamlAltTabViewHost@@MEAAXXZ @ 0x1805FE150
 * Callers:
 *     <none>
 * Callees:
 *     ?XamlContent@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBAXAEBUIInspectable@Foundation@Windows@3@@Z @ 0x180014F84 (-XamlContent@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExp.c)
 *     ?complete@?$tip_test@U_tip_TaskViewShowTest@@@tip@@QEAAXXZ @ 0x180016F30 (-complete@-$tip_test@U_tip_TaskViewShowTest@@@tip@@QEAAXXZ.c)
 *     ?is_running@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18004764C (-is_running@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x180063B30 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall XamlAltTabViewHost::v_DismissView(XamlAltTabViewHost *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  signed int v4; // eax
  __int64 v5; // rdx
  signed int v6; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 504);
  v3 = *((_QWORD *)this + 63);
  if ( v3 && tip::details::test_common_data<0>::is_running(v3 + 8) )
    tip::tip_test<_tip_TaskViewShowTest>::complete(v2);
  __abi_winrt_ptr_assign((__int64 *)this + 17, 0LL);
  if ( *((_QWORD *)this + 22) )
  {
    v7 = 0LL;
    winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::XamlContent(
      (_QWORD *)this + 22,
      &v7);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 88LL))(*((_QWORD *)this + 22), 0LL);
    if ( v4 < 0 )
      winrt::throw_hresult(v4);
    LOBYTE(v5) = 1;
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 22) + 104LL))(*((_QWORD *)this + 22), v5);
    if ( v6 < 0 )
      winrt::throw_hresult(v6);
    v7 = 0LL;
    winrt::Windows::Foundation::IUnknown::operator=(
      (XamlAltTabViewHost *)((char *)this + 176),
      (winrt::Windows::Foundation::IUnknown *)&v7);
    if ( v7 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  }
}
