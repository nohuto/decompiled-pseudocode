/*
 * XREFs of ??$wait_for_completed@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@1@I@Z @ 0x180694CBC
 * Callers:
 *     ??$wait_get@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@1@@Z @ 0x180694E60 (--$wait_get@U-$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     WaitForSingleObject_0 @ 0x1801C78F0 (WaitForSingleObject_0.c)
 *     WINRT_IMPL_CreateEventW @ 0x1801C7FD1 (WINRT_IMPL_CreateEventW.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1803925DC (-throw_last_error@winrt@@YAXXZ.c)
 *     ?Completed@?$consume_Windows_Foundation_IAsyncOperationWithProgress@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@34@UMeetAndChatInstallProgress@67834@@impl@winrt@@QEBA@AEBU?$AsyncOperationWithProgressCompletedHandler@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@3@@Z @ 0x180695A44 (-Completed@-$consume_Windows_Foundation_IAsyncOperationWithProgress@U-$IAsyncOperationWithProgre.c)
 */

__int64 __fastcall winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>>(
        __int64 a1)
{
  HANDLE EventW; // rax
  winrt *v3; // rcx
  HANDLE v4; // rdi
  unsigned int v5; // ebx
  _QWORD v7[3]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-10h]
  char *v9; // [rsp+60h] [rbp+18h]

  EventW = WINRT_IMPL_CreateEventW(0LL, 1, 0, 0LL);
  v4 = EventW;
  if ( !EventW )
    winrt::throw_last_error(v3);
  v7[2] = EventW;
  v8 = 0;
  v9 = (char *)operator new(0x20uLL);
  *((_QWORD *)v9 + 1) = v4;
  *((_DWORD *)v9 + 4) = 0;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v9 + 6) = 1;
  *(_QWORD *)v9 = ___7__delegate_U__AsyncOperationWithProgressCompletedHandler_UDeploymentResult_Deployment_Management_Windows_winrt__UDeploymentProgress_2345__Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperationWithProgress_UDeploymentResult_Deployment_Management_Windows_winrt__UDeploymentProgress_2345__Foundation_Windows_winrt___impl_4_YA_A_PAEBU__IAsyncOperationWithProgress_UDeploymentResult_Deployment_Management_Windows_winrt__UDeploymentProgress_2345__234_I_Z__impl_winrt__6B_;
  v7[0] = v9;
  v7[1] = v9 + 8;
  winrt::impl::consume_Windows_Foundation_IAsyncOperationWithProgress<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>::Completed(
    a1,
    v7);
  WaitForSingleObject_0(*((HANDLE *)v9 + 1), 0xFFFFFFFF);
  v5 = *((_DWORD *)v9 + 4);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v7);
  return v5;
}
