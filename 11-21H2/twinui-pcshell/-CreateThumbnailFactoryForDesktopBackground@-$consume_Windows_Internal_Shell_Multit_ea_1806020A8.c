/*
 * XREFs of ?CreateThumbnailFactoryForDesktopBackground@?$consume_Windows_Internal_Shell_Multitasking_Desktop_IDesktopThumbnailDevice@UDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUDesktopBackgroundThumbnailFactory@Desktop@Multitasking@Shell@Internal@Windows@3@AEBURect@Foundation@93@@Z @ 0x1806020A8
 * Callers:
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1806017E0 (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_Multitasking_Desktop_IDesktopThumbnailDevice<winrt::Windows::Internal::Shell::Multitasking::Desktop::DesktopThumbnailDevice>::CreateThumbnailFactoryForDesktopBackground(
        void (__fastcall ****a1)(_QWORD, void *, _QWORD *),
        _QWORD *a2,
        __int128 *a3)
{
  void (__fastcall ***v5)(_QWORD, void *, _QWORD *); // rcx
  void (__fastcall **v6)(_QWORD, void *, _QWORD *); // rax
  signed int v7; // eax
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF
  void (__fastcall ***v10)(_QWORD, void *, _QWORD *); // [rsp+40h] [rbp+8h] BYREF
  void (__fastcall ***v11)(_QWORD, void *, _QWORD *); // [rsp+50h] [rbp+18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  v5 = *a1;
  if ( v5 )
  {
    v10 = 0LL;
    (**v5)(
      v5,
      &winrt::impl::guid_v<winrt::Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice>,
      &v10);
    v5 = v10;
  }
  v11 = v5;
  v6 = *v5;
  v9 = *a3;
  v7 = ((__int64 (__fastcall *)(_QWORD, __int128 *, __int64 *))v6[7])(v5, &v9, &v12);
  if ( v7 < 0 )
    winrt::throw_hresult(v7);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
  *a2 = v12;
  return a2;
}
