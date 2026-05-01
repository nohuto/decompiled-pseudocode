/*
 * XREFs of ?CreateThumbnailFactoryForDesktopBackground@?$consume_Windows_Internal_Shell_Multitasking_Desktop_IDesktopThumbnailDevice@UDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x18076C08C
 * Callers:
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18076B524 (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_Multitasking_Desktop_IDesktopThumbnailDevice<winrt::Windows::Internal::Shell::Multitasking::Desktop::DesktopThumbnailDevice>::CreateThumbnailFactoryForDesktopBackground(
        void (__fastcall ****a1)(_QWORD, void *, _QWORD *),
        _QWORD *a2,
        __int128 *a3)
{
  void (__fastcall ***v5)(_QWORD, void *, _QWORD *); // rcx
  void (__fastcall ***v6)(_QWORD, void *, _QWORD *); // rdi
  void (__fastcall **v7)(_QWORD, void *, _QWORD *); // rax
  signed int v8; // eax
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  void (__fastcall ***v11)(_QWORD, void *, _QWORD *); // [rsp+60h] [rbp+8h] BYREF
  void (__fastcall ***v12)(_QWORD, void *, _QWORD *); // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0LL;
  v5 = *a1;
  if ( v5 )
  {
    v11 = 0LL;
    (**v5)(
      v5,
      &winrt::impl::guid_v<winrt::Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice>,
      &v11);
    v5 = v11;
    v6 = v11;
  }
  else
  {
    v6 = 0LL;
  }
  v12 = v5;
  v7 = *v5;
  v10 = *a3;
  v8 = ((__int64 (__fastcall *)(_QWORD, __int128 *, __int64 *))v7[7])(v5, &v10, &v13);
  if ( v8 < 0 )
    winrt::throw_hresult(v8);
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  *a2 = v13;
  return a2;
}
