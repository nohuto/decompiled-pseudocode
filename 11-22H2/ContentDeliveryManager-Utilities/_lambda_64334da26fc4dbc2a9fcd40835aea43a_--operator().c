/*
 * XREFs of _lambda_64334da26fc4dbc2a9fcd40835aea43a_::operator() @ 0x1800751F0
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_64334da26fc4dbc2a9fcd40835aea43a__Windows::Internal::CNoResult_::Run @ 0x1800767A0 (Windows--Internal--COperationLambdaVar_0__lambda_64334da26fc4dbc2a9fcd40835aea43a__Windows--Inte.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x180051928 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x1800627B4 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??0?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180073728 (--0-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAA.c)
 *     ??1ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x180074CD0 (--1ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA.c)
 *     ??A?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x180074DB8 (--A-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@U-$less@V-$basic_stri.c)
 *     ?StartActivity@ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x1800771E4 (-StartActivity@ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryM.c)
 *     ?Stop@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800776F4 (-Stop@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_64334da26fc4dbc2a9fcd40835aea43a_::operator()(_QWORD *a1)
{
  __int64 v1; // r14
  __int64 *v2; // rbx
  __int64 v3; // rax
  const unsigned __int16 *v4; // rsi
  __int64 v5; // rax
  const unsigned __int16 *v6; // rdi
  __int64 v7; // rax
  const unsigned __int16 *v8; // rbx
  const char *v9; // r9
  __int64 result; // rax
  unsigned int v11; // [rsp+20h] [rbp-1C8h]
  wchar_t v12[16]; // [rsp+28h] [rbp-1C0h] BYREF
  wchar_t v13[16]; // [rsp+48h] [rbp-1A0h] BYREF
  wchar_t v14[20]; // [rsp+68h] [rbp-180h] BYREF
  _QWORD v15[40]; // [rsp+90h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+0h]

  v1 = *a1;
  v2 = (__int64 *)(*a1 + 88LL);
  std::wstring::wstring((__int64)v14);
  v3 = std::map<std::wstring,std::wstring>::operator[](v2, v14);
  v4 = (const unsigned __int16 *)v3;
  if ( *(_QWORD *)(v3 + 24) >= 8uLL )
    v4 = *(const unsigned __int16 **)v3;
  std::wstring::wstring((__int64)v13);
  v5 = std::map<std::wstring,std::wstring>::operator[](v2, v13);
  v6 = (const unsigned __int16 *)v5;
  if ( *(_QWORD *)(v5 + 24) >= 8uLL )
    v6 = *(const unsigned __int16 **)v5;
  std::wstring::wstring((__int64)v12);
  v7 = std::map<std::wstring,std::wstring>::operator[](v2, v12);
  v8 = (const unsigned __int16 *)v7;
  if ( *(_QWORD *)(v7 + 24) >= 8uLL )
    v8 = *(const unsigned __int16 **)v7;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v15);
  v15[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity::StartActivity(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity *)v15,
    v8,
    v6,
    v4);
  std::wstring::_Tidy(v12, 1, 0LL);
  std::wstring::_Tidy(v13, 1, 0LL);
  std::wstring::_Tidy(v14, 1, 0LL);
  try
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 72) + 8LL))(*(_QWORD *)(v1 + 72));
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(v15);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity::~ActionInvokedActivity((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity *)v15);
    result = 0LL;
  }
  catch ( ... )
  {
    v11 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x69,
            (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
            v9);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity::~ActionInvokedActivity((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity *)v15);
    return v11;
  }
  return result;
}
