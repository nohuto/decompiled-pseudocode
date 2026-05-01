/*
 * XREFs of ?RegisterEvents@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180283FE4
 * Callers:
 *     ?GetInstance@NetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@QEBA?AU13456@XZ @ 0x180283E1C (-GetInstance@NetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@QEBA-AU.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x180234F54 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$?0UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@P8012345@EAAXAEBUIInspectable@Foundation@45@@Z@NetworkStatusChangedEventHandler@Connectivity@Networking@Windows@winrt@@QEAA@$$QEAU?$weak_ref@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@@4@P8NetworkConnectionUtils@implementation@Shell@Internal@34@EAAXAEBUIInspectable@Foundation@34@@Z@Z @ 0x180283BD0 (--$-0UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@P8012345@EAAXAEBUIInsp.c)
 *     ??$get_weak@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@@?$root_implements@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@U134567@@impl@winrt@@IEAA?AU?$weak_ref@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1802D37E4 (--$get_weak@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@w.c)
 *     ??1?$factory_event_revoker@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@$MP8type@?$abi@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGI@AA@impl@winrt@@QEAA@XZ @ 0x180734328 (--1-$factory_event_revoker@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@$M.c)
 *     ?NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA?AU?$factory_event_revoker@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@$MP8type@?$abi@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGI@AA@impl@5@Uauto_revoke_t@5@AEBUNetworkStatusChangedEventHandler@2345@@Z @ 0x180734604 (-NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA-AU-$factory_e.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils::RegisterEvents(
        winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils *this)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int128 v5; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v6[16]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+10h] BYREF
  __int64 v8; // [rsp+58h] [rbp+18h] BYREF
  __int64 v9; // [rsp+60h] [rbp+20h] BYREF

  winrt::impl::root_implements<winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager,winrt::Windows::Internal::Shell::Animations::EdgeAnimationRelationshipManager>::get_weak<winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager>(
    this,
    &v9);
  *(_QWORD *)&v5 = winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils::OnNetworkStatusChanged;
  DWORD2(v5) = 0;
  winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler::NetworkStatusChangedEventHandler(
    &v8,
    &v9,
    &v5);
  v2 = (__int64 *)winrt::Windows::Networking::Connectivity::NetworkInformation::NetworkStatusChanged((winrt::Windows::Foundation::IUnknown *)v6);
  v3 = *v2;
  *v2 = 0LL;
  *((_QWORD *)&v5 + 1) = v2[1];
  *(_QWORD *)&v5 = 0LL;
  v7 = v3;
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Foundation::IUnknown *)&v5,
    (winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils *)((char *)this + 48));
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils *)((char *)this + 48),
    (winrt::Windows::Foundation::IUnknown *)&v7);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v7);
  v4 = *((_QWORD *)&v5 + 1);
  *((_QWORD *)&v5 + 1) = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = v4;
  __1__factory_event_revoker_UINetworkInformationStatics_Connectivity_Networking_Windows_winrt___MP8type___abi_UINetworkInformationStatics_Connectivity_Networking_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGI_AA_impl_winrt__QEAA_XZ((winrt::Windows::Foundation::IUnknown *)&v5);
  __1__factory_event_revoker_UINetworkInformationStatics_Connectivity_Networking_Windows_winrt___MP8type___abi_UINetworkInformationStatics_Connectivity_Networking_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGI_AA_impl_winrt__QEAA_XZ((winrt::Windows::Foundation::IUnknown *)v6);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v8);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v9);
}
