/*
 * XREFs of ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x18005E218
 * Callers:
 *     _lambda_46d3d49e2bbb772acd3c21ebc08e3e79_::operator() @ 0x180285AE4 (_lambda_46d3d49e2bbb772acd3c21ebc08e3e79_--operator().c)
 *     _lambda_6914baa2bbb41478f35591fe55a15932_::operator() @ 0x1807472B8 (_lambda_6914baa2bbb41478f35591fe55a15932_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@5@Z @ 0x18005E324 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@U3@@-$_tlgWriteTe.c)
 *     ?zInternalStop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800B5054 (-zInternalStop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800B980C (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645666@Z @ 0x180746E24 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180746E24.c)
 */

void __fastcall SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Stop(
        SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  int *v3; // rax
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rax
  _DWORD *v10; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v12; // r8
  int *v13; // rdi
  __int64 v14; // rcx
  _DWORD *v15; // rcx
  int v16; // ecx
  __int64 v17; // r8
  int v18; // [rsp+B0h] [rbp-80h] BYREF
  int v19; // [rsp+B4h] [rbp-7Ch] BYREF
  int v20; // [rsp+B8h] [rbp-78h] BYREF
  int v21; // [rsp+BCh] [rbp-74h] BYREF
  __int64 v22; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v23; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v24; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v29; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v30; // [rsp+100h] [rbp-30h] BYREF
  __int64 v31; // [rsp+108h] [rbp-28h] BYREF
  __int64 v32; // [rsp+110h] [rbp-20h] BYREF
  __int64 v33; // [rsp+118h] [rbp-18h] BYREF
  __int64 v34; // [rsp+140h] [rbp+10h] BYREF
  __int64 v35; // [rsp+158h] [rbp+28h] BYREF

  v3 = (int *)*((_QWORD *)this + 6);
  v7 = v3[19];
  if ( v7 >= 0 || v7 != v3[22] || (v13 = v3 + 20, v3 == (int *)-80LL) )
  {
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v9 = wil::details::static_lazy<SingleViewExperienceLogging>::get(
           v8,
           _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    v10 = *(_DWORD **)(v9 + 8);
    if ( *v10 > 5u && (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v9 + 8), 0x200000000000LL) )
    {
      v24 = (__int64)a3;
      v23 = (__int64)a2;
      CurrentThreadId = GetCurrentThreadId();
      v12 = *((_QWORD *)this + 6);
      LODWORD(v34) = CurrentThreadId;
      LODWORD(v35) = *(_DWORD *)(v12 + 76);
      v22 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        (int)v10,
        (int)&dword_18087E3B0,
        v12 + 8,
        (__int64)&v22,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v23,
        (__int64)&v24);
    }
  }
  else
  {
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v15 = *(_DWORD **)(wil::details::static_lazy<SingleViewExperienceLogging>::get(
                         v14,
                         _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)
                     + 8);
    if ( *v15 > 5u && (unsigned __int8)tlgKeywordOn(v15, 0x200000000000LL) )
    {
      v27 = *((_QWORD *)v13 + 15);
      v28 = *((_QWORD *)v13 + 14);
      v17 = *((_QWORD *)this + 6);
      LODWORD(v34) = v13[26];
      v29 = *((_QWORD *)v13 + 12);
      v30 = *((_QWORD *)v13 + 11);
      LODWORD(v35) = v13[20];
      v31 = *((_QWORD *)v13 + 9);
      v18 = v13[8];
      v32 = *((_QWORD *)v13 + 3);
      v19 = *v13;
      v33 = *((_QWORD *)v13 + 16);
      v20 = v13[16];
      v22 = *((_QWORD *)v13 + 7);
      v21 = v13[2];
      v23 = 0x1000000LL;
      v24 = 0x1000000LL;
      v25 = (__int64)a3;
      v26 = (__int64)a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v16,
        (int)&dword_18087E125,
        v17 + 8,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v21,
        (__int64)&v22,
        (__int64)&v20,
        (__int64)&v33,
        (__int64)&v19,
        (__int64)&v32,
        (__int64)&v18,
        (__int64)&v31,
        (__int64)&v35,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v34,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(this);
}
