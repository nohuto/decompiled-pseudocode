/*
 * XREFs of ??1CMultitaskingViewManager@@UEAA@XZ @ 0x180149A6C
 * Callers:
 *     ??_GCMultitaskingViewManager@@UEAAPEAXI@Z @ 0x180149A30 (--_GCMultitaskingViewManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_GMULTITASKING_HOST_DATA@CMultitaskingViewManager@@QEAAPEAXI@Z @ 0x180052CBC (--_GMULTITASKING_HOST_DATA@CMultitaskingViewManager@@QEAAPEAXI@Z.c)
 *     ??1?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAA@XZ @ 0x1800F445C (--1-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIShellViewC.c)
 *     ??1?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAA@XZ @ 0x1800F44F0 (--1-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi_ea_1800F44F0.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??1ForegroundStaging@@QEAA@XZ @ 0x180149CAC (--1ForegroundStaging@@QEAA@XZ.c)
 */

void __fastcall CMultitaskingViewManager::~CMultitaskingViewManager(CMultitaskingViewManager *this)
{
  __int64 *v2; // rcx
  void *v3; // rcx
  unsigned __int64 v4; // rsi
  __int64 v5; // rdi

  v2 = (__int64 *)((char *)this + 456);
  if ( *v2 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v2);
  if ( *((_QWORD *)this + 56) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CMultitaskingViewManager *)((char *)this + 448));
  if ( *((_QWORD *)this + 55) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CMultitaskingViewManager *)((char *)this + 440));
  if ( *((_QWORD *)this + 54) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 54);
  __1__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAA_XZ((_QWORD *)this + 52);
  __1__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAA_XZ((_QWORD *)this + 50);
  if ( *((_QWORD *)this + 49) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CMultitaskingViewManager *)((char *)this + 392));
  if ( *((_QWORD *)this + 48) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 48);
  __1__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAA_XZ((_QWORD *)this + 46);
  __1__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAA_XZ((_QWORD *)this + 44);
  if ( *((_QWORD *)this + 43) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CMultitaskingViewManager *)((char *)this + 344));
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 41);
  ForegroundStaging::~ForegroundStaging((CMultitaskingViewManager *)((char *)this + 320));
  v3 = (void *)*((_QWORD *)this + 36);
  if ( v3 )
  {
    v4 = 0LL;
    if ( *((_QWORD *)this + 37) )
    {
      v5 = 0LL;
      do
      {
        CMultitaskingViewManager::MULTITASKING_HOST_DATA::`scalar deleting destructor'((CMultitaskingViewManager::MULTITASKING_HOST_DATA *)(v5 + *((_QWORD *)this + 36)));
        ++v4;
        v5 += 16LL;
      }
      while ( v4 < *((_QWORD *)this + 37) );
      v3 = (void *)*((_QWORD *)this + 36);
    }
    CoTaskMemFree(v3);
    *((_QWORD *)this + 36) = 0LL;
  }
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 35);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 34);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 33);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 32);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 31);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 30);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 29);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 28);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 27);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 24);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 19);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 18);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 14);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 13);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 11);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 1);
  *((_DWORD *)this + 9) = -1073741823;
}
