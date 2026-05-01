/*
 * XREFs of ?NumberOfItems@TaskViewFrame@@UEAAIXZ @ 0x180037D60
 * Callers:
 *     <none>
 * Callees:
 *     ?get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ @ 0x180037EEC (-get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ.c)
 *     ?get@SwitchItemElements@__ISwitchItemListViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIBindableObservableVector@Interop@Xaml@UI@Windows@@XZ @ 0x180037F9C (-get@SwitchItemElements@__ISwitchItemListViewModelPublicNonVirtuals@Switcher@Experiences@Composa.c)
 *     ?get@ListViewModel@__ITaskViewTimelineViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVSwitchItemListViewModel@3456@XZ @ 0x180038010 (-get@ListViewModel@__ITaskViewTimelineViewModelPublicNonVirtuals@Switcher@Experiences@Composable.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1800F65E4 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TaskViewFrame::NumberOfItems(TaskViewFrame *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rsi
  unsigned int v4; // ebp

  if ( !*((_QWORD *)this + 17) )
    return 0LL;
  v1 = WindowsInternal::ComposableShell::Experiences::Switcher::__ITaskViewTimelineViewModelPublicNonVirtuals::ListViewModel::get();
  v2 = WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitchItemListViewModelPublicNonVirtuals::SwitchItemElements::get(v1);
  v3 = __abi_winrt_cast_to(0LL, v2, &_uuidof__AUIBindableVector_Interop_Xaml_UI_Windows__);
  v4 = Windows::UI::Xaml::Interop::IBindableVector::Size::get(v3);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v4;
}
