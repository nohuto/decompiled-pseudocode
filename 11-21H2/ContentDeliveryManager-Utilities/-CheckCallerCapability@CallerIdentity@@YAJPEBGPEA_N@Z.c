/*
 * XREFs of ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180084408
 * Callers:
 *     ?get_ActionHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIActionHelper@2@@Z @ 0x180048CB0 (-get_ActionHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIActionHelper@2@@.c)
 *     ?get_AppManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIAppManager@2@@Z @ 0x180048F10 (-get_AppManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIAppManager@2@@Z.c)
 *     ?get_LaunchManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUILaunchManager@2@@Z @ 0x180049810 (-get_LaunchManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUILaunchManager@2.c)
 *     ?get_MobilityExperienceSettings@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIMobilityExperienceSettings@2@@Z @ 0x180049A70 (-get_MobilityExperienceSettings@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIMo.c)
 *     ?get_NotificationManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUINotificationManager@2@@Z @ 0x180049CD0 (-get_NotificationManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUINotificat.c)
 *     ?get_PhoneShellNamespaceHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIPhoneShellNamespaceHelper@2@@Z @ 0x18004A050 (-get_PhoneShellNamespaceHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIPho.c)
 *     ?GetOrCreateInstance@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@SA?AV?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@XZ @ 0x18006FDD0 (-GetOrCreateInstance@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@SA-AV-$.c)
 *     ?GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z @ 0x18008AC90 (-GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z.c)
 *     ?IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x18008D320 (-IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z.c)
 *     ?IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z @ 0x18008D740 (-IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z.c)
 *     ?MoveAppInstallToFrontOfQueue@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z @ 0x18008DA00 (-MoveAppInstallToFrontOfQueue@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z.c)
 * Callees:
 *     ??$__invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z @ 0x1800273F8 (--$__invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x18008456C (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180084A3C (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CallerIdentity::CheckCallerCapability(CallerIdentity *this, const unsigned __int16 *a2, bool *a3)
{
  int CallingProcessHandle; // eax
  bool *v6; // r9
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  CallerIdentity *v10; // [rsp+48h] [rbp+28h] BYREF
  CallerIdentity *v11; // [rsp+50h] [rbp+30h] BYREF
  BOOL (__stdcall *v12)(HANDLE); // [rsp+58h] [rbp+38h] BYREF

  *(_BYTE *)a2 = 0;
  v10 = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(this, a2, &v10);
  v7 = CallingProcessHandle;
  if ( CallingProcessHandle >= 0 )
  {
    v7 = CallerIdentity::CheckCapabilityFromProcessHandle(v10, this, a2, v6);
    if ( (unsigned __int64)v10 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v11 = v10;
      v12 = CloseHandle;
      wistd::__invoke<int (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))&v12, &v11);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23,
      (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp",
      (const char *)(unsigned int)CallingProcessHandle);
    if ( (unsigned __int64)v10 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v11 = v10;
      v12 = CloseHandle;
      wistd::__invoke<int (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))&v12, &v11);
    }
  }
  return v7;
}
