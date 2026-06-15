/*
 * XREFs of ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x18002DFA0
 * Callers:
 *     PbmReportAppInteractivityChange @ 0x180014C80 (PbmReportAppInteractivityChange.c)
 *     ?OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z @ 0x18002DD74 (-OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800025A0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180002610 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18000B480 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B5D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18000C4E0 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18000DA20 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800111BC (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEBG@Z @ 0x18001429C (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBG@std@@YA-AV-.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180015D80 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     __security_check_cookie @ 0x180016790 (__security_check_cookie.c)
 *     ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x180026264 (-CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x18002718C (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x180027210 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?PostDelayedInteractivityNotification@CApplication@@IEAAJ$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x180028360 (-PostDelayedInteractivityNotification@CApplication@@IEAAJ$$QEAV-$function@$$A6AXXZ@std@@@Z.c)
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_bc5d681da67d9384ebd56f302790ab0c__0_ @ 0x18002BE2C (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_bc5d681da67d9384ebd56f30.c)
 *     _lambda_bc5d681da67d9384ebd56f302790ab0c_::_lambda_bc5d681da67d9384ebd56f302790ab0c_ @ 0x18002C0CC (_lambda_bc5d681da67d9384ebd56f302790ab0c_--_lambda_bc5d681da67d9384ebd56f302790ab0c_.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall CApplicationManager::ProcessInteractivityNotification(
        __int64 a1,
        struct _RTL_CRITICAL_SECTION *a2,
        CApplication *a3,
        int a4,
        unsigned int a5)
{
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  __int64 v10; // rcx
  const struct _tlgProvider_t *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r14d
  int Application; // eax
  unsigned int v16; // edi
  CApplication *v18; // rbx
  __int64 v19; // rax
  int v20; // ebx
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  __int64 *v24; // rax
  int v25; // eax
  int v26; // [rsp+40h] [rbp-108h] BYREF
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+48h] [rbp-100h] BYREF
  CApplication *v28; // [rsp+50h] [rbp-F8h] BYREF
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+58h] [rbp-F0h] BYREF
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v31; // [rsp+68h] [rbp-E0h] BYREF
  std::_Ref_count_base *v32; // [rsp+70h] [rbp-D8h]
  __int64 v33; // [rsp+78h] [rbp-D0h] BYREF
  std::_Ref_count_base *v34; // [rsp+80h] [rbp-C8h]
  CApplication *v35; // [rsp+88h] [rbp-C0h]
  BOOL v36; // [rsp+90h] [rbp-B8h]
  unsigned int v37; // [rsp+94h] [rbp-B4h]
  _QWORD v38[5]; // [rsp+98h] [rbp-B0h] BYREF
  _BYTE v39[64]; // [rsp+C0h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+0h]

  v29 = a2;
  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v27 = v9;
  v11 = AudioSrvPolicyManagerTelemetryProvider::Provider(v10);
  if ( *(_DWORD *)v11 > 4u )
  {
    v26 = a4 == 0;
    v28 = a3;
    v30 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)v11,
      byte_1800568BC,
      v12,
      v13,
      (void **)&v30,
      (__int64)&v28,
      (__int64)&v26);
  }
  v26 = 0;
  v14 = 1;
  Application = CApplicationManager::GetApplication(
                  (CApplicationManager *)a1,
                  (const unsigned __int16 *)a2,
                  (__int64)a3,
                  a5,
                  &v28,
                  1,
                  &v26);
  v16 = Application;
  if ( Application < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBC1,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)Application);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v27);
    return v16;
  }
  EnterCriticalSection(v9);
  v30 = v9;
  v18 = v28;
  if ( a4 != 2
    || !*((_DWORD *)v28 + 52)
    || (unsigned int)CApplication::GetTotalActiveRenderStreamCount(v28)
    || !(unsigned int)CApplication::GetTotalActiveCaptureStreamCount(v18) )
  {
    v14 = 0;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v30);
  std::make_shared<std::wstring,unsigned short const * &>(&v31, (__int64 *)&v29);
  std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v33, &v31);
  v35 = a3;
  v36 = a4 == 0;
  v37 = a5;
  if ( v14 )
  {
    v19 = lambda_bc5d681da67d9384ebd56f302790ab0c_::_lambda_bc5d681da67d9384ebd56f302790ab0c_(v38, &v33);
    std::function_void___cdecl_void__::function_void___cdecl_void____lambda_bc5d681da67d9384ebd56f302790ab0c__0_(
      (__int64)v39,
      v19);
    v20 = CApplication::PostDelayedInteractivityNotification((const wchar_t **)v18, (__int64)v39);
    std::_Func_class<void,>::_Tidy((__int64)v39, v21);
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBD1,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v20);
      if ( v34 )
        std::_Ref_count_base::_Decref(v34);
      if ( v32 )
        std::_Ref_count_base::_Decref(v32);
LABEL_28:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v27);
      return (unsigned int)v20;
    }
  }
  else
  {
    v22 = CApplication::CleanupDelayedInteractivityNotification((const wchar_t **)v18);
    v20 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBD6,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v22);
      if ( v34 )
        std::_Ref_count_base::_Decref(v34);
      if ( v32 )
        std::_Ref_count_base::_Decref(v32);
      goto LABEL_28;
    }
    v23 = lambda_bc5d681da67d9384ebd56f302790ab0c_::_lambda_bc5d681da67d9384ebd56f302790ab0c_(v38, &v33);
    v24 = (__int64 *)std::function_void___cdecl_void__::function_void___cdecl_void____lambda_bc5d681da67d9384ebd56f302790ab0c__0_(
                       (__int64)v39,
                       v23);
    v25 = QueueGenericWorkItem(v24);
    v20 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBD9,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v25);
      if ( v34 )
        std::_Ref_count_base::_Decref(v34);
      if ( v32 )
        std::_Ref_count_base::_Decref(v32);
      goto LABEL_28;
    }
  }
  if ( v34 )
    std::_Ref_count_base::_Decref(v34);
  if ( v32 )
    std::_Ref_count_base::_Decref(v32);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v27);
  return 0LL;
}
