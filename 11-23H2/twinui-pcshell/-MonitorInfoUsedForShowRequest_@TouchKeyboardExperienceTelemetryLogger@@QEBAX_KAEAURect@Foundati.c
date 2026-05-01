/*
 * XREFs of ?MonitorInfoUsedForShowRequest_@TouchKeyboardExperienceTelemetryLogger@@QEBAX_KAEAURect@Foundation@Windows@@I01I01I_N2@Z @ 0x1805340F0
 * Callers:
 *     ??$MonitorInfoUsedForShowRequest@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_KAEAU123@AEAW44@_KAEAU123@AEAW44@AEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@012012AEA_N3@Z @ 0x180530FC8 (--$MonitorInfoUsedForShowRequest@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_KAEAU.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U1@U2@U2@U2@U2@U2@U1@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4444344444344444AEBU?$_tlgWrapperByVal@$00@@5@Z @ 0x18000259C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U1@U2@U2@U2@U2@U2@U1@U.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::MonitorInfoUsedForShowRequest_(
        TouchKeyboardExperienceTelemetryLogger *this,
        __int64 a2,
        struct Windows::Foundation::Rect *a3,
        int a4,
        unsigned __int64 a5,
        struct Windows::Foundation::Rect *a6,
        unsigned int a7,
        unsigned __int64 a8,
        struct Windows::Foundation::Rect *a9,
        unsigned int a10,
        bool a11,
        bool a12)
{
  __int64 v15; // r8
  __int64 v16; // r9
  _DWORD *v17; // r10
  bool v18[4]; // [rsp+D8h] [rbp-80h] BYREF
  unsigned int v19; // [rsp+DCh] [rbp-7Ch] BYREF
  int v20; // [rsp+E0h] [rbp-78h] BYREF
  int v21; // [rsp+E4h] [rbp-74h] BYREF
  int v22; // [rsp+E8h] [rbp-70h] BYREF
  int v23; // [rsp+ECh] [rbp-6Ch] BYREF
  unsigned int v24; // [rsp+F0h] [rbp-68h] BYREF
  int v25; // [rsp+F4h] [rbp-64h] BYREF
  int v26; // [rsp+F8h] [rbp-60h] BYREF
  int v27; // [rsp+FCh] [rbp-5Ch] BYREF
  int v28; // [rsp+100h] [rbp-58h] BYREF
  int v29; // [rsp+104h] [rbp-54h] BYREF
  int v30; // [rsp+108h] [rbp-50h] BYREF
  int v31; // [rsp+10Ch] [rbp-4Ch] BYREF
  int v32; // [rsp+110h] [rbp-48h] BYREF
  int v33; // [rsp+114h] [rbp-44h] BYREF
  unsigned __int64 v34; // [rsp+118h] [rbp-40h] BYREF
  unsigned __int64 v35; // [rsp+120h] [rbp-38h] BYREF
  __int64 v36; // [rsp+128h] [rbp-30h] BYREF
  __int64 v37; // [rsp+130h] [rbp-28h] BYREF
  TouchKeyboardExperienceTelemetryLogger *v38; // [rsp+148h] [rbp-10h] BYREF

  v38 = this;
  v17 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                    (__int64)this,
                    _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
  if ( *v17 > 5u )
  {
    LOBYTE(v38) = a12;
    v18[0] = a11;
    v19 = a10;
    v20 = *((_DWORD *)a9 + 3);
    v21 = *((_DWORD *)a9 + 2);
    v22 = *((_DWORD *)a9 + 1);
    v23 = *(_DWORD *)a9;
    v34 = a8;
    v24 = a7;
    v25 = *((_DWORD *)a6 + 3);
    v26 = *((_DWORD *)a6 + 2);
    v27 = *((_DWORD *)a6 + 1);
    v28 = *(_DWORD *)a6;
    v35 = a5;
    v30 = *((_DWORD *)a3 + 3);
    v31 = *((_DWORD *)a3 + 2);
    v32 = *((_DWORD *)a3 + 1);
    v33 = *(_DWORD *)a3;
    v29 = a4;
    v36 = a2;
    v37 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      (int)v17,
      (int)&unk_180864FFE,
      v15,
      v16,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v35,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v34,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)v18,
      (__int64)&v38);
  }
}
