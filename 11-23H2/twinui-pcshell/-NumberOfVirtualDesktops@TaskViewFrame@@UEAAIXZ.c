/*
 * XREFs of ?NumberOfVirtualDesktops@TaskViewFrame@@UEAAIXZ @ 0x18007E690
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18007C280 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?get@VirtualDesktopElements@__IVirtualDesktopBarElementViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIBindableObservableVector@Interop@Xaml@UI@Windows@@XZ @ 0x18007E73C (-get@VirtualDesktopElements@__IVirtualDesktopBarElementViewModelPublicNonVirtuals@Switcher@Exper.c)
 *     ?get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ @ 0x18007F26C (-get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskViewFrame::NumberOfVirtualDesktops(TaskViewFrame *this)
{
  __int64 (__fastcall ***v1)(_QWORD, __int64, __int64 *); // rbx
  __int64 v2; // rdi
  unsigned int v3; // esi

  if ( !*((_QWORD *)this + 20) )
    return 0LL;
  v1 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))WindowsInternal::ComposableShell::Experiences::Switcher::__IVirtualDesktopBarElementViewModelPublicNonVirtuals::VirtualDesktopElements::get();
  v2 = __abi_winrt_cast_to(0, v1, (__int64)&_uuidof__AUIBindableVector_Interop_Xaml_UI_Windows__);
  v3 = Windows::UI::Xaml::Interop::IBindableVector::Size::get(v2) - 1;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( v1 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v1)[2])(v1);
  return v3;
}
