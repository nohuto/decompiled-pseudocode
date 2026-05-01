/*
 * XREFs of ?TryGetInstallStatus@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUMeetAndChatInstallStatus@3456@XZ @ 0x1806C0E84
 * Callers:
 *     ?TryGetInstallStatus@?$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1806C0E00 (-TryGetInstallStatus@-$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180632628 (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperationWithProgress@UDeploymentResult.c)
 *     ??$make@UMeetAndChatInstallStatus@implementation@Shell@Internal@Windows@winrt@@W4AsyncStatus@Foundation@56@AEAUMeetAndChatInstallProgress@MeetAndChat@3456@AEAUMeetAndChatInstallResult@MeetAndChat@3456@@winrt@@YA?A_P$$QEAW4AsyncStatus@Foundation@Windows@0@AEAUMeetAndChatInstallProgress@MeetAndChat@Shell@Internal@30@AEAUMeetAndChatInstallResult@56730@@Z @ 0x1806AFE58 (--$make@UMeetAndChatInstallStatus@implementation@Shell@Internal@Windows@winrt@@W4AsyncStatus@Fou.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::TryGetInstallStatus(
        __int64 a1,
        _QWORD *a2)
{
  RTL_SRWLOCK *v4; // rdi
  __int64 *v5; // rax
  char v6; // bl
  __int64 v7; // rcx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+58h] [rbp+10h] BYREF
  RTL_SRWLOCK *v11; // [rsp+60h] [rbp+18h]

  v10 = a2;
  v4 = (RTL_SRWLOCK *)(a1 + 112);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 112));
  v11 = v4;
  if ( *(_QWORD *)(a1 + 264) )
  {
    LODWORD(v10) = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>>::Status((__int64 *)(a1 + 264));
    v5 = winrt::make<winrt::Windows::Internal::Shell::implementation::MeetAndChatInstallStatus,enum winrt::Windows::Foundation::AsyncStatus,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress &,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult &>(
           &v9,
           (int *)&v10,
           a1 + 240,
           (_QWORD *)(a1 + 256));
    v6 = 5;
    v7 = *v5;
  }
  else
  {
    v5 = (__int64 *)&v10;
    v6 = 6;
    v7 = 0LL;
  }
  *v5 = 0LL;
  *a2 = v7;
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    if ( v10 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  }
  if ( (v6 & 1) != 0 && v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return a2;
}
