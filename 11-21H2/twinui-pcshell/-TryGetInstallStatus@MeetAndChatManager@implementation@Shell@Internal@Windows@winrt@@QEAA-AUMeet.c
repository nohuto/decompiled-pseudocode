/*
 * XREFs of ?TryGetInstallStatus@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUMeetAndChatInstallStatus@3456@XZ @ 0x1805CF334
 * Callers:
 *     ?TryGetInstallStatus@?$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1805CF2B0 (-TryGetInstallStatus@-$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AW4AsyncStatus@Foundation@Windows@3@XZ @ 0x1802388A4 (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperationWithProgress@UMeetAndChatInsta.c)
 *     ??$make@UMeetAndChatInstallStatus@implementation@Shell@Internal@Windows@winrt@@W4AsyncStatus@Foundation@56@AEAUMeetAndChatInstallProgress@MeetAndChat@3456@AEAUMeetAndChatInstallResult@MeetAndChat@3456@@winrt@@YA?AUMeetAndChatInstallStatus@Shell@Internal@Windows@0@$$QEAW4AsyncStatus@Foundation@40@AEAUMeetAndChatInstallProgress@MeetAndChat@2340@AEAUMeetAndChatInstallResult@82340@@Z @ 0x1805BFD40 (--$make@UMeetAndChatInstallStatus@implementation@Shell@Internal@Windows@winrt@@W4AsyncStatus@Fou.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::TryGetInstallStatus(
        __int64 a1,
        _QWORD *a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 *v5; // rax
  char v6; // bl
  __int64 v7; // rcx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+58h] [rbp+10h] BYREF
  RTL_SRWLOCK *v11; // [rsp+60h] [rbp+18h] BYREF

  v10 = a2;
  v4 = (RTL_SRWLOCK *)(a1 + 112);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 112));
  v11 = v4;
  if ( *(_QWORD *)(a1 + 248) )
  {
    LODWORD(v10) = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>>::Status((__int64 *)(a1 + 248));
    v5 = winrt::make<winrt::Windows::Internal::Shell::implementation::MeetAndChatInstallStatus,enum winrt::Windows::Foundation::AsyncStatus,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress &,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult &>(
           &v9,
           (int *)&v10,
           a1 + 224,
           (_QWORD *)(a1 + 240));
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
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
  return a2;
}
