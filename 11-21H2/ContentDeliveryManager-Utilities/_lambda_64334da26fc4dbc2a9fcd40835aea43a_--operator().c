/*
 * XREFs of _lambda_64334da26fc4dbc2a9fcd40835aea43a_::operator() @ 0x18007EE70
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_64334da26fc4dbc2a9fcd40835aea43a__Windows::Internal::CNoResult_::Run @ 0x180080EF0 (Windows--Internal--COperationLambdaVar_0__lambda_64334da26fc4dbc2a9fcd40835aea43a__Windows--Inte.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180069F34 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ??1ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18007E3F4 (--1ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA.c)
 *     ??A?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x18007E6BC (--A-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@U-$less@V-$basic_stri.c)
 *     ?StartActivity@ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x180081F38 (-StartActivity@ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryM.c)
 *     ?Stop@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180082580 (-Stop@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
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
  unsigned int v11; // [rsp+20h] [rbp-1D8h]
  void *v12[2]; // [rsp+28h] [rbp-1D0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-1C0h]
  unsigned __int64 v14; // [rsp+40h] [rbp-1B8h]
  void *v15[2]; // [rsp+48h] [rbp-1B0h] BYREF
  __int64 v16; // [rsp+58h] [rbp-1A0h]
  unsigned __int64 v17; // [rsp+60h] [rbp-198h]
  void *v18[2]; // [rsp+68h] [rbp-190h] BYREF
  __int64 v19; // [rsp+78h] [rbp-180h]
  unsigned __int64 v20; // [rsp+80h] [rbp-178h]
  _QWORD v21[4]; // [rsp+90h] [rbp-168h] BYREF
  int v22; // [rsp+B0h] [rbp-148h]
  int *v23; // [rsp+B8h] [rbp-140h]
  int *v24; // [rsp+C0h] [rbp-138h]
  int v25; // [rsp+C8h] [rbp-130h] BYREF
  char v26; // [rsp+CCh] [rbp-12Ch]
  int v27; // [rsp+F0h] [rbp-108h] BYREF
  const char *v28; // [rsp+F8h] [rbp-100h]
  __int64 v29; // [rsp+100h] [rbp-F8h]
  char v30; // [rsp+108h] [rbp-F0h]
  __int64 v31; // [rsp+110h] [rbp-E8h]
  _BYTE v32[152]; // [rsp+118h] [rbp-E0h] BYREF
  __int64 v33; // [rsp+1B0h] [rbp-48h]
  __int128 v34; // [rsp+1B8h] [rbp-40h]
  __int64 v35; // [rsp+1C8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+0h]

  v1 = *a1;
  v2 = (__int64 *)(*a1 + 88LL);
  v20 = 7LL;
  v19 = 0LL;
  LOWORD(v18[0]) = 0;
  std::wstring::assign((unsigned __int64 *)v18, (char *)L"ctx.creativeId", aCtxCreativeid[0] != 0 ? 0xE : 0);
  v3 = std::map<std::wstring,std::wstring>::operator[](v2, v18);
  v4 = (const unsigned __int16 *)v3;
  if ( *(_QWORD *)(v3 + 24) >= 8uLL )
    v4 = *(const unsigned __int16 **)v3;
  v17 = 7LL;
  v16 = 0LL;
  LOWORD(v15[0]) = 0;
  std::wstring::assign((unsigned __int64 *)v15, (char *)L"ctx.placementId", aCtxPlacementid[0] != 0 ? 0xF : 0);
  v5 = std::map<std::wstring,std::wstring>::operator[](v2, v15);
  v6 = (const unsigned __int16 *)v5;
  if ( *(_QWORD *)(v5 + 24) >= 8uLL )
    v6 = *(const unsigned __int16 **)v5;
  v14 = 7LL;
  v13 = 0LL;
  LOWORD(v12[0]) = 0;
  std::wstring::assign((unsigned __int64 *)v12, (char *)L"ctx.action", aCtxAction[0] != 0 ? 0xA : 0);
  v7 = std::map<std::wstring,std::wstring>::operator[](v2, v12);
  v8 = (const unsigned __int16 *)v7;
  if ( *(_QWORD *)(v7 + 24) >= 8uLL )
    v8 = *(const unsigned __int16 **)v7;
  v21[1] = 0LL;
  v21[2] = v21;
  v21[3] = 0LL;
  v22 = 0;
  v23 = &v27;
  v24 = &v25;
  v25 = 0;
  v26 = 0;
  v30 = 0;
  v27 = 0;
  v28 = "ActionInvokedActivity";
  v29 = 0LL;
  v31 = 1LL;
  v33 = 0LL;
  memset_0(v32, 0, sizeof(v32));
  v34 = 0LL;
  v35 = 0LL;
  v21[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity::StartActivity(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity *)v21,
    v8,
    v6,
    v4);
  if ( v14 >= 8 )
    operator delete(v12[0]);
  v14 = 7LL;
  v13 = 0LL;
  LOWORD(v12[0]) = 0;
  if ( v17 >= 8 )
    operator delete(v15[0]);
  v17 = 7LL;
  v16 = 0LL;
  LOWORD(v15[0]) = 0;
  if ( v20 >= 8 )
    operator delete(v18[0]);
  try
  {
    v20 = 7LL;
    v19 = 0LL;
    LOWORD(v18[0]) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 72) + 8LL))(*(_QWORD *)(v1 + 72));
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(v21);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity::~ActionInvokedActivity((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity *)v21);
    result = 0LL;
  }
  catch ( ... )
  {
    v11 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x69,
            (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
            v9);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity::~ActionInvokedActivity((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity *)v21);
    return v11;
  }
  return result;
}
