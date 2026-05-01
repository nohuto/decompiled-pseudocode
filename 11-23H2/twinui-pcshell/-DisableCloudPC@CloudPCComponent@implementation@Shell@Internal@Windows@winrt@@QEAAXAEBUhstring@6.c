/*
 * XREFs of ?DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@00@Z @ 0x180705B84
 * Callers:
 *     ?DisableCloudPC@?$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemProviderExtension@RemoteSystems@3456@@impl@winrt@@UEAAHPEAX00@Z @ 0x180705B10 (-DisableCloudPC@-$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemot.c)
 *     ?EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@000@Z @ 0x180705DAC (-EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@.c)
 * Callees:
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@0@Z @ 0x1800B54E0 (--Hwinrt@@YA-AUhstring@0@AEBU10@0@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??1?$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ @ 0x180206AA0 (--1-$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@PEBG@Z @ 0x180466940 (--Hwinrt@@YA-AUhstring@0@AEBU10@PEBG@Z.c)
 *     ??$make@URegistrationData@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBU76@AEAY00$$CBG@winrt@@YA?A_PAEBUhstring@0@0AEAY00$$CBG@Z @ 0x1807025A4 (--$make@URegistrationData@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBU76@AEAY.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_DisableCloudPCTipTest@@@tip@@QEAA?AV?$test_watcher@U_tip_DisableCloudPCTipTest@@@2@XZ @ 0x18070855C (-start_and_watch_errors@-$tip_test@U_tip_DisableCloudPCTipTest@@@tip@@QEAA-AV-$test_watcher@U_ti.c)
 *     ?DeactivateDisabledRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x18072110C (-DeactivateDisabledRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Window.c)
 *     ?UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEBURegistrationData@3456@AEB_N@Z @ 0x180725ECC (-UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEB.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::DisableCloudPC(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this,
        const struct winrt::hstring *a2,
        winrt::impl **a3,
        const struct winrt::hstring *a4)
{
  __int64 *v8; // rax
  struct winrt::impl::shared_hstring_header **v9; // rax
  winrt::hstring *v10; // rax
  const WCHAR *v11; // rax
  int v12; // eax
  bool v13; // sf
  const struct winrt::Windows::Internal::Shell::RegistrationData *v14; // rax
  struct winrt::impl::shared_hstring_header *v15; // [rsp+20h] [rbp-60h] BYREF
  __int128 v16; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v17[8]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v18[24]; // [rsp+48h] [rbp-38h] BYREF
  int v19; // [rsp+60h] [rbp-20h]
  __int64 v20; // [rsp+70h] [rbp-10h]
  std::_Ref_count_base *v21; // [rsp+78h] [rbp-8h]
  volatile signed __int32 *v22; // [rsp+A0h] [rbp+20h] BYREF

  v16 = 0LL;
  tip::tip_test<_tip_DisableCloudPCTipTest>::start_and_watch_errors(&v16, v17);
  tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)&v16);
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::DeactivateDisabledRemoteDesktop(
    (winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *)((*((_QWORD *)this + 13) - 16LL) & -(__int64)(*((_QWORD *)this + 13) != 0LL)),
    a4);
  v8 = (__int64 *)winrt::operator+((__int64)&v16, (__int64)a2, (__int64)a3);
  v9 = winrt::operator+(&v15, v8, (__int64)L"\\");
  v10 = (winrt::hstring *)winrt::operator+((__int64)&v22, (__int64)v9, (__int64)a4);
  v11 = winrt::hstring::c_str(v10);
  v12 = RegDeleteKeyW(HKEY_CURRENT_USER, v11);
  v13 = v12 < 0;
  if ( v12 > 0 )
  {
    v12 = (unsigned __int16)v12 | 0x80070000;
    v13 = v12 < 0;
  }
  if ( v13 )
    winrt::throw_hresult(v12);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v22);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v15);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v16);
  LOBYTE(v22) = 0;
  v14 = (const struct winrt::Windows::Internal::Shell::RegistrationData *)winrt::make<winrt::Windows::Internal::Shell::implementation::RegistrationData,winrt::hstring const &,winrt::hstring const &,unsigned short const (&)[1]>(
                                                                            &v15,
                                                                            (winrt::impl **)a4,
                                                                            a3);
  winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::UpdateRegistrationData(v14, (const bool *)&v22);
  if ( v15 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
  tip::details::test_common_data<1>::complete(v20 + 8);
  if ( v21 )
    std::_Ref_count_base::_Decref(v21);
  if ( v19 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v18);
}
