/*
 * XREFs of ??0TouchKeyboardExperienceManager@@QEAA@XZ @ 0x18009448C
 * Callers:
 *     ??$MakeAndInitialize@VTouchKeyboardExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTouchKeyboardExperienceManager@@@Z @ 0x18010B8D8 (--$MakeAndInitialize@VTouchKeyboardExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTo.c)
 * Callees:
 *     ??$MakeAndInitialize@VHostingAnimationListener@@V1@PEAVTouchKeyboardExperienceManager@@W4AnimationType@@@Details@WRL@Microsoft@@YAJPEAPEAVHostingAnimationListener@@$$QEAPEAVTouchKeyboardExperienceManager@@$$QEAW4AnimationType@@@Z @ 0x180092714 (--$MakeAndInitialize@VHostingAnimationListener@@V1@PEAVTouchKeyboardExperienceManager@@W4Animati.c)
 *     ?RegisterForStoryboardEvents@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@@@Z @ 0x18009521C (-RegisterForStoryboardEvents@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@.c)
 *     ??0TouchKeyboardThemeInfo@TouchKeyboardExperienceManager@@QEAA@XZ @ 0x1800B7474 (--0TouchKeyboardThemeInfo@TouchKeyboardExperienceManager@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIImmersiveWindowMessageNotification@@UITouchKeyboardExperienceManager@@UIApplicationStateChangeHandler@@UILightDismissNotification@@UIGlobalRudeWindowNotifications@@UIClipboardViewLauncher@DataTransfer@Internal@ApplicationModel@Windows@@UIDWMStoryboardListener@@UITextInputHostInfoProvider@@UIInputExperienceHost@Text@Shell@Internal@Windows@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1801011F0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponent_ea_1801011F0.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=62
TouchKeyboardExperienceManager *__fastcall TouchKeyboardExperienceManager::TouchKeyboardExperienceManager(
        TouchKeyboardExperienceManager *this)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  char *v9; // [rsp+68h] [rbp+48h] BYREF
  TouchKeyboardExperienceManager *v10; // [rsp+70h] [rbp+50h] BYREF

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>();
  *(_QWORD *)this = &TouchKeyboardExperienceManager::`vftable';
  *((_QWORD *)this + 1) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::Selector<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 6) = &TouchKeyboardExperienceManager::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 7) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 14) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 15) = &TouchKeyboardExperienceManager::`vftable'{for `IApplicationFrameEventHandler'};
  *((_QWORD *)this + 16) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 17) = &TouchKeyboardExperienceManager::`vftable'{for `IImmersiveWindowMessageNotification'};
  *((_QWORD *)this + 18) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 19) = &TouchKeyboardExperienceManager::`vftable'{for `IApplicationStateChangeHandler'};
  *((_QWORD *)this + 20) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 21) = &TouchKeyboardExperienceManager::`vftable'{for `IGlobalRudeWindowNotifications'};
  *((_QWORD *)this + 22) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 23) = &TouchKeyboardExperienceManager::`vftable'{for `IDWMStoryboardListener'};
  *((_QWORD *)this + 24) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 25) = &TouchKeyboardExperienceManager::`vftable'{for `Windows::Internal::Shell::Text::IInputExperienceHost'};
  *((_QWORD *)this + 26) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v9 = (char *)this + 256;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  v2 = operator new(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *((_QWORD *)this + 32) = v2;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 384), 0, 0);
  InitializeSRWLock((PSRWLOCK)this + 53);
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 7LL;
  *((_WORD *)this + 244) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 13, 0, 0);
  *((_BYTE *)this + 560) = 0;
  *((_DWORD *)this + 141) = 0;
  *((_BYTE *)this + 568) = 0;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_OWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_DWORD *)this + 150) = 0;
  *((_DWORD *)this + 152) = -1;
  *(_QWORD *)((char *)this + 612) = 0LL;
  *((_DWORD *)this + 155) = 0;
  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 80) = 0LL;
  *((_BYTE *)this + 648) = 0;
  *((_DWORD *)this + 163) = 103;
  *((GUID *)this + 41) = GUID_NULL;
  *((_QWORD *)this + 84) = 0LL;
  *((_BYTE *)this + 680) = 0;
  *((_DWORD *)this + 171) = 105;
  *((GUID *)this + 43) = GUID_NULL;
  *((_QWORD *)this + 88) = 0LL;
  *((_BYTE *)this + 712) = 0;
  *((_DWORD *)this + 179) = 106;
  *((GUID *)this + 45) = GUID_NULL;
  *((_QWORD *)this + 92) = 0LL;
  *((_BYTE *)this + 744) = 0;
  *((_DWORD *)this + 187) = 107;
  *((GUID *)this + 47) = GUID_NULL;
  *((_QWORD *)this + 96) = 0LL;
  *((_QWORD *)this + 97) = 0LL;
  *((_QWORD *)this + 98) = 0LL;
  *((_QWORD *)this + 99) = 0LL;
  *((_QWORD *)this + 100) = 0LL;
  *((_QWORD *)this + 101) = 0LL;
  *((_QWORD *)this + 102) = 0LL;
  *((_QWORD *)this + 103) = 0LL;
  *((_QWORD *)this + 104) = 0LL;
  *(_OWORD *)((char *)this + 840) = 0LL;
  *((_DWORD *)this + 210) = 0;
  *(_OWORD *)((char *)this + 844) = 0LL;
  *((_QWORD *)this + 115) = 0LL;
  *((_QWORD *)this + 116) = 0LL;
  *((_WORD *)this + 468) = 0;
  *((_BYTE *)this + 938) = 0;
  *((_DWORD *)this + 235) = 0;
  *((_BYTE *)this + 944) = 0;
  *(_QWORD *)((char *)this + 948) = 0LL;
  *((_QWORD *)this + 120) = 0LL;
  *((_BYTE *)this + 968) = 0;
  *((_QWORD *)this + 122) = 0LL;
  *((_BYTE *)this + 984) = 0;
  *((_QWORD *)this + 124) = 0LL;
  *((_QWORD *)this + 125) = 0LL;
  *((_DWORD *)this + 252) = -2147023728;
  *((_WORD *)this + 506) = 0;
  *((_DWORD *)this + 254) = 0;
  TouchKeyboardExperienceManager::TouchKeyboardThemeInfo::TouchKeyboardThemeInfo((TouchKeyboardExperienceManager *)((char *)this + 1024));
  TouchKeyboardExperienceManager::TouchKeyboardThemeInfo::TouchKeyboardThemeInfo((TouchKeyboardExperienceManager::TouchKeyboardThemeInfo *)(v3 + 1552));
  *(_QWORD *)(v4 + 2080) = v5;
  *(_QWORD *)(v4 + 2096) = v5;
  v6 = (unsigned int)(v5 + 7);
  *(_QWORD *)(v4 + 2104) = v6;
  *(_WORD *)(v4 + 2080) = v5;
  *(_QWORD *)(v4 + 2112) = v5;
  *(_QWORD *)(v4 + 2128) = v5;
  *(_QWORD *)(v4 + 2136) = v6;
  *(_WORD *)(v4 + 2112) = v5;
  *(_DWORD *)(v4 + 2144) = v5;
  *(_QWORD *)(v4 + 2148) = 1LL;
  *(_QWORD *)(v4 + 2156) = v5;
  *(_DWORD *)(v4 + 2164) = v5;
  *(_BYTE *)(v4 + 2168) = v5;
  *(_QWORD *)(v4 + 2176) = v5;
  *(_QWORD *)(v4 + 2184) = v5;
  *(_QWORD *)(v4 + 2192) = v5;
  *(_QWORD *)(v4 + 2200) = v5;
  *(_QWORD *)(v4 + 2208) = v5;
  *(_QWORD *)(v4 + 2216) = v5;
  *(_QWORD *)(v4 + 2224) = v5;
  *(_QWORD *)(v4 + 2232) = v5;
  *(_QWORD *)(v4 + 2240) = v5;
  *(_QWORD *)(v4 + 2248) = v5;
  *(_QWORD *)(v4 + 2256) = v5;
  *(_QWORD *)(v4 + 2264) = v5;
  *(_QWORD *)(v4 + 2272) = v5;
  *(_QWORD *)(v4 + 2280) = v5;
  *(_QWORD *)(v4 + 2288) = v5;
  *(_QWORD *)(v4 + 2296) = v5;
  *(_QWORD *)(v4 + 2304) = v5;
  *(_QWORD *)(v4 + 2312) = v5;
  *(_QWORD *)(v4 + 2320) = v5;
  *(_QWORD *)(v4 + 2328) = v5;
  *(_QWORD *)(v4 + 2336) = v5;
  *(_QWORD *)(v4 + 2344) = v5;
  *(_QWORD *)(v4 + 2352) = v5;
  *(_QWORD *)(v4 + 2360) = v5;
  *(_QWORD *)(v4 + 2368) = v5;
  *(_QWORD *)(v4 + 2376) = v5;
  *((_DWORD *)this + 243) = SHTaskPoolGetUniqueContext();
  CExperienceManagerAnimationHelper::RegisterForStoryboardEvents(
    (TouchKeyboardExperienceManager *)((char *)this + 648),
    (TouchKeyboardExperienceManager *)((char *)this + 184));
  LODWORD(v9) = 1;
  v10 = this;
  Microsoft::WRL::Details::MakeAndInitialize<HostingAnimationListener,HostingAnimationListener,TouchKeyboardExperienceManager *,enum AnimationType>(
    (HostingAnimationListener **)this + 97,
    &v10,
    (int *)&v9);
  CExperienceManagerAnimationHelper::RegisterForStoryboardEvents(
    (TouchKeyboardExperienceManager *)((char *)this + 680),
    (struct IDWMStoryboardListener *)((*((_QWORD *)this + 97) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 97) >> 64)));
  LODWORD(v9) = 2;
  v10 = this;
  Microsoft::WRL::Details::MakeAndInitialize<HostingAnimationListener,HostingAnimationListener,TouchKeyboardExperienceManager *,enum AnimationType>(
    (HostingAnimationListener **)this + 98,
    &v10,
    (int *)&v9);
  CExperienceManagerAnimationHelper::RegisterForStoryboardEvents(
    (TouchKeyboardExperienceManager *)((char *)this + 712),
    (struct IDWMStoryboardListener *)((*((_QWORD *)this + 98) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 98) >> 64)));
  LODWORD(v9) = 3;
  v10 = this;
  Microsoft::WRL::Details::MakeAndInitialize<HostingAnimationListener,HostingAnimationListener,TouchKeyboardExperienceManager *,enum AnimationType>(
    (HostingAnimationListener **)this + 99,
    &v10,
    (int *)&v9);
  CExperienceManagerAnimationHelper::RegisterForStoryboardEvents(
    (TouchKeyboardExperienceManager *)((char *)this + 744),
    (struct IDWMStoryboardListener *)((*((_QWORD *)this + 99) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 99) >> 64)));
  TouchKeyboardExperienceManager::s_currentTouchKeyboardExperienceManager = this;
  return this;
}
