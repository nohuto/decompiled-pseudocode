/*
 * XREFs of ?Stop@ActivateApplicationInContainer@AAMTraceProvider@@QEAAXU_GUID@@J@Z @ 0x1806326C8
 * Callers:
 *     ?ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4ActivationKind@Activation@ApplicationModel@Windows@@EURect@Foundation@7@H@Z @ 0x18062F770 (-ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4A.c)
 * Callees:
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800ADBAC (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802D0BB0 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U?$_tlgWrapperByRef@$0BA@@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445AEBU?$_tlgWrapperByRef@$0BA@@@4@Z @ 0x18062DFC4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18062DFC4.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@4@Z @ 0x18062E320 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByRef@$0BA@@@U2@@-$_.c)
 *     ?get@?$static_lazy@VAAMTraceProvider@@@details@wil@@QEAAPEAVAAMTraceProvider@@P6AXXZ@Z @ 0x180633730 (-get@-$static_lazy@VAAMTraceProvider@@@details@wil@@QEAAPEAVAAMTraceProvider@@P6AXXZ@Z.c)
 */

void __fastcall AAMTraceProvider::ActivateApplicationInContainer::Stop(
        AAMTraceProvider::ActivateApplicationInContainer *this,
        struct _GUID *a2,
        int a3)
{
  int *v3; // rax
  int v7; // ecx
  int *v8; // rdi
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  _DWORD *v15; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // r9
  int v20; // [rsp+D0h] [rbp-80h] BYREF
  DWORD v21; // [rsp+D4h] [rbp-7Ch] BYREF
  int v22; // [rsp+D8h] [rbp-78h] BYREF
  int v23; // [rsp+DCh] [rbp-74h] BYREF
  int v24; // [rsp+E0h] [rbp-70h] BYREF
  int v25; // [rsp+E4h] [rbp-6Ch] BYREF
  int v26; // [rsp+E8h] [rbp-68h] BYREF
  int v27; // [rsp+ECh] [rbp-64h] BYREF
  int v28; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v29; // [rsp+F8h] [rbp-58h] BYREF
  __int64 v30; // [rsp+100h] [rbp-50h] BYREF
  __int64 v31; // [rsp+108h] [rbp-48h] BYREF
  __int64 v32; // [rsp+110h] [rbp-40h] BYREF
  __int64 v33; // [rsp+118h] [rbp-38h] BYREF
  __int64 v34; // [rsp+120h] [rbp-30h] BYREF
  __int64 v35; // [rsp+128h] [rbp-28h] BYREF
  __int64 v36; // [rsp+130h] [rbp-20h] BYREF
  __int64 v37; // [rsp+138h] [rbp-18h] BYREF
  __int64 v38; // [rsp+140h] [rbp-10h] BYREF
  __int64 v39; // [rsp+148h] [rbp-8h] BYREF
  __int64 v40; // [rsp+150h] [rbp+0h] BYREF

  v3 = (int *)*((_QWORD *)this + 6);
  v7 = v3[19];
  if ( v7 >= 0 || v7 != v3[22] || (v8 = v3 + 20, v3 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v15 = *(_DWORD **)(wil::details::static_lazy<AAMTraceProvider>::get(
                         v14,
                         _lambda_7e8ef9e9b596109f338594047241dcdf_::_lambda_invoker_cdecl_)
                     + 8);
    if ( *v15 > 5u )
    {
      v22 = a3;
      v30 = (__int64)a2;
      CurrentThreadId = GetCurrentThreadId();
      v17 = *((_QWORD *)this + 6);
      v21 = CurrentThreadId;
      v18 = *(_DWORD *)(v17 + 76);
      v29 = 0LL;
      v20 = v18;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        (__int64)v15,
        byte_18086FBDA,
        (const GUID *)(v17 + 8),
        v19,
        (__int64)&v29,
        (__int64)&v20,
        (__int64)&v21,
        &v30,
        (__int64)&v22);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v10 = *(_DWORD **)(wil::details::static_lazy<AAMTraceProvider>::get(
                         v9,
                         _lambda_7e8ef9e9b596109f338594047241dcdf_::_lambda_invoker_cdecl_)
                     + 8);
    if ( *v10 > 5u )
    {
      v32 = *((_QWORD *)v8 + 6);
      v24 = v8[17];
      v25 = v8[4];
      v33 = *((_QWORD *)v8 + 15);
      v34 = *((_QWORD *)v8 + 14);
      v26 = v8[26];
      v35 = *((_QWORD *)v8 + 12);
      v12 = *((_QWORD *)v8 + 11);
      v30 = 0LL;
      v13 = *((_QWORD *)this + 6);
      v36 = v12;
      v27 = v8[20];
      v37 = *((_QWORD *)v8 + 9);
      v28 = v8[8];
      v38 = *((_QWORD *)v8 + 3);
      v20 = *v8;
      v39 = *((_QWORD *)v8 + 16);
      v21 = v8[16];
      v40 = *((_QWORD *)v8 + 7);
      v22 = v8[2];
      v23 = a3;
      v31 = (__int64)a2;
      v29 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        (__int64)v10,
        (unsigned __int8 *)dword_18087041F,
        (const GUID *)(v13 + 8),
        v11,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v22,
        (const wchar_t **)&v40,
        (__int64)&v21,
        (const wchar_t **)&v39,
        (__int64)&v20,
        (const WCHAR **)&v38,
        (__int64)&v28,
        (const wchar_t **)&v37,
        (__int64)&v27,
        (const wchar_t **)&v36,
        (const WCHAR **)&v35,
        (__int64)&v26,
        (const wchar_t **)&v34,
        (const WCHAR **)&v33,
        (__int64)&v25,
        (__int64)&v24,
        (const wchar_t **)&v32,
        &v31,
        (__int64)&v23);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
