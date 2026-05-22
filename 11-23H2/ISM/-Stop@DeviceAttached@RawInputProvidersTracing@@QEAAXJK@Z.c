/*
 * XREFs of ?Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z @ 0x1800DC110
 * Callers:
 *     wil::details::lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___::_lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___ @ 0x1800D7A24 (wil--details--lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___--_lambda_call__lambda_aa67.c)
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x1800D8638 (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800D4994 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645644@Z @ 0x1800D6A34 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1800D6A34.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800DC688 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalStop@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800DCD00 (-zInternalStop@-$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflector.c)
 */

void __fastcall RawInputProvidersTracing::DeviceAttached::Stop(
        RawInputProvidersTracing::DeviceAttached *this,
        int a2,
        int a3)
{
  __int64 v3; // rax
  int v7; // ecx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rsi
  DWORD CurrentThreadId; // eax
  __int64 v16; // r8
  int v17; // eax
  int v18; // [rsp+B0h] [rbp-80h] BYREF
  DWORD v19; // [rsp+B4h] [rbp-7Ch] BYREF
  int v20; // [rsp+B8h] [rbp-78h] BYREF
  int v21; // [rsp+BCh] [rbp-74h] BYREF
  int v22; // [rsp+C0h] [rbp-70h] BYREF
  int v23; // [rsp+C4h] [rbp-6Ch] BYREF
  int v24; // [rsp+C8h] [rbp-68h] BYREF
  int v25; // [rsp+CCh] [rbp-64h] BYREF
  __int64 v26; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v29; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v30; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v31; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v32; // [rsp+100h] [rbp-30h] BYREF
  __int64 v33; // [rsp+108h] [rbp-28h] BYREF
  __int64 v34; // [rsp+110h] [rbp-20h] BYREF
  __int64 v35; // [rsp+118h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+120h] [rbp-10h] BYREF
  __int64 *v37; // [rsp+140h] [rbp+10h]
  int v38; // [rsp+148h] [rbp+18h]
  int v39; // [rsp+14Ch] [rbp+1Ch]
  int *v40; // [rsp+150h] [rbp+20h]
  int v41; // [rsp+158h] [rbp+28h]
  int v42; // [rsp+15Ch] [rbp+2Ch]
  DWORD *v43; // [rsp+160h] [rbp+30h]
  int v44; // [rsp+168h] [rbp+38h]
  int v45; // [rsp+16Ch] [rbp+3Ch]
  int *v46; // [rsp+170h] [rbp+40h]
  int v47; // [rsp+178h] [rbp+48h]
  int v48; // [rsp+17Ch] [rbp+4Ch]
  int *v49; // [rsp+180h] [rbp+50h]
  int v50; // [rsp+188h] [rbp+58h]
  int v51; // [rsp+18Ch] [rbp+5Ch]

  v3 = *((_QWORD *)this + 6);
  v7 = *(_DWORD *)(v3 + 76);
  if ( v7 >= 0 || v7 != *(_DWORD *)(v3 + 88) || (v8 = v3 + 80, v3 == -80) )
  {
    wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v14 = wil::details::static_lazy<RawInputProvidersTracing>::get(
            v13,
            (void (__cdecl *)())_lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v14 > 4u
      && (*(_QWORD *)(v14 + 16) & 0x400000000000LL) != 0
      && (*(_QWORD *)(v14 + 24) & 0x400000000000LL) == *(_QWORD *)(v14 + 24) )
    {
      v21 = a3;
      v20 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v16 = *((_QWORD *)this + 6);
      v51 = 0;
      v48 = 0;
      v45 = 0;
      v42 = 0;
      v39 = 0;
      v19 = CurrentThreadId;
      v17 = *(_DWORD *)(v16 + 76);
      v26 = 0LL;
      v18 = v17;
      v49 = &v21;
      v46 = &v20;
      v43 = &v19;
      v40 = &v18;
      v37 = &v26;
      v50 = 4;
      v47 = 4;
      v44 = 4;
      v41 = 4;
      v38 = 8;
      tlgWriteTransfer_EventWriteTransfer(
        v14,
        (unsigned __int8 *)dword_180223E1F,
        (const GUID *)(v16 + 8),
        0LL,
        7u,
        &v36);
    }
  }
  else
  {
    wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v10 = wil::details::static_lazy<RawInputProvidersTracing>::get(
            v9,
            (void (__cdecl *)())_lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v10 > 4u
      && (*(_QWORD *)(v10 + 16) & 0x400000000000LL) != 0
      && (*(_QWORD *)(v10 + 24) & 0x400000000000LL) == *(_QWORD *)(v10 + 24) )
    {
      v27 = *(_QWORD *)(v8 + 120);
      v11 = *((_QWORD *)this + 6);
      v28 = *(_QWORD *)(v8 + 112);
      v12 = *(_DWORD *)(v8 + 104);
      v26 = 0LL;
      v24 = v12;
      v29 = *(_QWORD *)(v8 + 96);
      v30 = *(_QWORD *)(v8 + 88);
      v25 = *(_DWORD *)(v8 + 80);
      v31 = *(_QWORD *)(v8 + 72);
      v18 = *(_DWORD *)(v8 + 32);
      v32 = *(_QWORD *)(v8 + 24);
      v19 = *(_DWORD *)v8;
      v33 = *(_QWORD *)(v8 + 128);
      v20 = *(_DWORD *)(v8 + 64);
      v34 = *(_QWORD *)(v8 + 56);
      v21 = *(_DWORD *)(v8 + 8);
      v22 = a3;
      v23 = a2;
      v35 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v10,
        (unsigned __int8 *)dword_180223C96,
        (const GUID *)(v11 + 8),
        v10,
        (__int64)&v26,
        (__int64)&v35,
        (__int64)&v21,
        (const unsigned __int16 **)&v34,
        (__int64)&v20,
        (const unsigned __int16 **)&v33,
        (__int64)&v19,
        (const WCHAR **)&v32,
        (__int64)&v18,
        (const unsigned __int16 **)&v31,
        (__int64)&v25,
        (const unsigned __int16 **)&v30,
        (const WCHAR **)&v29,
        (__int64)&v24,
        (const unsigned __int16 **)&v28,
        (const WCHAR **)&v27,
        (__int64)&v23,
        (__int64)&v22);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((RawInputProvidersTracing::DeviceAttached *)((char *)this + 8));
}
