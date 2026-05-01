/*
 * XREFs of ??1CImmersiveMode@@MEAA@XZ @ 0x18006AECC
 * Callers:
 *     ??_ECImmersiveMode@@MEAAPEAXI@Z @ 0x18006AE90 (--_ECImmersiveMode@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CDamIoctl@@QEAA@XZ @ 0x18006B0B4 (--1CDamIoctl@@QEAA@XZ.c)
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x1800FFD58 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAXPEAUItem@AgileRegistrationList@@QEAU12@AEAV?$allocator@UItem@AgileRegistrationList@@@0@@Z @ 0x1801B6664 (--$_Destroy_range@V-$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAXPEAUItem@AgileRegistr.c)
 */

void __fastcall CImmersiveMode::~CImmersiveMode(CImmersiveMode *this)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &CImmersiveMode::`vftable';
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IActiveZBand,IImmersiveSystemMode,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>::`vftable'{for `Microsoft::WRL::Details::Selector<CWRLObjectWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,IActiveZBand,IImmersiveSystemMode,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>>'};
  *((_QWORD *)this + 9) = &CImmersiveMode::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IActiveZBand,IImmersiveSystemMode,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,IActiveZBand,IImmersiveSystemMode,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>>'};
  *((_QWORD *)this + 10) = &CImmersiveMode::`vftable'{for `IImmersiveSystemMode'};
  *((_QWORD *)this + 11) = &CImmersiveMode::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>'};
  *((_QWORD *)this + 12) = &CImmersiveMode::`vftable'{for `IActiveZBand'};
  *((_QWORD *)this + 13) = &CImmersiveMode::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<IImmersiveSystemModeNotificationServicePrivate>,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>'};
  *((_QWORD *)this + 15) = &CImmersiveMode::`vftable'{for `Microsoft::WRL::Details::Selector<IActiveZBandNotificationServicePrivate,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<IActiveZBandNotificationServicePrivate>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>>'};
  *((_QWORD *)this + 17) = &CImmersiveMode::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<IActiveZBandNotificationServicePrivate>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>>'};
  *((_QWORD *)this + 18) = &CImmersiveMode::`vftable'{for `IDesktopVisibilityService'};
  *((_QWORD *)this + 19) = &CImmersiveMode::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDesktopVisibilityChangesNotification>'};
  v2 = (void *)*((_QWORD *)this + 54);
  if ( v2 )
  {
    LocalFree(v2);
    *((_QWORD *)this + 54) = 0LL;
  }
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  v3 = (void *)*((_QWORD *)this + 50);
  if ( v3 )
  {
    LocalFree(v3);
    *((_QWORD *)this + 50) = 0LL;
  }
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 48);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 43);
  v4 = *((_QWORD *)this + 37);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<AgileRegistrationList::Item>>(v4, *((_QWORD *)this + 38));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 37),
      (*((_QWORD *)this + 39) - *((_QWORD *)this + 37)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 37) = 0LL;
    *((_QWORD *)this + 38) = 0LL;
    *((_QWORD *)this + 39) = 0LL;
  }
  v5 = *((_QWORD *)this + 32);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<AgileRegistrationList::Item>>(v5, *((_QWORD *)this + 33));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 32),
      (*((_QWORD *)this + 34) - *((_QWORD *)this + 32)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 32) = 0LL;
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 34) = 0LL;
  }
  CDamIoctl::~CDamIoctl((CImmersiveMode *)((char *)this + 240));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  *((_DWORD *)this + 45) = -1073741823;
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((CImmersiveMode *)((char *)this + 32));
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 3);
}
