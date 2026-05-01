/*
 * XREFs of ?HostInvokedMethod_@TouchKeyboardTelemetry@@QEAAXPEBG0AEAURect@Foundation@Windows@@10U_GUID@@_N33333333033H3@Z @ 0x180481FAC
 * Callers:
 *     ??$HostInvokedMethod@AEAPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEAU123@AEAY07$$CBGAEBU_GUID@@_N_N_N_NAEB_NAEB_NAEA_NAEA_NAEA_NPEBG_NAEA_NHAEA_N@TouchKeyboardTelemetry@@SAXAEAPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@21AEBU_GUID@@$$QEA_N444AEB_N5AEA_N66$$QEAPEBG46$$QEAH6@Z @ 0x18047F5F0 (--$HostInvokedMethod@AEAPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEAU123@AEAY07$$CBGAEBU_GUID.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U1@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U4@U4@U4@U4@U4@U4@U4@U4@U1@U4@U4@U2@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@44444443AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@6666666636646@Z @ 0x18047F910 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U1@U-$_tlgWrapperByRe.c)
 *     ?get@?$static_lazy@VTouchKeyboardTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardTraceLogging@@P6AXXZ@Z @ 0x180484038 (-get@-$static_lazy@VTouchKeyboardTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardTraceLogging@@.c)
 */

void __fastcall TouchKeyboardTelemetry::HostInvokedMethod_(
        TouchKeyboardTelemetry *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        struct Windows::Foundation::Rect *a4,
        struct Windows::Foundation::Rect *a5,
        const unsigned __int16 *a6,
        struct _GUID *a7,
        bool a8,
        bool a9,
        bool a10,
        bool a11,
        bool a12,
        bool a13,
        bool a14,
        bool a15,
        bool a16,
        const unsigned __int16 *a17,
        bool a18,
        bool a19,
        int a20,
        bool a21)
{
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r10
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm1_4
  bool v32; // [rsp+F8h] [rbp-80h] BYREF
  bool v33; // [rsp+F9h] [rbp-7Fh] BYREF
  bool v34; // [rsp+FAh] [rbp-7Eh] BYREF
  bool v35; // [rsp+FBh] [rbp-7Dh] BYREF
  bool v36; // [rsp+FCh] [rbp-7Ch] BYREF
  bool v37; // [rsp+FDh] [rbp-7Bh] BYREF
  bool v38; // [rsp+FEh] [rbp-7Ah] BYREF
  bool v39; // [rsp+FFh] [rbp-79h] BYREF
  bool v40; // [rsp+100h] [rbp-78h] BYREF
  bool v41; // [rsp+101h] [rbp-77h] BYREF
  bool v42; // [rsp+102h] [rbp-76h] BYREF
  int v43; // [rsp+104h] [rbp-74h] BYREF
  float v44; // [rsp+108h] [rbp-70h] BYREF
  float v45; // [rsp+10Ch] [rbp-6Ch] BYREF
  int v46; // [rsp+110h] [rbp-68h] BYREF
  float v47; // [rsp+114h] [rbp-64h] BYREF
  float v48; // [rsp+118h] [rbp-60h] BYREF
  float v49; // [rsp+11Ch] [rbp-5Ch] BYREF
  int v50; // [rsp+120h] [rbp-58h] BYREF
  int v51; // [rsp+124h] [rbp-54h] BYREF
  __int64 v52; // [rsp+128h] [rbp-50h] BYREF
  __int64 v53; // [rsp+130h] [rbp-48h] BYREF
  __int64 v54; // [rsp+138h] [rbp-40h] BYREF
  __int64 v55; // [rsp+140h] [rbp-38h] BYREF
  __int64 v56; // [rsp+148h] [rbp-30h] BYREF
  __int64 v57; // [rsp+168h] [rbp-10h] BYREF

  v57 = (__int64)this;
  v24 = wil::details::static_lazy<TouchKeyboardTraceLogging>::get(
          this,
          _lambda_1ac898bd3d40bc28a50fe4f0aa1b56f0_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v24 + 8) > 5u )
  {
    if ( tlgKeywordOn(*(_QWORD *)(v24 + 8), 0x400000000000LL) )
    {
      LOBYTE(v57) = a21;
      v28 = *((float *)a5 + 3) + *((float *)a5 + 1);
      v29 = *((float *)a5 + 2) + *(float *)a5;
      v43 = a20;
      v32 = a19;
      v33 = a18;
      v52 = (__int64)a17;
      v34 = a16;
      v35 = a15;
      v36 = a14;
      v37 = a13;
      v38 = a12;
      v39 = a11;
      v40 = a10;
      v41 = a9;
      v42 = a8;
      v53 = (__int64)a7;
      v54 = (__int64)a6;
      v46 = *((_DWORD *)a5 + 1);
      v47 = *(float *)a5;
      v50 = *((_DWORD *)a4 + 1);
      v51 = *(_DWORD *)a4;
      v44 = v28;
      v30 = *((float *)a4 + 3) + *((float *)a4 + 1);
      v45 = v29;
      v31 = *((float *)a4 + 2) + *(float *)a4;
      v48 = v30;
      v55 = (__int64)a3;
      v49 = v31;
      v56 = (__int64)a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v27,
        (unsigned __int8 *)dword_1806BD2DA,
        v25,
        v26,
        (const WCHAR **)&v56,
        (const WCHAR **)&v55,
        (__int64)&v51,
        (__int64)&v50,
        (__int64)&v49,
        (__int64)&v48,
        (__int64)&v47,
        (__int64)&v46,
        (__int64)&v45,
        (__int64)&v44,
        (const WCHAR **)&v54,
        &v53,
        (__int64)&v42,
        (__int64)&v41,
        (__int64)&v40,
        (__int64)&v39,
        (__int64)&v38,
        (__int64)&v37,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)&v34,
        (const WCHAR **)&v52,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v43,
        (__int64)&v57);
    }
  }
}
