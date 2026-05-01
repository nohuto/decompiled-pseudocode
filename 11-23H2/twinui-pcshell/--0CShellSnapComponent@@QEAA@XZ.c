/*
 * XREFs of ??0CShellSnapComponent@@QEAA@XZ @ 0x180109480
 * Callers:
 *     ??$MakeAndInitialize@VCShellSnapComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801087EC (--$MakeAndInitialize@VCShellSnapComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 * Callees:
 *     ??$_Alloc_proxy@V?$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV?$allocator@U_Container_proxy@std@@@1@@Z @ 0x18008B504 (--$_Alloc_proxy@V-$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV-$a.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@2@@Z @ 0x180092148 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1800C28A0 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UISnapComponent@@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@UIPriviledgedPositioner@@UIWindowManagementArrangementEvents@@UIImmersiveWindowMessageNotification@@UIImmersiveSettingsCacheNotification@@UIImmersiveShellHookNotification@@UIWindowManagementShowMoveSizeEvents@@UIImmersiveRawInputKeyboardNotification@@UIImmersiveMonitorNotification@@@WRL@Microsoft@@QEAA@XZ @ 0x180102410 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponent_ea_180102410.c)
 *     ??0CGITRegistrationList@@QEAA@XZ @ 0x180109900 (--0CGITRegistrationList@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180109938 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??0InteractionTracker@SnapInteraction@@QEAA@XZ @ 0x1801099E4 (--0InteractionTracker@SnapInteraction@@QEAA@XZ.c)
 *     ??0?$unordered_map@HIU?$hash@H@std@@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHI@std@@@2@@std@@QEAA@XZ @ 0x1802215AC (--0-$unordered_map@HIU-$hash@H@std@@U-$equal_to@H@2@V-$allocator@U-$pair@$$CBHI@std@@@2@@std@@QE.c)
 *     ??0?$unordered_map@HV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@U?$hash@H@std@@U?$equal_to@H@4@V?$allocator@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@4@@std@@QEAA@XZ @ 0x1802215DC (--0-$unordered_map@HV-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@.c)
 *     ??0?$unordered_map@Uhstring@winrt@@USnapLaunchData@CShellSnapComponent@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@6@V?$allocator@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@6@@std@@QEAA@XZ @ 0x18022160C (--0-$unordered_map@Uhstring@winrt@@USnapLaunchData@CShellSnapComponent@@U-$hash@Uhstring@winrt@@.c)
 */

