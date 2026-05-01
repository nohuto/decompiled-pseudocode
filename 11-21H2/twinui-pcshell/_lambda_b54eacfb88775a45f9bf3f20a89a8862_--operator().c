/*
 * XREFs of _lambda_b54eacfb88775a45f9bf3f20a89a8862_::operator() @ 0x180405574
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b54eacfb88775a45f9bf3f20a89a8862___::Run @ 0x180406230 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b54eacfb88775a45f9bf3f20a89a8862___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180030B38 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x180030BD8 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ??1CCrashDetector@@QEAA@XZ @ 0x18003CCE0 (--1CCrashDetector@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180107578 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802EBA5C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$HostedViewClosingTimeoutWaitExceeded@AEAK@ViewManagerInteropTraceLogging@@SAXAEAK@Z @ 0x1803FBE54 (--$HostedViewClosingTimeoutWaitExceeded@AEAK@ViewManagerInteropTraceLogging@@SAXAEAK@Z.c)
 *     ?CreateEventWithSDDL@@YAJPEBG0HPEAPEAX@Z @ 0x1803FC7AC (-CreateEventWithSDDL@@YAJPEBG0HPEAPEAX@Z.c)
 *     CCrashDetector::StartMonitoringThreadOfWindow__lambda_ad23e8dd0e41a5c9c2f47d777b3bbcff___ @ 0x18040508C (CCrashDetector--StartMonitoringThreadOfWindow__lambda_ad23e8dd0e41a5c9c2f47d777b3bbcff___.c)
 *     _lambda_b34b1a0e0f93d6865fffe40b58850487_::operator() @ 0x18040550C (_lambda_b34b1a0e0f93d6865fffe40b58850487_--operator().c)
 *     ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1805E8058 (-IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall lambda_b54eacfb88775a45f9bf3f20a89a8862_::operator()(__int64 a1)
{
  HRESULT v2; // eax
  HRESULT v3; // eax
  const unsigned __int16 *v4; // rdx
  __int64 v5; // r8
  int v6; // eax
  int *v7; // r8
  int IsAppBeingDebugged; // eax
  _QWORD *v9; // rax
  const char *v10; // r9
  void *v11; // rdi
  int v12; // r14d
  HANDLE v13; // rbx
  int started; // eax
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  const char *v18; // r9
  __int64 result; // rax
  __int64 *v20; // [rsp+20h] [rbp-88h] BYREF
  _QWORD *v21; // [rsp+28h] [rbp-80h] BYREF
  HANDLE hHandle; // [rsp+30h] [rbp-78h] BYREF
  LPOLESTR lpsz; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int16 v24[8]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v25; // [rsp+50h] [rbp-58h] BYREF
  char v26; // [rsp+58h] [rbp-50h]
  void *v27; // [rsp+60h] [rbp-48h]
  _BYTE v28[24]; // [rsp+68h] [rbp-40h] BYREF
  IID rclsid; // [rsp+80h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v25 = *(_QWORD *)(a1 + 8);
  v26 = 1;
  v2 = CoCreateGuid(&rclsid);
  try
  {
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA9,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v2,
        (int)v20);
    lpsz = 0LL;
    v3 = StringFromCLSID(&rclsid, &lpsz);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xAB,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v3,
        (int)v20);
    hHandle = 0LL;
    v6 = CreateEventWithSDDL(lpsz, v4, v5, &hHandle);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xAD,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v6,
        (int)v20);
    *(_DWORD *)v24 = 0;
    IsAppBeingDebugged = CallerIdentity::ApiPolicyChecker::IsAppBeingDebugged(
                           *(CallerIdentity::ApiPolicyChecker **)(a1 + 24),
                           v24,
                           v7);
    if ( IsAppBeingDebugged < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xAF,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)IsAppBeingDebugged,
        (int)v20);
    v9 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v9;
    v21 = v9;
    if ( v9 )
    {
      *v9 = 0LL;
      v9[1] = 0LL;
      v9[2] = 0LL;
    }
    else
    {
      v11 = 0LL;
    }
    v27 = v11;
    if ( !v11 )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        (void *)0xB1,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        v10);
    LODWORD(v21) = 15000;
    v20 = 0LL;
    CRPCTimeout::CRPCTimeout((CRPCTimeout *)v28, 0x3A98u);
    v12 = *(_DWORD *)v24;
    if ( *(_DWORD *)v24 )
    {
      CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v28);
      v13 = hHandle;
      *(_QWORD *)v24 = hHandle;
      started = CCrashDetector::StartMonitoringThreadOfWindow__lambda_ad23e8dd0e41a5c9c2f47d777b3bbcff___(
                  v11,
                  *(HWND *)(a1 + 16),
                  v24);
      if ( started < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xC2,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
          (const char *)(unsigned int)started,
          (int)v20);
    }
    else
    {
      v13 = hHandle;
    }
    v20 = 0LL;
    v15 = CoreQueryWindowService(
            *(_QWORD *)(a1 + 16),
            &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc,
            &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc,
            &v20);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC4,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v15,
        (int)v20);
    v16 = *v20;
    *(IID *)v24 = rclsid;
    v17 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, unsigned __int16 *))(v16 + 24))(v20, *(_QWORD *)(a1 + 16), v24);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC6,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v17,
        (int)v20);
    CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v28);
    if ( WaitForSingleObject(v13, v12 != 0 ? -1 : 15000) == 258 )
      ViewManagerInteropTraceLogging::HostedViewClosingTimeoutWaitExceeded<unsigned long &>((int *)&v21);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v20);
    CCrashDetector::~CCrashDetector((CCrashDetector *)v11);
    operator delete(v11);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hHandle);
    wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)&lpsz);
    v26 = 0;
    lambda_b34b1a0e0f93d6865fffe40b58850487_::operator()((__int64)&v25);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xCF,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
                           v18);
  }
  return result;
}
