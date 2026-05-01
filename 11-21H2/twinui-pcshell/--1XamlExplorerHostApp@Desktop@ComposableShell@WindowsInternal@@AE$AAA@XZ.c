/*
 * XREFs of ??1XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@AE$AAA@XZ @ 0x18042438C
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x18012C3C0 (-__abi_Release@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@U.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1800F65E4 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ??1?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAA@XZ @ 0x180424208 (--1-$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V-$alloc.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::~XamlExplorerHostApp(__int64 a1)
{
  winrt::Windows::Foundation::IUnknown *v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rbx
  int v6; // eax

  v2 = (winrt::Windows::Foundation::IUnknown *)(a1 + 240);
  if ( *(_QWORD *)v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v2);
  std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::~deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>(a1 + 200);
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 120));
  v3 = *(_QWORD *)(a1 + 112);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a1 + 104));
  if ( *(_QWORD *)(a1 + 88) )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)(a1 + 88));
  result = __abi_winrt_cast_to(
             1,
             *(__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))(a1 + 56),
             (__int64)&_uuidof__AUIDisposable_Platform__);
  v5 = result;
  if ( result )
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 48LL))(result);
    if ( v6 < 0 )
    {
      __abi_WinRTraiseException(v6);
      __debugbreak();
    }
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
