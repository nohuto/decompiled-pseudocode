/*
 * XREFs of _lambda_ccf65d9649214ffd774f2e628ae5cb52_::operator() @ 0x18019C97C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ccf65d9649214ffd774f2e628ae5cb52___::Run @ 0x1801A0B90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ccf65d9649214ffd774f2e628ae5cb52___--Run.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0UndockedSearchAppExperienceManager_ActivateSearch@SearchAppExperienceManagerTelemetry@@QEAA@AEBV01@@Z @ 0x180071680 (--0UndockedSearchAppExperienceManager_ActivateSearch@SearchAppExperienceManagerTelemetry@@QEAA@A.c)
 *     ??1UndockedSearchAppExperienceManager_ActivateSearch@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x180078C70 (--1UndockedSearchAppExperienceManager_ActivateSearch@SearchAppExperienceManagerTelemetry@@QEAA@X.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180093360 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800A47E0 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG0PEAUIInspectable@@0PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x1800A4818 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG0PEAUIInspectable@@0PEAUIPropertySet@Co.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F2B64 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1800FACF4 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x180137594 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ?Stop@?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18015C848 (-Stop@-$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsPr.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x18017928C (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??$as@UIInspectable@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIInspectable@@@3@XZ @ 0x18017C238 (--$as@UIInspectable@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIInspectable@@@3@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_ccf65d9649214ffd774f2e628ae5cb52_::operator()(
        struct SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *a1)
{
  int v2; // eax
  __int64 v3; // r8
  int v4; // eax
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rsi
  const unsigned __int16 *v8; // rax
  __int64 *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rsi
  int v12; // eax
  unsigned int v13; // edx
  int v15; // [rsp+20h] [rbp-208h]
  int v16; // [rsp+20h] [rbp-208h]
  __int64 v17; // [rsp+40h] [rbp-1E8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-1E0h] BYREF
  __int64 v19[2]; // [rsp+50h] [rbp-1D8h] BYREF
  _OWORD v20[3]; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v21; // [rsp+90h] [rbp-198h]
  int v22; // [rsp+98h] [rbp-190h]
  __int64 v23; // [rsp+A0h] [rbp-188h]
  HSTRING_HEADER hstringHeader; // [rsp+B0h] [rbp-178h] BYREF
  HSTRING v25; // [rsp+C8h] [rbp-160h]
  _BYTE v26[48]; // [rsp+D0h] [rbp-158h] BYREF
  _DWORD *v27; // [rsp+100h] [rbp-128h]
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+0h]

  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::UndockedSearchAppExperienceManager_ActivateSearch(
    (SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *)v26,
    a1);
  if ( *v27 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v20,
      (struct wil::details::IFailureCallback *)v26,
      (const struct wil::details::StoredCallContextInfo *)(v27 + 10));
  }
  else
  {
    memset(v20, 0, sizeof(v20));
    v21 = 0LL;
    v22 = 0;
    v23 = 0LL;
  }
  v18 = 0LL;
  v25 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v2 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         (__int64)v25,
         &v18);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8A0,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v2,
      v15);
  v17 = v18;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
  v25 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"IsActivatedFromExperienceManager",
    0x21u,
    0x20u);
  v4 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)&v17,
         v25,
         v3,
         1);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8A2,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v4,
      v15);
  if ( *((_BYTE *)a1 + 328) )
  {
    v25 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"IsFirstSwitchPreLaunchActivation",
      0x21u,
      0x20u);
    v6 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)&v17,
           v25,
           v5,
           1);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x8A5,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v6,
        v15);
  }
  v7 = v18;
  winrt::Windows::Foundation::IUnknown::as<IInspectable>(
    (__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))a1 + 42,
    v19);
  v8 = winrt::hstring::c_str((struct SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *)((char *)a1 + 320));
  v11 = (int)ActivateApplicationForExperienceWithPropertySet((__int64)v8, v10, *v9, 0LL, v7, 1u, 0LL);
  if ( v19[0] )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v19);
  if ( !*((_BYTE *)a1 + 344) )
  {
    v12 = ExperienceManagerUtils::PostToUIThread(0LL, (struct IUnknown *)0x745E9FB, (void *)0x402, v11);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8B8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
  }
  if ( (int)v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8BA,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v11,
      v16);
  ExperienceManagerUtils::PostToUIThread(0LL, (struct IUnknown *)0x745E9FB, (void *)0x401, 11LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
  wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v26,
    v13);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v20);
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::~UndockedSearchAppExperienceManager_ActivateSearch((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *)v26);
  return 0LL;
}
