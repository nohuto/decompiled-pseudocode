/*
 * XREFs of ??1ApplicationViewManagerVisibilityDebouncer@@UEAA@XZ @ 0x180311080
 * Callers:
 *     ??_GApplicationViewManagerVisibilityDebouncer@@UEAAPEAXI@Z @ 0x180311230 (--_GApplicationViewManagerVisibilityDebouncer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18014731C (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAXPEAUItem@AgileRegistrationList@@QEAU12@AEAV?$allocator@UItem@AgileRegistrationList@@@0@@Z @ 0x1801725D8 (--$_Destroy_range@V-$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAXPEAUItem@AgileRegistr.c)
 *     ??_GApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAAPEAXI@Z @ 0x1803111F8 (--_GApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAAPEAXI@Z.c)
 */

void __fastcall ApplicationViewManagerVisibilityDebouncer::~ApplicationViewManagerVisibilityDebouncer(
        ApplicationViewManagerVisibilityDebouncer *this)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned int v5; // edx
  void *v6; // rcx
  unsigned __int64 v7; // rsi
  __int64 v8; // rdi

  *(_QWORD *)this = &ApplicationViewManagerVisibilityDebouncer::`vftable';
  *((_QWORD *)this + 1) = &ApplicationViewManagerVisibilityDebouncer::`vftable'{for `IApplicationViewChangeListener'};
  *((_QWORD *)this + 2) = &ApplicationViewManagerVisibilityDebouncer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApplicationViewCollection,IApplicationViewCollectionTestHook,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 3) = &ApplicationViewManagerVisibilityDebouncer::`vftable'{for `IApplicationViewCollectionTestHook'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewVisibilityDebouncedNotificationServicePrivate,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewChangeListener,IApplicationViewCollection,IApplicationViewCollectionTestHook,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v2 = (void *)*((_QWORD *)this + 24);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *((_QWORD *)this + 25) )
    {
      do
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)(*((_QWORD *)this + 24) + 8 * v3++));
      while ( v3 < *((_QWORD *)this + 25) );
      v2 = (void *)*((_QWORD *)this + 24);
    }
    CoTaskMemFree(v2);
    *((_QWORD *)this + 24) = 0LL;
  }
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 20);
  v4 = *((_QWORD *)this + 15);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<AgileRegistrationList::Item>>(v4, *((_QWORD *)this + 16));
    std::_Deallocate<16,0>(
      *((void **)this + 15),
      (*((_QWORD *)this + 17) - *((_QWORD *)this + 15)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
  }
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease((volatile signed __int32 **)this + 13);
  v6 = (void *)*((_QWORD *)this + 9);
  if ( v6 )
  {
    v7 = 0LL;
    if ( *((_QWORD *)this + 10) )
    {
      v8 = 0LL;
      do
      {
        ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::`scalar deleting destructor'(
          (ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)(v8 + *((_QWORD *)this + 9)),
          v5);
        ++v7;
        v8 += 32LL;
      }
      while ( v7 < *((_QWORD *)this + 10) );
      v6 = (void *)*((_QWORD *)this + 9);
    }
    CoTaskMemFree(v6);
    *((_QWORD *)this + 9) = 0LL;
  }
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 17) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 7);
}
