/*
 * XREFs of ?StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@@Z @ 0x1805BF870
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1805B8FC4 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AD744 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180110484 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U2@U2@U2@U2@U2@U2@U2@U2@U3@U2@U2@U2@U2@U3@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444AEBU?$_tlgWrapSz@G@@44445444444445444454444@Z @ 0x1805B7DD8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U-$_tlgWrapSz@G@@U2@U2@U2.c)
 *     ?GetAppLayoutOperationData@TabletModeTraceLogging@@CAJPEAUIAppLayoutOperation@@PEAUAppLayoutOperationData@1@@Z @ 0x1805BBE5C (-GetAppLayoutOperationData@TabletModeTraceLogging@@CAJPEAUIAppLayoutOperation@@PEAUAppLayoutOper.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabletModeTraceLogging::ApplyLayoutOperationHelper::StartActivity(
        TabletModeTraceLogging::ApplyLayoutOperationHelper *this,
        struct IAppLayoutOperation *a2)
{
  int AppLayoutOperationData; // eax
  __int64 v4; // rcx
  _DWORD *v5; // rdi
  const GUID *v6; // rax
  int v7; // [rsp+110h] [rbp-80h] BYREF
  int v8; // [rsp+114h] [rbp-7Ch] BYREF
  int v9; // [rsp+118h] [rbp-78h] BYREF
  int v10; // [rsp+11Ch] [rbp-74h] BYREF
  int v11; // [rsp+120h] [rbp-70h] BYREF
  int v12; // [rsp+124h] [rbp-6Ch] BYREF
  int v13; // [rsp+128h] [rbp-68h] BYREF
  int v14; // [rsp+12Ch] [rbp-64h] BYREF
  int v15; // [rsp+130h] [rbp-60h] BYREF
  int v16; // [rsp+134h] [rbp-5Ch] BYREF
  int v17; // [rsp+138h] [rbp-58h] BYREF
  int v18; // [rsp+13Ch] [rbp-54h] BYREF
  int v19; // [rsp+140h] [rbp-50h] BYREF
  int v20; // [rsp+144h] [rbp-4Ch] BYREF
  int v21; // [rsp+148h] [rbp-48h] BYREF
  int v22; // [rsp+14Ch] [rbp-44h] BYREF
  int v23; // [rsp+150h] [rbp-40h] BYREF
  int v24; // [rsp+154h] [rbp-3Ch] BYREF
  int v25; // [rsp+158h] [rbp-38h] BYREF
  int v26; // [rsp+15Ch] [rbp-34h] BYREF
  int v27; // [rsp+160h] [rbp-30h] BYREF
  int v28; // [rsp+164h] [rbp-2Ch] BYREF
  int v29; // [rsp+168h] [rbp-28h] BYREF
  int v30; // [rsp+16Ch] [rbp-24h] BYREF
  DWORD CurrentThreadId; // [rsp+170h] [rbp-20h] BYREF
  __int64 v32; // [rsp+178h] [rbp-18h] BYREF
  __int64 v33; // [rsp+180h] [rbp-10h] BYREF
  __int64 v34; // [rsp+188h] [rbp-8h] BYREF
  __int64 v35; // [rsp+190h] [rbp+0h] BYREF
  __int64 v36; // [rsp+198h] [rbp+8h] BYREF
  _DWORD v37[10]; // [rsp+1A0h] [rbp+10h] BYREF
  __int64 v38; // [rsp+1C8h] [rbp+38h] BYREF
  __int128 v39; // [rsp+1D0h] [rbp+40h]
  __int64 v40; // [rsp+1E0h] [rbp+50h]
  __int64 v41; // [rsp+1E8h] [rbp+58h]
  __int128 v42; // [rsp+1F0h] [rbp+60h] BYREF
  __int64 v43; // [rsp+200h] [rbp+70h]
  __int64 v44; // [rsp+208h] [rbp+78h]
  __int64 v45; // [rsp+210h] [rbp+80h]
  int v46; // [rsp+218h] [rbp+88h]
  int v47; // [rsp+21Ch] [rbp+8Ch]
  int v48; // [rsp+220h] [rbp+90h]
  int v49; // [rsp+224h] [rbp+94h]
  __int128 v50; // [rsp+240h] [rbp+B0h] BYREF
  __int64 v51; // [rsp+250h] [rbp+C0h]
  __int64 v52; // [rsp+258h] [rbp+C8h]
  __int64 v53; // [rsp+260h] [rbp+D0h]
  __int64 v54; // [rsp+268h] [rbp+D8h] BYREF
  __int128 v55; // [rsp+270h] [rbp+E0h]
  __int64 v56; // [rsp+280h] [rbp+F0h]
  __int64 v57; // [rsp+288h] [rbp+F8h]
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+128h]

  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  AppLayoutOperationData = TabletModeTraceLogging::GetAppLayoutOperationData(
                             a2,
                             (struct TabletModeTraceLogging::AppLayoutOperationData *)v37);
  if ( AppLayoutOperationData >= 0 )
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
    v5 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                     v4,
                     (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
    if ( *v5 > 5u )
    {
      v7 = HIDWORD(v57);
      v8 = v57;
      v9 = HIDWORD(v56);
      v10 = v56;
      v32 = v54;
      v11 = HIDWORD(v53);
      v12 = v53;
      v13 = HIDWORD(v52);
      v14 = v52;
      v33 = v50;
      v15 = v49;
      v16 = v48;
      v17 = v47;
      v18 = v46;
      v19 = HIDWORD(v45);
      v20 = v45;
      v21 = HIDWORD(v44);
      v22 = v44;
      v34 = v42;
      v23 = HIDWORD(v41);
      v24 = v41;
      v25 = HIDWORD(v40);
      v26 = v40;
      v35 = v38;
      v27 = v37[3];
      v28 = v37[2];
      v29 = v37[1];
      v30 = v37[0];
      CurrentThreadId = GetCurrentThreadId();
      v36 = 0LL;
      v6 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v5,
        (unsigned __int8 *)dword_18086A7AB,
        (const GUID *)(*((_QWORD *)this + 6) + 8LL),
        v6,
        (__int64)&v36,
        (__int64)&CurrentThreadId,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27,
        (const WCHAR **)&v35,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (const WCHAR **)&v34,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (const WCHAR **)&v33,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (const WCHAR **)&v32,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v7);
    }
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD8,
      (int)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
      (const char *)(unsigned int)AppLayoutOperationData);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v54);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v50);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v42);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v38);
}
