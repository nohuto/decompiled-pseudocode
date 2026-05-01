/*
 * XREFs of ??1ApplicationViewFilteredCollection@@UEAA@XZ @ 0x180688EC4
 * Callers:
 *     ??_EApplicationViewFilteredCollection@@UEAAPEAXI@Z @ 0x180689120 (--_EApplicationViewFilteredCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unregister@?$EventListener@UIApplicationViewVisibilityDebouncedNotificationService@@UIApplicationViewChangeListener@@VApplicationViewCollectionRegistration@@@EventRegistrationHelpers@@QEAAXXZ @ 0x180689BFC (-Unregister@-$EventListener@UIApplicationViewVisibilityDebouncedNotificationService@@UIApplicati.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ApplicationViewFilteredCollection::~ApplicationViewFilteredCollection(
        ApplicationViewFilteredCollection *this)
{
  char *v2; // rbx
  unsigned __int64 *v3; // rsi
  unsigned __int64 i; // rbp
  unsigned __int64 *v5; // rbx
  unsigned __int64 j; // rsi

  v2 = (char *)this + 128;
  v3 = (unsigned __int64 *)((char *)this + 152);
  if ( *((_QWORD *)this + 18) )
  {
    for ( i = 0LL; i < *v3; ++i )
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(*((_QWORD *)v2 + 2) + 8 * i));
    CoTaskMemFree(*((LPVOID *)v2 + 2));
    *((_QWORD *)v2 + 2) = 0LL;
  }
  *v3 = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v2);
  EventRegistrationHelpers::EventListener<IApplicationViewVisibilityDebouncedNotificationService,IApplicationViewChangeListener,ApplicationViewCollectionRegistration>::Unregister((char *)this + 112);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 15);
  v5 = (unsigned __int64 *)((char *)this + 88);
  if ( *((_QWORD *)this + 10) )
  {
    for ( j = 0LL; j < *v5; ++j )
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)(*((_QWORD *)this + 10) + 8 * j));
    CoTaskMemFree(*((LPVOID *)this + 10));
    *((_QWORD *)this + 10) = 0LL;
  }
  *v5 = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 9);
  *((_DWORD *)this + 17) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 7);
}
