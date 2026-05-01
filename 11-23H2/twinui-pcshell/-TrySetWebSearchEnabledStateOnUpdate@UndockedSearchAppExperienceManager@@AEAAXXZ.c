/*
 * XREFs of ?TrySetWebSearchEnabledStateOnUpdate@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801EFCC4
 * Callers:
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180112970 (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_9e570927e665d205f933b0ae213f3c70___ @ 0x1801E677C (Windows--Internal--ComTaskPool--QueueTask__lambda_9e570927e665d205f933b0ae213f3c70___.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1801E8174 (--0-$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRe_ea_1801E8174.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801E822C (--0-$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRe_ea_1801E822C.c)
 *     ??1UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1801E8B28 (--1UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManage.c)
 *     ?HasSetWebSearchEnabledStateOnUpdate@UndockedSearchAppExperienceManager@@AEAA_NXZ @ 0x1801ED530 (-HasSetWebSearchEnabledStateOnUpdate@UndockedSearchAppExperienceManager@@AEAA_NXZ.c)
 *     ?IsWebSearchProviderInstalled@@YA_NXZ @ 0x1801ED8E8 (-IsWebSearchProviderInstalled@@YA_NXZ.c)
 *     ?StartActivity@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManagerTelemetry@@QEAAXXZ @ 0x1801EF4CC (-StartActivity@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExpe.c)
 *     ?Stop@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManagerTelemetry@@QEAAX_N000@Z @ 0x1801EF698 (-Stop@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceMan.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall UndockedSearchAppExperienceManager::TrySetWebSearchEnabledStateOnUpdate(
        UndockedSearchAppExperienceManager *this)
{
  char v1; // bl
  UndockedSearchAppExperienceManager *v2; // rcx
  char HasSetWebSearchEnabledStateOnUpdate; // di
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  const char *v7; // r9
  LPCVOID lpData; // [rsp+20h] [rbp-2C8h]
  int Data[4]; // [rsp+30h] [rbp-2B8h] BYREF
  _QWORD v10[40]; // [rsp+40h] [rbp-2A8h] BYREF
  _QWORD v11[40]; // [rsp+180h] [rbp-168h] BYREF
  char v12; // [rsp+2C0h] [rbp-28h]
  char v13; // [rsp+2C1h] [rbp-27h]
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+0h]

  wil::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v10);
  v10[0] = &SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::`vftable';
  SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::StartActivity((SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate *)v10);
  v1 = IsWebSearchProviderInstalled();
  HasSetWebSearchEnabledStateOnUpdate = UndockedSearchAppExperienceManager::HasSetWebSearchEnabledStateOnUpdate(v2);
  if ( HasSetWebSearchEnabledStateOnUpdate )
  {
LABEL_9:
    SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::Stop(
      (SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate *)v10,
      v1,
      HasSetWebSearchEnabledStateOnUpdate,
      0,
      0);
    goto LABEL_10;
  }
  if ( !v1 )
  {
    Data[0] = 1;
    v6 = RegSetKeyValueW(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
           L"HasSetWebSearchEnabledStateOnUpdate",
           4u,
           Data,
           4u);
    if ( v6 > 0 )
      v6 = (unsigned __int16)v6 | 0x80070000;
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xE93,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
    goto LABEL_9;
  }
  wil::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v11,
    (__int64)v10);
  v11[0] = &SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::`vftable';
  v12 = v1;
  v13 = 0;
  v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_9e570927e665d205f933b0ae213f3c70___(v4, (__int64)v11);
  if ( v5 < 0 )
  {
    try
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xE8D,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v5,
        (int)lpData);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0xE98,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        v7);
      goto LABEL_10;
    }
  }
  SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::~UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate((SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate *)v11);
LABEL_10:
  SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::~UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate((SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate *)v10);
}
