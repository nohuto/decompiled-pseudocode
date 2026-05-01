/*
 * XREFs of ?StopActivity@LauncherInvokeActivity@CommonStartTelemetry@@MEAAXXZ @ 0x180046970
 * Callers:
 *     <none>
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180046C44 (-zInternalStop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800C5AFC (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x1802DDDC0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1802DDDC0.c)
 */

void __fastcall CommonStartTelemetry::LauncherInvokeActivity::StopActivity(
        CommonStartTelemetry::LauncherInvokeActivity *this)
{
  int *v1; // rax
  int v3; // ecx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  _DWORD *v7; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v9; // r8
  int v10; // eax
  int *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  _DWORD *v14; // rcx
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // [rsp+A0h] [rbp-80h] BYREF
  DWORD v19; // [rsp+A4h] [rbp-7Ch] BYREF
  int v20; // [rsp+A8h] [rbp-78h] BYREF
  int v21; // [rsp+ACh] [rbp-74h] BYREF
  int v22; // [rsp+B0h] [rbp-70h] BYREF
  int v23; // [rsp+B4h] [rbp-6Ch] BYREF
  __int64 v24; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v25; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v26; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v27; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v28; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v29; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v30; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v31; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v32; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v33; // [rsp+100h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+110h] [rbp-10h] BYREF
  __int64 *v35; // [rsp+130h] [rbp+10h]
  int v36; // [rsp+138h] [rbp+18h]
  int v37; // [rsp+13Ch] [rbp+1Ch]
  int *v38; // [rsp+140h] [rbp+20h]
  int v39; // [rsp+148h] [rbp+28h]
  int v40; // [rsp+14Ch] [rbp+2Ch]
  DWORD *v41; // [rsp+150h] [rbp+30h]
  int v42; // [rsp+158h] [rbp+38h]
  int v43; // [rsp+15Ch] [rbp+3Ch]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 >= 0 || v3 != v1[22] || (v11 = v1 + 20, v1 == (int *)-80LL) )
  {
    wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v6 = wil::details::static_lazy<LauncherTelemetryLogging>::get(
           v4,
           _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_,
           v5);
    v7 = *(_DWORD **)(v6 + 8);
    if ( *v7 > 5u && (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v6 + 8), 0x400000000000LL) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v9 = *((_QWORD *)this + 6);
      v43 = 0;
      v40 = 0;
      v37 = 0;
      v19 = CurrentThreadId;
      v10 = *(_DWORD *)(v9 + 76);
      v24 = 0LL;
      v18 = v10;
      v41 = &v19;
      v38 = &v18;
      v35 = &v24;
      v42 = 4;
      v39 = 4;
      v36 = 8;
      tlgWriteTransfer_EventWriteTransfer((int)v7, (int)&dword_1806B4C4A, v9 + 8, 0, 5u, &v34);
    }
  }
  else
  {
    wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v14 = *(_DWORD **)(wil::details::static_lazy<LauncherTelemetryLogging>::get(
                         v12,
                         _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_,
                         v13)
                     + 8);
    if ( *v14 > 5u && (unsigned __int8)tlgKeywordOn(v14, 0x400000000000LL) )
    {
      v16 = *((_QWORD *)v11 + 15);
      v17 = *((_QWORD *)this + 6);
      v24 = 0LL;
      v25 = v16;
      v26 = *((_QWORD *)v11 + 14);
      v20 = v11[26];
      v27 = *((_QWORD *)v11 + 12);
      v28 = *((_QWORD *)v11 + 11);
      v21 = v11[20];
      v29 = *((_QWORD *)v11 + 9);
      v22 = v11[8];
      v30 = *((_QWORD *)v11 + 3);
      v23 = *v11;
      v31 = *((_QWORD *)v11 + 16);
      v18 = v11[16];
      v32 = *((_QWORD *)v11 + 7);
      v19 = v11[2];
      v33 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
        v15,
        (int)&dword_1806B4B1C,
        v17 + 8,
        (__int64)&v24,
        (__int64)&v33,
        (__int64)&v19,
        (__int64)&v32,
        (__int64)&v18,
        (__int64)&v31,
        (__int64)&v23,
        (__int64)&v30,
        (__int64)&v22,
        (__int64)&v29,
        (__int64)&v21,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v20,
        (__int64)&v26,
        (__int64)&v25);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CommonStartTelemetry::LauncherInvokeActivity *)((char *)this + 8));
}
