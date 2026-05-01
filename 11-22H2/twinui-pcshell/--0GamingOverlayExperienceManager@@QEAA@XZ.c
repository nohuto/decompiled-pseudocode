/*
 * XREFs of ??0GamingOverlayExperienceManager@@QEAA@XZ @ 0x18017A3D4
 * Callers:
 *     ??$MakeAndInitialize@VGamingOverlayExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGamingOverlayExperienceManager@@@Z @ 0x18017A304 (--$MakeAndInitialize@VGamingOverlayExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGa.c)
 * Callees:
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180086EB0 (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIApplicationFrameEventHandler@@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@UIGameBarWindowManager@89Windows@@UIGameBarGameLauncher@89Windows@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18010050C (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@.c)
 *     ??0?$_Hash@V?$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@1@@Z @ 0x18017A924 (--0-$_Hash@V-$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V-$_Uhash_comp.c)
 */

// Hidden C++ exception states: #wind=19
GamingOverlayExperienceManager *__fastcall GamingOverlayExperienceManager::GamingOverlayExperienceManager(
        GamingOverlayExperienceManager *this)
{
  __int64 v2; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+3Ch] [rbp+14h]

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>((__int64)this);
  *(_QWORD *)this = &GamingOverlayExperienceManager::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &GamingOverlayExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 6) = &GamingOverlayExperienceManager::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 7) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 14) = &GamingOverlayExperienceManager::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 15) = &GamingOverlayExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 16) = &GamingOverlayExperienceManager::`vftable'{for `IApplicationFrameEventHandler'};
  *((_QWORD *)this + 17) = &GamingOverlayExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 18) = &GamingOverlayExperienceManager::`vftable'{for `Windows::Internal::GamingOverlay::IGameBarWindowManager'};
  *((_QWORD *)this + 19) = &GamingOverlayExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::GamingOverlay::IGameBarGameLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 20) = &GamingOverlayExperienceManager::`vftable'{for `IImmersiveWindowMessageNotification'};
  *((_QWORD *)this + 21) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((_QWORD *)this + 33);
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_BYTE *)this + 288) = 0;
  *((_DWORD *)this + 73) = 0;
  *((_BYTE *)this + 304) = 0;
  *((_QWORD *)this + 39) = 500LL;
  *((_QWORD *)this + 40) = 350LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 448), 0, 0);
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 63);
  InitializeSRWLock((PSRWLOCK)this + 64);
  *((_QWORD *)this + 65) = 0LL;
  v5 = ((unsigned __int64)this + 528) >> 32;
  v4 = 0;
  std::_Hash<std::_Umap_traits<unsigned __int64,GamingOverlayExperienceManager::TargetWindowContext,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>,0>>::_Hash<std::_Umap_traits<unsigned __int64,GamingOverlayExperienceManager::TargetWindowContext,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>,0>>(
    (char *)this + 528,
    &v4);
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 592), 0, 0);
  *((_QWORD *)this + 79) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 16, 0, 0);
  *((_QWORD *)this + 85) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 86);
  InitializeSRWLock((PSRWLOCK)this + 87);
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 18, 0, 0);
  *((_QWORD *)this + 95) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 96);
  InitializeSRWLock((PSRWLOCK)this + 97);
  *((_QWORD *)this + 98) = 0LL;
  *((_QWORD *)this + 99) = 0LL;
  *((_QWORD *)this + 100) = 0LL;
  *((_DWORD *)this + 202) = 0;
  *((_QWORD *)this + 102) = 0LL;
  *((_QWORD *)this + 103) = 0LL;
  *((_BYTE *)this + 832) = 1;
  *((_QWORD *)this + 105) = 0LL;
  *((_WORD *)this + 424) = 0;
  *((_DWORD *)this + 213) = 0;
  *((_BYTE *)this + 856) = 0;
  *((_DWORD *)this + 215) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 864), 0, 0);
  *((_QWORD *)this + 113) = 0LL;
  *((_QWORD *)this + 114) = 0LL;
  *((_QWORD *)this + 115) = 0LL;
  *((_DWORD *)this + 232) = 0;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 119) = 0LL;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 121) = 0LL;
  *((_QWORD *)this + 122) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 984), 0, 0);
  *((_QWORD *)this + 128) = 0LL;
  *((_QWORD *)this + 129) = 0LL;
  *((_QWORD *)this + 130) = 0LL;
  *((_QWORD *)this + 131) = 0LL;
  *((_QWORD *)this + 132) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 1064), 0, 0);
  *((_QWORD *)this + 138) = 0LL;
  *((_QWORD *)this + 139) = 0LL;
  *((_QWORD *)this + 140) = 0LL;
  *((_QWORD *)this + 141) = 0LL;
  *((_QWORD *)this + 142) = 0LL;
  *((_BYTE *)this + 1144) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 1152), 0, 0);
  *((_QWORD *)this + 149) = 0LL;
  *((_QWORD *)this + 150) = 0LL;
  *((_QWORD *)this + 151) = 0LL;
  *((_QWORD *)this + 152) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 1224), 0, 0);
  *((_QWORD *)this + 158) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 159);
  InitializeSRWLock((PSRWLOCK)this + 160);
  *((_QWORD *)this + 161) = 0LL;
  *((_QWORD *)this + 162) = 0LL;
  *((_QWORD *)this + 163) = 0LL;
  *((_DWORD *)this + 328) = -1;
  *(_QWORD *)((char *)this + 1332) = 0LL;
  *((_QWORD *)this + 168) = 0LL;
  *((_QWORD *)this + 169) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 170);
  InitializeSRWLock((PSRWLOCK)this + 171);
  *((_WORD *)this + 688) = 256;
  *((_DWORD *)this + 345) = SHTaskPoolGetUniqueContext(v2);
  *((_BYTE *)this + 1384) = 0;
  *((_QWORD *)this + 174) = 0LL;
  *((_QWORD *)this + 175) = 0LL;
  *((_QWORD *)this + 176) = 0LL;
  *((_QWORD *)this + 177) = 0LL;
  *((_QWORD *)this + 178) = 0LL;
  *(_OWORD *)((char *)this + 1432) = 0LL;
  *((_QWORD *)this + 179) = 0LL;
  *((_QWORD *)this + 180) = 0LL;
  *((_QWORD *)this + 181) = 0LL;
  *((_OWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 182) = 0LL;
  *((_QWORD *)this + 183) = 0LL;
  *((_OWORD *)this + 92) = 0LL;
  *((_QWORD *)this + 184) = 0LL;
  *((_QWORD *)this + 185) = 0LL;
  *((_QWORD *)this + 186) = 0LL;
  return this;
}
