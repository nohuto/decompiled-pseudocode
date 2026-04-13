/*
 * XREFs of _lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca_::operator() @ 0x18007F4B8
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca__Windows::Internal::CNoResult_::Run @ 0x180080F70 (Windows--Internal--COperationLambdaVar_0__lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca___ea_180080F70.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180069F34 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18006E01C (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAA.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006F960 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0C.c)
 *     ??A?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x18007E6BC (--A-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@U-$less@V-$basic_stri.c)
 *     ?StartActivity@ActionRevertedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x1800820BC (-StartActivity@ActionRevertedActivity@ContentDeliveryManagerTelemetry@Background@ContentDelivery.c)
 *     ?Stop@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180082428 (-Stop@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca_::operator()(_QWORD *a1)
{
  __int64 v1; // r15
  __int64 *v2; // rbx
  __int64 v3; // rax
  const unsigned __int16 *v4; // r14
  __int64 v5; // rax
  const unsigned __int16 *v6; // rsi
  __int64 v7; // rax
  const unsigned __int16 *v8; // rdi
  const char *v9; // r9
  __int64 result; // rax
  unsigned int v11; // [rsp+20h] [rbp-1E8h]
  void *v12[2]; // [rsp+28h] [rbp-1E0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-1D0h]
  unsigned __int64 v14; // [rsp+40h] [rbp-1C8h]
  void *v15[2]; // [rsp+48h] [rbp-1C0h] BYREF
  __int64 v16; // [rsp+58h] [rbp-1B0h]
  unsigned __int64 v17; // [rsp+60h] [rbp-1A8h]
  void *v18[2]; // [rsp+68h] [rbp-1A0h] BYREF
  __int64 v19; // [rsp+78h] [rbp-190h]
  unsigned __int64 v20; // [rsp+80h] [rbp-188h]
  _QWORD v21[4]; // [rsp+90h] [rbp-178h] BYREF
  int v22; // [rsp+B0h] [rbp-158h]
  int *v23; // [rsp+B8h] [rbp-150h]
  int *v24; // [rsp+C0h] [rbp-148h]
  int v25; // [rsp+C8h] [rbp-140h] BYREF
  char v26; // [rsp+CCh] [rbp-13Ch]
  int v27; // [rsp+F0h] [rbp-118h] BYREF
  const char *v28; // [rsp+F8h] [rbp-110h]
  __int64 v29; // [rsp+100h] [rbp-108h]
  char v30; // [rsp+108h] [rbp-100h]
  __int64 v31; // [rsp+110h] [rbp-F8h]
  _BYTE v32[152]; // [rsp+118h] [rbp-F0h] BYREF
  __int64 v33; // [rsp+1B0h] [rbp-58h]
  __int128 v34; // [rsp+1B8h] [rbp-50h]
  __int64 v35; // [rsp+1C8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+0h]

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
  v28 = "ActionRevertedActivity";
  v29 = 0LL;
  v31 = 1LL;
  v33 = 0LL;
  memset_0(v32, 0, sizeof(v32));
  v34 = 0LL;
  v35 = 0LL;
  v21[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionRevertedActivity::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionRevertedActivity::StartActivity(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionRevertedActivity *)v21,
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
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 72) + 16LL))(*(_QWORD *)(v1 + 72));
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v21);
    v21[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionRevertedActivity::`vftable';
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(v21);
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)v21);
    result = 0LL;
  }
  catch ( ... )
  {
    v11 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x80,
            (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
            v9);
    v21[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionRevertedActivity::`vftable';
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(v21);
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)v21);
    return v11;
  }
  return result;
}
