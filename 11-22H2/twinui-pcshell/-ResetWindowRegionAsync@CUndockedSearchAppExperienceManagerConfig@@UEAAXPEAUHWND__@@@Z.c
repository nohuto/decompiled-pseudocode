/*
 * XREFs of ?ResetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@@Z @ 0x180050350
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0$$V@UndockedSearchAppExperienceManager_ResetWindowRgn@SearchAppExperienceManagerTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180050430 (--$-0$$V@UndockedSearchAppExperienceManager_ResetWindowRgn@SearchAppExperienceManagerTelemetry@@.c)
 *     ??1UndockedSearchAppExperienceManager_ResetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1800504E4 (--1UndockedSearchAppExperienceManager_ResetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@X.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_224ca2662a1dba27bb7ec196acbc4aa2___ @ 0x1801E65A0 (Windows--Internal--ComTaskPool--QueueTask__lambda_224ca2662a1dba27bb7ec196acbc4aa2___.c)
 *     _lambda_224ca2662a1dba27bb7ec196acbc4aa2_::_lambda_224ca2662a1dba27bb7ec196acbc4aa2_ @ 0x1801E7E98 (_lambda_224ca2662a1dba27bb7ec196acbc4aa2_--_lambda_224ca2662a1dba27bb7ec196acbc4aa2_.c)
 *     _lambda_224ca2662a1dba27bb7ec196acbc4aa2_::__lambda_224ca2662a1dba27bb7ec196acbc4aa2_ @ 0x1801E8600 (_lambda_224ca2662a1dba27bb7ec196acbc4aa2_--__lambda_224ca2662a1dba27bb7ec196acbc4aa2_.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CUndockedSearchAppExperienceManagerConfig::ResetWindowRegionAsync(
        CUndockedSearchAppExperienceManagerConfig *this,
        HWND a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  const char *v8; // r9
  HWND v9[2]; // [rsp+20h] [rbp-2B8h] BYREF
  _BYTE v10[320]; // [rsp+30h] [rbp-2A8h] BYREF
  _BYTE v11[336]; // [rsp+170h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2D8h] [rbp+0h]

  v9[0] = a2;
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn::UndockedSearchAppExperienceManager_ResetWindowRgn(v10);
  v4 = lambda_224ca2662a1dba27bb7ec196acbc4aa2_::_lambda_224ca2662a1dba27bb7ec196acbc4aa2_(v11, v9, v10);
  v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_224ca2662a1dba27bb7ec196acbc4aa2___(
         v6,
         v5,
         *((unsigned int *)this + 2),
         v4);
  if ( v7 < 0 )
    winrt::throw_hresult((unsigned int)v7);
  lambda_224ca2662a1dba27bb7ec196acbc4aa2_::__lambda_224ca2662a1dba27bb7ec196acbc4aa2_(v11);
  if ( !SetPropW(a2, L"UIA_WindowVisibilityOverridden", 0LL) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x202,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v8);
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn::~UndockedSearchAppExperienceManager_ResetWindowRgn((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn *)v10);
}
