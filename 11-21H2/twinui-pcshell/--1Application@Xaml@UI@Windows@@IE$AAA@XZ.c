/*
 * XREFs of ??1Application@Xaml@UI@Windows@@IE$AAA@XZ @ 0x1804242C4
 * Callers:
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::_XamlExplorerHostApp_::_1_::dtor$0 @ 0x180424463 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--_XamlExplorerHostApp_--_1_--dto.c)
 * Callees:
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1800F65E4 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Windows::UI::Xaml::Application::~Application(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  int v3; // eax

  result = __abi_winrt_cast_to(
             1,
             *(__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))(a1 + 48),
             (__int64)&_uuidof__AUIDisposable_Platform__);
  v2 = result;
  if ( result )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 48LL))(result);
    if ( v3 < 0 )
    {
      __abi_WinRTraiseException(v3);
      __debugbreak();
    }
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
