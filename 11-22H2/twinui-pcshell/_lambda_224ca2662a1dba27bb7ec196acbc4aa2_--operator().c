/*
 * XREFs of _lambda_224ca2662a1dba27bb7ec196acbc4aa2_::operator() @ 0x1801E8FDC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_224ca2662a1dba27bb7ec196acbc4aa2___::Run @ 0x1801EF050 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_224ca2662a1dba27bb7ec196acbc4aa2___--Run.c)
 * Callees:
 *     ??1UndockedSearchAppExperienceManager_ResetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1800504E4 (--1UndockedSearchAppExperienceManager_ResetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@X.c)
 *     ?Stop@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800BA4B8 (-Stop@-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800BAF48 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800BAF78 (--0-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_ea_1800BAF78.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800BBDE4 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_224ca2662a1dba27bb7ec196acbc4aa2_::operator()(__int64 a1)
{
  int v2; // edx
  const char *v3; // r9
  _OWORD v4[3]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v5; // [rsp+50h] [rbp-B0h]
  int v6; // [rsp+58h] [rbp-A8h]
  __int64 v7; // [rsp+60h] [rbp-A0h]
  _QWORD v8[6]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD *v9; // [rsp+A0h] [rbp-60h]
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v8,
    (_QWORD *)(a1 + 8));
  v8[0] = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn::`vftable';
  if ( *v9 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v4,
      (struct wil::details::IFailureCallback *)v8,
      (const struct wil::details::StoredCallContextInfo *)(v9 + 10));
  }
  else
  {
    memset(v4, 0, sizeof(v4));
    v5 = 0LL;
    v6 = 0;
    v7 = 0LL;
  }
  if ( !SetWindowRgn(*(HWND *)a1, 0LL, 0) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x1FC,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v3);
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v8,
    v2);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v4);
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn::~UndockedSearchAppExperienceManager_ResetWindowRgn((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn *)v8);
}
