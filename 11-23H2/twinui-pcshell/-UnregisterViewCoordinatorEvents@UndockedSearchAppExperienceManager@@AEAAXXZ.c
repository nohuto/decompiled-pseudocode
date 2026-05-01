/*
 * XREFs of ?UnregisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180095A80
 * Callers:
 *     ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x180037BE0 (-Hide@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x1800381A0 (-HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1800B7C8C (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ??1UndockedSearchAppExperienceManager@@UEAA@XZ @ 0x180466528 (--1UndockedSearchAppExperienceManager@@UEAA@XZ.c)
 * Callees:
 *     ?HasRegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAA_NXZ @ 0x180098584 (-HasRegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAA_NXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 *     ??1ProtocolLauncherInfo@StateRepository@Internal@Windows@winrt@@QEAA@XZ @ 0x1801DA1D8 (--1ProtocolLauncherInfo@StateRepository@Internal@Windows@winrt@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e7bb90a6b8bac423fd1716c72f93d12a___ @ 0x1801E69D8 (Windows--Internal--ComTaskPool--QueueTask__lambda_e7bb90a6b8bac423fd1716c72f93d12a___.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UndockedSearchAppExperienceManager::UnregisterViewCoordinatorEvents(RTL_SRWLOCK *this)
{
  PVOID Ptr; // rdi
  PVOID v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  int v7; // [rsp+20h] [rbp-28h] BYREF
  PVOID v8; // [rsp+28h] [rbp-20h]
  PVOID v9; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( UndockedSearchAppExperienceManager::HasRegisterViewCoordinatorEvents((UndockedSearchAppExperienceManager *)this) )
  {
    AcquireSRWLockExclusive(this + 36);
    Ptr = this[38].Ptr;
    this[38].Ptr = 0LL;
    v3 = this[39].Ptr;
    this[39].Ptr = 0LL;
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
      &v7,
      &this[37]);
    v8 = Ptr;
    v9 = v3;
    v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_e7bb90a6b8bac423fd1716c72f93d12a___(
           v5,
           v4,
           LODWORD(this[20].Ptr),
           &v7);
    winrt::Windows::Internal::StateRepository::ProtocolLauncherInfo::~ProtocolLauncherInfo((winrt::Windows::Internal::StateRepository::ProtocolLauncherInfo *)&v7);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC53,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v6,
        v7);
    if ( this != (RTL_SRWLOCK *)-288LL )
      ReleaseSRWLockExclusive(this + 36);
  }
}
