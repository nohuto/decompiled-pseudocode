/*
 * XREFs of _lambda_b1ccbe0050df59b1c7585372b6aa23ae_::operator() @ 0x1804DCF5C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b1ccbe0050df59b1c7585372b6aa23ae___::Run @ 0x1804DDB00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b1ccbe0050df59b1c7585372b6aa23ae___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180165FBC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180187820 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x1801878C0 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ??1CCrashDetector@@QEAA@XZ @ 0x180197A50 (--1CCrashDetector@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D66A8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$HostedViewClosingTimeoutWaitExceeded@AEAK@ViewManagerInteropTraceLogging@@SAXAEAK@Z @ 0x1804DC3A4 (--$HostedViewClosingTimeoutWaitExceeded@AEAK@ViewManagerInteropTraceLogging@@SAXAEAK@Z.c)
 *     CCrashDetector::StartMonitoringThreadOfWindow__lambda_687e5053c587afc072c764cc8235e711___ @ 0x1804DC814 (CCrashDetector--StartMonitoringThreadOfWindow__lambda_687e5053c587afc072c764cc8235e711___.c)
 *     _lambda_37ce3c0886db64cd36632e83c34f1ff5_::operator() @ 0x1804DCE54 (_lambda_37ce3c0886db64cd36632e83c34f1ff5_--operator().c)
 *     ?CreateEventWithSDDL@@YAJPEBG0HPEAPEAX@Z @ 0x1804DD600 (-CreateEventWithSDDL@@YAJPEBG0HPEAPEAX@Z.c)
 *     ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x18073C998 (-IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_b1ccbe0050df59b1c7585372b6aa23ae_::operator()(__int64 a1)
{
  HRESULT v2; // eax
  void **v3; // rax
  HRESULT v4; // eax
  const unsigned __int16 *v5; // rdx
  int v6; // r8d
  int v7; // eax
  int *v8; // r8
  int IsAppBeingDebugged; // eax
  _QWORD *v10; // rax
  const char *v11; // r9
  void *v12; // rdi
  int v13; // r14d
  char *v14; // rbx
  int started; // eax
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  const char *v19; // r9
  __int64 result; // rax
  __int64 *v21; // [rsp+20h] [rbp-88h] BYREF
  _QWORD *v22; // [rsp+28h] [rbp-80h] BYREF
  HANDLE hHandle; // [rsp+30h] [rbp-78h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int16 v25[8]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v26; // [rsp+50h] [rbp-58h] BYREF
  char v27; // [rsp+58h] [rbp-50h]
  void *v28; // [rsp+60h] [rbp-48h]
  _BYTE v29[24]; // [rsp+68h] [rbp-40h] BYREF
  IID rclsid; // [rsp+80h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v26 = *(_QWORD *)(a1 + 8);
  v27 = 1;
  v2 = CoCreateGuid(&rclsid);
  try
  {
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA7,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v2,
        (int)v21);
    pv = 0LL;
    v3 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
    v4 = StringFromCLSID(&rclsid, (LPOLESTR *)v3);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA9,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v4,
        (int)v21);
    hHandle = 0LL;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hHandle,
      0LL);
    v7 = CreateEventWithSDDL((LPCWSTR)pv, v5, v6, &hHandle);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xAB,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v7,
        (int)v21);
    *(_DWORD *)v25 = 0;
    IsAppBeingDebugged = CallerIdentity::ApiPolicyChecker::IsAppBeingDebugged(
                           *(CallerIdentity::ApiPolicyChecker **)(a1 + 24),
                           v25,
                           v8);
    if ( IsAppBeingDebugged < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xAD,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)IsAppBeingDebugged,
        (int)v21);
    v10 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v10;
    v22 = v10;
    if ( v10 )
    {
      *v10 = 0LL;
      v10[1] = 0LL;
      v10[2] = 0LL;
    }
    else
    {
      v12 = 0LL;
    }
    v28 = v12;
    if ( !v12 )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        (void *)0xAF,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        v11);
    LODWORD(v22) = 15000;
    v21 = 0LL;
    CRPCTimeout::CRPCTimeout((CRPCTimeout *)v29, 0x3A98u);
    v13 = *(_DWORD *)v25;
    if ( *(_DWORD *)v25 )
    {
      CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v29);
      v14 = (char *)hHandle;
      *(_QWORD *)v25 = hHandle;
      started = CCrashDetector::StartMonitoringThreadOfWindow__lambda_687e5053c587afc072c764cc8235e711___(
                  v12,
                  *(HWND *)(a1 + 16),
                  v25);
      if ( started < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xC0,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
          (const char *)(unsigned int)started,
          (int)v21);
    }
    else
    {
      v14 = (char *)hHandle;
    }
    v21 = 0LL;
    v16 = CoreQueryWindowService(
            *(_QWORD *)(a1 + 16),
            &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc,
            &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc,
            &v21);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC2,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v16,
        (int)v21);
    v17 = *v21;
    *(IID *)v25 = rclsid;
    v18 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, unsigned __int16 *))(v17 + 24))(v21, *(_QWORD *)(a1 + 16), v25);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC4,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v18,
        (int)v21);
    CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v29);
    if ( WaitForSingleObject(v14, v13 != 0 ? -1 : 15000) == 258 )
      ViewManagerInteropTraceLogging::HostedViewClosingTimeoutWaitExceeded<unsigned long &>((int *)&v22);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
    CCrashDetector::~CCrashDetector((CCrashDetector *)v12);
    operator delete(v12);
    if ( (unsigned __int64)(v14 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v14);
    if ( pv )
      CoTaskMemFree(pv);
    v27 = 0;
    lambda_37ce3c0886db64cd36632e83c34f1ff5_::operator()((__int64)&v26);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xCD,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
                           v19);
  }
  return result;
}
