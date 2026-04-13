/*
 * XREFs of ??R_lambda_141232aca07f559541c51213e97da677_@@QEBAXXZ @ 0x180076920
 * Callers:
 *     ?Run@?$functor_wrapper_void@AEAV_lambda_141232aca07f559541c51213e97da677_@@@details@wil@@UEAAJXZ @ 0x18007A720 (-Run@-$functor_wrapper_void@AEAV_lambda_141232aca07f559541c51213e97da677_@@@details@wil@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$vector@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18007651C (--1-$vector@V-$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V-$all.c)
 *     ??1HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAA@XZ @ 0x180076694 (--1HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperie.c)
 *     ?FindAllUserAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180077C6C (-FindAllUserAccounts@CDPActivityHelper@MobilityExperience@@YA-AV-$com_ptr_t@U-$IVectorView@PEAVW.c)
 *     ?GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180077DF0 (-GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA-AV-$vector@V-.c)
 *     ?GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAUHSTRING__@@PEAU_GUID@@PEAW4CDPActivityType@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180078588 (-GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAU.c)
 *     ?GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAPEAUHSTRING__@@1@Z @ 0x180078DB0 (-GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@.c)
 *     ?LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@0@Z @ 0x18007937C (-LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@.c)
 *     ?PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAVICDPActivityStore@@@Z @ 0x180079C24 (-PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWra.c)
 *     ?StartActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAAXU_GUID@@PEBGPEBD@Z @ 0x18007A9C8 (-StartActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@Mob.c)
 *     ?Stop@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAAXPEBD@Z @ 0x18007ABD4 (-Stop@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExpe.c)
 *     ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18007B148 (-Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=21
HRESULT __fastcall _lambda_141232aca07f559541c51213e97da677_::operator()(__int64 a1)
{
  const char *v2; // rdi
  const unsigned __int16 *StringRawBuffer; // rbx
  char v4; // r13
  int v5; // eax
  __int64 v6; // rbx
  __int64 *v7; // rdi
  __int64 **v8; // rsi
  __int64 **v9; // r12
  __int64 *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  DWORD v15; // esi
  __int64 v16; // rcx
  ToastNotification::ActivityToastNotificationCallback *v17; // rcx
  int v18; // eax
  bool v19; // sf
  const char *v20; // rdx
  HRESULT result; // eax
  const char *lpData; // [rsp+20h] [rbp-298h]
  int *lpDataa; // [rsp+20h] [rbp-298h]
  HSTRING v24; // [rsp+40h] [rbp-278h] BYREF
  HSTRING v25; // [rsp+48h] [rbp-270h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+50h] [rbp-268h] BYREF
  __int64 v27; // [rsp+58h] [rbp-260h]
  HSTRING string[2]; // [rsp+60h] [rbp-258h] BYREF
  struct _GUID v29; // [rsp+70h] [rbp-248h] BYREF
  int v30; // [rsp+80h] [rbp-238h] BYREF
  _QWORD v31[2]; // [rsp+88h] [rbp-230h] BYREF
  __int64 v32; // [rsp+98h] [rbp-220h]
  __int64 *v33; // [rsp+A0h] [rbp-218h]
  _QWORD v34[3]; // [rsp+A8h] [rbp-210h] BYREF
  char *v35[2]; // [rsp+C0h] [rbp-1F8h] BYREF
  __int64 v36; // [rsp+D0h] [rbp-1E8h]
  unsigned __int64 v37; // [rsp+D8h] [rbp-1E0h]
  GUID rguid; // [rsp+E0h] [rbp-1D8h] BYREF
  _QWORD v39[4]; // [rsp+F0h] [rbp-1C8h] BYREF
  int v40; // [rsp+110h] [rbp-1A8h]
  int *v41; // [rsp+118h] [rbp-1A0h]
  int *v42; // [rsp+120h] [rbp-198h]
  int v43; // [rsp+128h] [rbp-190h] BYREF
  char v44; // [rsp+12Ch] [rbp-18Ch]
  int v45; // [rsp+150h] [rbp-168h] BYREF
  const char *v46; // [rsp+158h] [rbp-160h]
  __int64 v47; // [rsp+160h] [rbp-158h]
  char v48; // [rsp+168h] [rbp-150h]
  __int64 v49; // [rsp+170h] [rbp-148h]
  _BYTE v50[152]; // [rsp+178h] [rbp-140h] BYREF
  __int64 v51; // [rsp+210h] [rbp-A8h]
  __int128 v52; // [rsp+218h] [rbp-A0h]
  __int64 v53; // [rsp+228h] [rbp-90h]
  OLECHAR sz[40]; // [rsp+230h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+0h]

  string[0] = 0LL;
  v37 = 15LL;
  v36 = 0LL;
  LOBYTE(v35[0]) = 0;
  WindowsDeleteString(0LL);
  try
  {
    string[0] = 0LL;
    lpDataa = &v30;
    ToastNotification::ActivityToastNotificationCallback::GetNotificationParameters(
      &v30,
      **(_QWORD **)(a1 + 8),
      string,
      &rguid);
    v2 = (const char *)v35;
    if ( v37 >= 0x10 )
      v2 = v35[0];
    StringRawBuffer = WindowsGetStringRawBuffer(string[0], 0LL);
    v39[1] = 0LL;
    v39[2] = v39;
    v39[3] = 0LL;
    v40 = 0;
    v41 = &v45;
    v42 = &v43;
    v43 = 0;
    v44 = 0;
    v48 = 0;
    v45 = 0;
    v46 = "HandleResumableTaskNotificationActivity";
    v47 = 0LL;
    v4 = 1;
    v49 = 1LL;
    v51 = 0LL;
    memset_0(v50, 0, sizeof(v50));
    v52 = 0LL;
    v53 = 0LL;
    v39[0] = &MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::`vftable';
    v29 = rguid;
    MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::StartActivity(
      (MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *)v39,
      &v29,
      StringRawBuffer,
      v2);
    v5 = CDPInitialize();
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        124LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v5,
        (int)&v30);
    StringFromGUID2(&rguid, sz, 39);
    v33 = 0LL;
    v32 = 0LL;
    MobilityExperience::CDPActivityHelper::FindAllUserAccounts(&SystemTimeAsFileTime);
    ((void (__fastcall *)(_QWORD, _QWORD))MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts)(
      v34,
      SystemTimeAsFileTime);
    v6 = 0LL;
    v32 = 0LL;
    v7 = 0LL;
    v33 = 0LL;
    v8 = (__int64 **)v34[0];
    v9 = (__int64 **)v34[1];
    while ( v8 != v9 )
    {
      v10 = *v8;
      *(_QWORD *)&v29.Data1 = v10;
      if ( v10 )
        (*(void (__fastcall **)(__int64 *))(*v10 + 8))(v10);
      v31[0] = 0LL;
      v11 = *v10;
      v31[0] = 0LL;
      if ( (*(int (__fastcall **)(__int64 *, GUID *, _QWORD *))(v11 + 48))(v10, &rguid, v31) >= 0 )
      {
        v13 = v31[0];
        v31[0] = 0LL;
        v32 = v13;
        v33 = v10;
        v4 = 0;
        v6 = v13;
        v7 = v10;
        break;
      }
      if ( v31[0] )
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v31[0] + 16LL))(v31[0], v12);
      (*(void (__fastcall **)(__int64 *))(*v10 + 16))(v10);
      ++v8;
    }
    std::vector<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>::~vector<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>((__int64)v34);
    if ( SystemTimeAsFileTime )
      (*(void (__fastcall **)(struct _FILETIME, __int64))(**(_QWORD **)&SystemTimeAsFileTime + 16LL))(
        SystemTimeAsFileTime,
        v14);
    LOBYTE(lpDataa) = v4;
    wil::details::in1diag3::Throw_HrIfMsg(
      retaddr,
      (void *)0x83,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)0x80070490LL,
      (int)lpDataa,
      (bool)"Unable to find activity [GUID = %ls]",
      (const char *)sz);
    v15 = v30;
    LODWORD(v31[0]) = v30;
    v31[1] = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    WindowsDeleteString(0LL);
    v25 = 0LL;
    WindowsDeleteString(0LL);
    v24 = 0LL;
    SystemTimeAsFileTime.dwLowDateTime = v15;
    v27 = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    ToastNotification::ActivityToastNotificationCallback::GetUrisFromActivity(v16, &SystemTimeAsFileTime, &v24, &v25);
    ToastNotification::ActivityToastNotificationCallback::LaunchUriWithFallback(v17, v24, v25);
    v29.Data1 = v15;
    *(_QWORD *)v29.Data4 = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    ToastNotification::ActivityToastNotificationCallback::PublishCompletedActivity(*(_QWORD *)a1, &v29, v7);
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    SystemTimeAsFileTime = (struct _FILETIME)(SystemTimeAsFileTime.dwLowDateTime
                                            + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32));
    v18 = RegSetKeyValueW(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
            L"LastResumeOnPCInteractionTime",
            0xBu,
            &SystemTimeAsFileTime,
            8u);
    v19 = v18 < 0;
    if ( v18 > 0 )
    {
      v18 = (unsigned __int16)v18 | 0x80070000;
      v19 = v18 < 0;
    }
    if ( v19 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9A,
        (__int64)"onecoreuap\\internal\\shell\\inc\\MobilityExperienceSettings.h",
        (const char *)(unsigned int)v18);
    v20 = (const char *)v35;
    if ( v37 >= 0x10 )
      v20 = v35[0];
    MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::Stop(
      (MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *)v39,
      v20);
    WindowsDeleteString(v25);
    v25 = 0LL;
    WindowsDeleteString(v24);
    v24 = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v7 )
      (*(void (__fastcall **)(__int64 *))(*v7 + 16))(v7);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::~HandleResumableTaskNotificationActivity((MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *)v39);
    if ( v37 >= 0x10 )
      operator delete(v35[0]);
    v37 = 15LL;
    v36 = 0LL;
    LOBYTE(v35[0]) = 0;
    result = WindowsDeleteString(string[0]);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtExceptionMsg(
             retaddr,
             (void *)0x93,
             (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
             "Failed to handle an Activity Toast Notification",
             lpData);
  }
  return result;
}
