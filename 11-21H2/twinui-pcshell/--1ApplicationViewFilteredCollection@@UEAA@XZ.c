/*
 * XREFs of ??1ApplicationViewFilteredCollection@@UEAA@XZ @ 0x1805B5B5C
 * Callers:
 *     ??_EApplicationViewFilteredCollection@@UEAAPEAXI@Z @ 0x1805B5DB0 (--_EApplicationViewFilteredCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unregister@?$EventListener@UIApplicationViewVisibilityDebouncedNotificationService@@UIApplicationViewChangeListener@@VApplicationViewCollectionRegistration@@@EventRegistrationHelpers@@QEAAXXZ @ 0x1805B6810 (-Unregister@-$EventListener@UIApplicationViewVisibilityDebouncedNotificationService@@UIApplicati.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ApplicationViewFilteredCollection::~ApplicationViewFilteredCollection(
        ApplicationViewFilteredCollection *this)
{
  __int64 *v2; // rbx
  void *v3; // rcx
  unsigned __int64 v4; // rsi
  void *v5; // rcx
  unsigned __int64 v6; // rbx

  v2 = (__int64 *)((char *)this + 128);
  v3 = (void *)*((_QWORD *)this + 18);
  if ( v3 )
  {
    v4 = 0LL;
    if ( v2[3] )
    {
      do
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(v2[2] + 8 * v4++));
      while ( v4 < v2[3] );
      v3 = (void *)v2[2];
    }
    CoTaskMemFree(v3);
    v2[2] = 0LL;
  }
  v2[3] = 0LL;
  v2[5] = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v2);
  EventRegistrationHelpers::EventListener<IApplicationViewVisibilityDebouncedNotificationService,IApplicationViewChangeListener,ApplicationViewCollectionRegistration>::Unregister((char *)this + 112);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 15);
  v5 = (void *)*((_QWORD *)this + 10);
  if ( v5 )
  {
    v6 = 0LL;
    if ( *((_QWORD *)this + 11) )
    {
      do
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)(*((_QWORD *)this + 10) + 8 * v6++));
      while ( v6 < *((_QWORD *)this + 11) );
      v5 = (void *)*((_QWORD *)this + 10);
    }
    CoTaskMemFree(v5);
    *((_QWORD *)this + 10) = 0LL;
  }
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 9);
  *((_DWORD *)this + 17) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 7);
}