// Hidden C++ exception states: #wind=44
CShellSnapComponent *__fastcall CShellSnapComponent::CShellSnapComponent(CShellSnapComponent *this)
{
  size_t size_of; // rax
  _QWORD *v3; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,ISnapComponent,Windows::Internal::Shell::WindowSnapping::ISnapComponent2,IPriviledgedPositioner,IWindowManagementArrangementEvents,IImmersiveWindowMessageNotification,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,ISnapComponent,Windows::Internal::Shell::WindowSnapping::ISnapComponent2,IPriviledgedPositioner,IWindowManagementArrangementEvents,IImmersiveWindowMessageNotification,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>((__int64)this);
  *(_QWORD *)this = &CShellSnapComponent::`vftable';
  *((_QWORD *)this + 1) = &CShellSnapComponent::`vftable'{for `Microsoft::WRL::Details::Selector<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,ISnapComponent,Windows::Internal::Shell::WindowSnapping::ISnapComponent2,IPriviledgedPositioner,IWindowManagementArrangementEvents,IImmersiveWindowMessageNotification,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>>'};
  *((_QWORD *)this + 6) = &CShellSnapComponent::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 7) = &CShellSnapComponent::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 14) = &CShellSnapComponent::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,ISnapComponent,Windows::Internal::Shell::WindowSnapping::ISnapComponent2,IPriviledgedPositioner,IWindowManagementArrangementEvents,IImmersiveWindowMessageNotification,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,ISnapComponent,Windows::Internal::Shell::WindowSnapping::ISnapComponent2,IPriviledgedPositioner,IWindowManagementArrangementEvents,IImmersiveWindowMessageNotification,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>>'};
  *((_QWORD *)this + 15) = &CShellSnapComponent::`vftable'{for `ISnapComponent'};
  *((_QWORD *)this + 16) = &CShellSnapComponent::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::WindowSnapping::ISnapComponent2,IPriviledgedPositioner,IWindowManagementArrangementEvents,IImmersiveWindowMessageNotification,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>'};
  *((_QWORD *)this + 17) = &CShellSnapComponent::`vftable'{for `IPriviledgedPositioner'};
  *((_QWORD *)this + 18) = &CShellSnapComponent::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWindowManagementArrangementEvents,IImmersiveWindowMessageNotification,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>'};
  *((_QWORD *)this + 19) = &CShellSnapComponent::`vftable'{for `IImmersiveWindowMessageNotification'};
  *((_QWORD *)this + 20) = &CShellSnapComponent::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>'};
  *((_QWORD *)this + 21) = &CShellSnapComponent::`vftable'{for `IImmersiveShellHookNotification'};
  *((_QWORD *)this + 22) = &CShellSnapComponent::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>'};
  *((_QWORD *)this + 23) = &CShellSnapComponent::`vftable'{for `IImmersiveRawInputKeyboardNotification'};
  *((_QWORD *)this + 24) = &CShellSnapComponent::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveMonitorNotification>'};
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  CGITRegistrationList::CGITRegistrationList((CShellSnapComponent *)((char *)this + 312));
  *((_DWORD *)this + 90) = SHTaskPoolGetUniqueContext();
  *((_OWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_DWORD *)this + 110) = 0;
  *((_BYTE *)this + 444) = 0;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_DWORD *)this + 144) = 0;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_DWORD *)this + 152) = 0;
  SnapInteraction::InteractionTracker::InteractionTracker((CShellSnapComponent *)((char *)this + 616));
  *((_BYTE *)this + 752) = 0;
  *((_QWORD *)this + 95) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  *((_QWORD *)this + 97) = 0LL;
  *((_QWORD *)this + 112) = 0LL;
  *((_DWORD *)this + 226) = 0;
  *((_QWORD *)this + 114) = 0LL;
  *((_WORD *)this + 460) = 0;
  *((_QWORD *)this + 116) = 0LL;
  *((_QWORD *)this + 131) = 0LL;
  *((_DWORD *)this + 264) = 0;
  *((_QWORD *)this + 133) = 0LL;
  *((_DWORD *)this + 268) = 0;
  *((_QWORD *)this + 135) = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)this + 274) = 1;
  *((_QWORD *)this + 135) = &SnapEducationHandler::`vftable'{for `winrt::impl::producers_base<SnapEducationHandler,std::tuple<IApplicationViewChangeListener>>'};
  *((_QWORD *)this + 136) = &SnapEducationHandler::`vftable'{for `winrt::impl::root_implements<SnapEducationHandler,IApplicationViewChangeListener>'};
  *((_DWORD *)this + 276) = 0;
  *((_QWORD *)this + 139) = 0LL;
  *((_QWORD *)this + 140) = 0LL;
  *((_QWORD *)this + 141) = 0LL;
  *((_QWORD *)this + 142) = 0LL;
  *((_QWORD *)this + 143) = 0LL;
  std::_Container_base12::_Alloc_proxy<std::allocator<std::_Container_proxy>>((_QWORD *)this + 139);
  *((_DWORD *)this + 288) = -1;
  *((_BYTE *)this + 1156) = 0;
  *((_DWORD *)this + 290) = 1;
  *((_DWORD *)this + 291) = 24;
  *((_DWORD *)this + 292) = 50;
  *((_DWORD *)this + 293) = 30;
  *((_DWORD *)this + 294) = 30;
  *((_DWORD *)this + 295) = 50;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((CShellSnapComponent *)((char *)this + 1184));
  *((_QWORD *)this + 148) = &CSnapComponentTelemetry::OnSnappingCancelled::`vftable';
  *((_QWORD *)this + 188) = 0LL;
  *((_QWORD *)this + 189) = 0LL;
  *((_QWORD *)this + 190) = 0LL;
  *((_DWORD *)this + 382) = 1;
  *((_DWORD *)this + 384) = 0;
  *((_QWORD *)this + 193) = 0LL;
  *((_QWORD *)this + 194) = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v3 = v3;
  v3[1] = v3;
  *((_QWORD *)this + 193) = v3;
  *((_QWORD *)this + 195) = 0LL;
  *((_QWORD *)this + 196) = 0LL;
  *((_QWORD *)this + 197) = 0LL;
  *((_QWORD *)this + 198) = 7LL;
  *((_QWORD *)this + 199) = 8LL;
  *((_DWORD *)this + 384) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>>>>>::_Assign_grow(
    (unsigned __int64 **)this + 195,
    0x10uLL,
    *((_QWORD *)this + 193));
  std::unordered_map<int,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>>::unordered_map<int,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>>((char *)this + 1600);
  std::unordered_map<int,unsigned int>::unordered_map<int,unsigned int>((char *)this + 1664);
  *((_BYTE *)this + 1728) = 0;
  *((_QWORD *)this + 217) = 0LL;
  *((_QWORD *)this + 218) = 0LL;
  std::unordered_map<winrt::hstring,CShellSnapComponent::SnapLaunchData>::unordered_map<winrt::hstring,CShellSnapComponent::SnapLaunchData>((char *)this + 1752);
  return this;
}
