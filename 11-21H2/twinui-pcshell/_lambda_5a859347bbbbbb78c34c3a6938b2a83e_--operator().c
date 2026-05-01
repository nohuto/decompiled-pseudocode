/*
 * XREFs of _lambda_5a859347bbbbbb78c34c3a6938b2a83e_::operator() @ 0x1801A7048
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5a859347bbbbbb78c34c3a6938b2a83e___::Run @ 0x1801A8080 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5a859347bbbbbb78c34c3a6938b2a83e___--Run.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800716A8 (--0-$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag__ea_1800716A8.c)
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG0PEAUIInspectable@@0PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x1800A4818 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG0PEAUIInspectable@@0PEAUIPropertySet@Co.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F2B64 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x180137594 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ?Stop@?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18015C848 (-Stop@-$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsPr.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x18017928C (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??$as@UIInspectable@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIInspectable@@@3@XZ @ 0x18017C238 (--$as@UIInspectable@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIInspectable@@@3@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??1MiniSearchAppExperienceManager_ActivateAppAsync@MiniSearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1803A0FA4 (--1MiniSearchAppExperienceManager_ActivateAppAsync@MiniSearchAppExperienceManagerTelemetry@@QEAA.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_5a859347bbbbbb78c34c3a6938b2a83e_::operator()(__int64 a1)
{
  const unsigned __int16 *v2; // rax
  __int64 *v3; // r8
  __int64 v4; // rdx
  int v5; // eax
  unsigned int v6; // edx
  const char *v7; // r9
  __int64 result; // rax
  int v9; // [rsp+20h] [rbp-1D8h]
  __int64 v10; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 v11; // [rsp+48h] [rbp-1B0h] BYREF
  _OWORD v12[3]; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v13; // [rsp+80h] [rbp-178h]
  int v14; // [rsp+88h] [rbp-170h]
  __int64 v15; // [rsp+90h] [rbp-168h]
  _QWORD v16[6]; // [rsp+A0h] [rbp-158h] BYREF
  _DWORD *v17; // [rsp+D0h] [rbp-128h]
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+0h]

  wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v16,
    a1);
  v16[0] = &MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_ActivateAppAsync::`vftable';
  if ( *v17 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v12,
      (struct wil::details::IFailureCallback *)v16,
      (const struct wil::details::StoredCallContextInfo *)(v17 + 10));
  }
  else
  {
    memset(v12, 0, sizeof(v12));
    v13 = 0LL;
    v14 = 0;
    v15 = 0LL;
  }
  try
  {
    v11 = 0LL;
    winrt::Windows::Foundation::IUnknown::as<IInspectable>(
      (__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 328),
      &v10);
    v2 = winrt::hstring::c_str((winrt::hstring *)(a1 + 320));
    v5 = ActivateApplicationForExperienceWithPropertySet((__int64)v2, v4, *v3, 0LL, 0LL, 1u, 0LL);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC2,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
        (const char *)(unsigned int)v5,
        v9);
    if ( v10 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v10);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
    wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v16,
      v6);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v12);
    MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_ActivateAppAsync::~MiniSearchAppExperienceManager_ActivateAppAsync((MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_ActivateAppAsync *)v16);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v10) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xC3,
                     (int)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
                     v7);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v12);
    MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_ActivateAppAsync::~MiniSearchAppExperienceManager_ActivateAppAsync((MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_ActivateAppAsync *)v16);
    return (unsigned int)v10;
  }
  return result;
}
