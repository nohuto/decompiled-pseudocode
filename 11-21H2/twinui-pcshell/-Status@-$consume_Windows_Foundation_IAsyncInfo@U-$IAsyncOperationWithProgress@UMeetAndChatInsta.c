/*
 * XREFs of ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AW4AsyncStatus@Foundation@Windows@3@XZ @ 0x1802388A4
 * Callers:
 *     ??$wait_get@U?$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUStorageFile@Storage@Windows@1@AEBU?$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@41@@Z @ 0x180570F00 (--$wait_get@U-$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@i.c)
 *     ?ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4ActivationKind@Activation@ApplicationModel@Windows@@EURect@Foundation@7@H@Z @ 0x180571950 (-ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4A.c)
 *     ?IsInstallInProgress@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1805CD2A8 (-IsInstallInProgress@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ.c)
 *     ?TryGetInstallStatus@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUMeetAndChatInstallStatus@3456@XZ @ 0x1805CF334 (-TryGetInstallStatus@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AUMeet.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>>::Status(
        __int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  v1 = *a1;
  if ( v1 )
  {
    v5 = 0LL;
    (**(void (__fastcall ***)(__int64, _QWORD *, __int64 *))v1)(
      v1,
      winrt::impl::guid_v<winrt::Windows::Foundation::IAsyncInfo>,
      &v5);
    v1 = v5;
  }
  v6 = v1;
  v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 56LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult((unsigned int)v2);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  return v4;
}
