/*
 * XREFs of ?GetVirtualDesktopIndex@XamlAllUpViewHost@@AEAAJPE$AAVVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@PEAI@Z @ 0x1804344C4
 * Callers:
 *     _lambda_baaea9c5454d5217874bd274f7881db0_::operator() @ 0x18042FDDC (_lambda_baaea9c5454d5217874bd274f7881db0_--operator().c)
 * Callees:
 *     ?get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ @ 0x180037EEC (-get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ.c)
 *     ?get@VirtualDesktopElements@__IVirtualDesktopBarElementViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIBindableObservableVector@Interop@Xaml@UI@Windows@@XZ @ 0x180037F28 (-get@VirtualDesktopElements@__IVirtualDesktopBarElementViewModelPublicNonVirtuals@Switcher@Exper.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800693F8 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1800F65E4 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlAllUpViewHost::GetVirtualDesktopIndex(
        TabletModeHelpers *a1,
        enum _TABLETMODESTATE *a2,
        _DWORD *a3)
{
  __int64 (__fastcall ***v5)(_QWORD, __int64, __int64 *); // rbx
  __int64 v6; // rdi

  if ( a2 && TabletModeHelpers::IsTabletMode(a1, a2) )
  {
    v5 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))WindowsInternal::ComposableShell::Experiences::Switcher::__IVirtualDesktopBarElementViewModelPublicNonVirtuals::VirtualDesktopElements::get((__int64)a2);
    v6 = __abi_winrt_cast_to(0, v5, (__int64)&_uuidof__AUIBindableVector_Interop_Xaml_UI_Windows__);
    *a3 = Windows::UI::Xaml::Interop::IBindableVector::Size::get(v6) - 1;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v5 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v5)[2])(v5);
  }
  else
  {
    *a3 = 0;
  }
  return 0LL;
}
