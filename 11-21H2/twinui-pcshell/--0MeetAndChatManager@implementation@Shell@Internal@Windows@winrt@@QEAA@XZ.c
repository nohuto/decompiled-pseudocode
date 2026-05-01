/*
 * XREFs of ??0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800CCA24
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1800CC970 (--0-$heap_implements@V-$module_count_wrapper@UMeetAndChatManager@implementation@Shell@Internal@W.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18001B0D0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x18009D2F4 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CA2C4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CCC44 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ??$make_self@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?AU?$com_ptr@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x1800CD0A4 (--$make_self@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@$$V@winrt@@YA-AU-$com.c)
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x1800CEFE4 (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803B424C (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=14
winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *__fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::MeetAndChatManager(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *this)
{
  _QWORD *v2; // rdi
  _OWORD *v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rdx
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *v7; // rdi
  __int64 v8; // rcx
  wil::details *Event; // rbx
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF
  char *v14; // [rsp+60h] [rbp+18h]

  *((_QWORD *)this + 1) = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,winrt::Windows::Internal::Shell::IMeetAndChatManager>::`vftable';
  *(_QWORD *)this = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  v2 = (_QWORD *)((char *)this + 16);
  winrt::immersive_shell_component::immersive_shell_component((winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *)((char *)this + 16));
  *(_QWORD *)this = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,std::tuple<winrt::Windows::Internal::Shell::MeetAndChatManager,IImmersiveWindowMessageNotification>>'};
  *v2 = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 3) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 4) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 6) = &winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::`vftable'{for `winrt::immersive_shell_component'};
  v14 = (char *)this + 104;
  v3 = operator new(0x38uLL);
  *v3 = 0LL;
  v3[1] = 0LL;
  v3[2] = 0LL;
  *((_QWORD *)v3 + 6) = 0LL;
  *((_QWORD *)v3 + 2) = &winrt::impl::produce<ListenerWindow,winrt::Windows::Foundation::IInspectable>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)v3 + 1) = 1LL;
  *((_QWORD *)v3 + 3) = 0LL;
  *((_QWORD *)v3 + 4) = 0LL;
  *((_QWORD *)v3 + 5) = 0LL;
  *((_QWORD *)v3 + 6) = 0LL;
  *(_QWORD *)v3 = &winrt::impl::heap_implements<ListenerWindow>::`vftable';
  *((_QWORD *)this + 13) = v3;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_BYTE *)this + 208) = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  v4 = (_QWORD *)((char *)this + 272);
  *((_QWORD *)this + 34) = 0LL;
  LOBYTE(v5) = 3;
  LOBYTE(v6) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MACFlyout>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_MACFlyout>::GetImpl'::`2'::impl,
    v6,
    v5);
  winrt::immersive_shell_component::register_service_information<_GUID const>(
    (__int64)v2,
    (__int128 *)&SID_MeetAndChatManager);
  v7 = (winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *)winrt::make_self<winrt::Windows::Internal::Shell::implementation::MeetAndChatIris,>(&v13);
  if ( (winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *)((char *)this + 272) != v7 )
  {
    if ( *v4 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref((__int64 *)this + 34);
    v8 = *(_QWORD *)v7;
    *(_QWORD *)v7 = 0LL;
    *v4 = v8;
  }
  if ( v13 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v13);
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( !Event )
    wil::details::in1diag3::Throw_GetLastError(
      retaddr,
      (void *)0x17FA,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      v10);
  GetLastError();
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (wil::details **)this + 32,
    Event);
  return this;
}
