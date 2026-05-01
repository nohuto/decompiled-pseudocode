/*
 * XREFs of ?HostInvokedMethod_@TouchKeyboardTelemetry@@QEAAXPEBG00AEAURect@Foundation@Windows@@10U_GUID@@_N33333333300000000333H3@Z @ 0x180533494
 * Callers:
 *     ??$HostInvokedMethod@PEBGPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEAU123@AEAY07$$CBGAEBU_GUID@@_N_N_N_NAEB_NAEB_N_NAEA_NAEA_NAEA_NAEAY07$$CBGAEAY07$$CBGAEAY07$$CBGAEAY07$$CBGAEAY07$$CBGAEAY07$$CBGAEAY07$$CBGPEBG_NAEA_NAEA_NHAEA_N@TouchKeyboardTelemetry@@SAX$$QEAPEBG0AEAY07$$CBGAEAURect@Foundation@Windows@@21AEBU_GUID@@$$QEA_N444AEB_N54AEA_N6611111110466$$QEAH6@Z @ 0x180530A30 (--$HostInvokedMethod@PEBGPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEAU123@AEAY07$$CBGAEBU_GUI.c)
 *     ??$HostInvokedMethod@PEBGPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEAU123@AEAY07$$CBGAEBU_GUID@@_N_N_N_NAEB_NAEB_N_N_N_N_NPEBGPEBGPEBGPEBGPEBGPEBGPEBGPEBG_NAEA_NAEAU?$atomic@_N@std@@HAEA_N@TouchKeyboardTelemetry@@SAX$$QEAPEBG0AEAY07$$CBGAEAURect@Foundation@Windows@@21AEBU_GUID@@$$QEA_N444AEB_N54444000000004AEA_NAEAU?$atomic@_N@std@@$$QEAH6@Z @ 0x180530C28 (--$HostInvokedMethod@PEBGPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEAU123@AEAY07_ea_180530C28.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U5@U5@U5@U5@U5@U5@U5@U5@U5@U2@U2@U2@U2@U2@U2@U2@U2@U5@U5@U5@U3@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@44AEBU?$_tlgWrapperByVal@$03@@55555554AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@7777777774444444477757@Z @ 0x180531208 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U2@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3.c)
 *     ?get@?$static_lazy@VTouchKeyboardTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardTraceLogging@@P6AXXZ@Z @ 0x18053614C (-get@-$static_lazy@VTouchKeyboardTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardTraceLogging@@.c)
 */

void __fastcall TouchKeyboardTelemetry::HostInvokedMethod_(
        TouchKeyboardTelemetry *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        struct Windows::Foundation::Rect *a5,
        struct Windows::Foundation::Rect *a6,
        const unsigned __int16 *a7,
        struct _GUID *a8,
        bool a9,
        bool a10,
        bool a11,
        bool a12,
        bool a13,
        bool a14,
        bool a15,
        bool a16,
        bool a17,
        bool a18,
        const unsigned __int16 *a19,
        const unsigned __int16 *a20,
        const unsigned __int16 *a21,
        const unsigned __int16 *a22,
        const unsigned __int16 *a23,
        const unsigned __int16 *a24,
        const unsigned __int16 *a25,
        const unsigned __int16 *a26,
        bool a27,
        bool a28,
        bool a29,
        int a30,
        bool a31)
{
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r10
  float v38; // xmm0_4
  float v39; // xmm1_4
  float v40; // xmm0_4
  float v41; // xmm1_4
  bool v42; // [rsp+158h] [rbp-80h] BYREF
  bool v43; // [rsp+159h] [rbp-7Fh] BYREF
  bool v44; // [rsp+15Ah] [rbp-7Eh] BYREF
  bool v45; // [rsp+15Bh] [rbp-7Dh] BYREF
  bool v46; // [rsp+15Ch] [rbp-7Ch] BYREF
  bool v47; // [rsp+15Dh] [rbp-7Bh] BYREF
  bool v48; // [rsp+15Eh] [rbp-7Ah] BYREF
  bool v49; // [rsp+15Fh] [rbp-79h] BYREF
  bool v50; // [rsp+160h] [rbp-78h] BYREF
  bool v51; // [rsp+161h] [rbp-77h] BYREF
  bool v52; // [rsp+162h] [rbp-76h] BYREF
  bool v53; // [rsp+163h] [rbp-75h] BYREF
  bool v54; // [rsp+164h] [rbp-74h] BYREF
  int v55; // [rsp+168h] [rbp-70h] BYREF
  float v56; // [rsp+16Ch] [rbp-6Ch] BYREF
  float v57; // [rsp+170h] [rbp-68h] BYREF
  int v58; // [rsp+174h] [rbp-64h] BYREF
  float v59; // [rsp+178h] [rbp-60h] BYREF
  float v60; // [rsp+17Ch] [rbp-5Ch] BYREF
  float v61; // [rsp+180h] [rbp-58h] BYREF
  int v62; // [rsp+184h] [rbp-54h] BYREF
  float v63; // [rsp+188h] [rbp-50h] BYREF
  __int64 v64; // [rsp+190h] [rbp-48h] BYREF
  __int64 v65; // [rsp+198h] [rbp-40h] BYREF
  __int64 v66; // [rsp+1A0h] [rbp-38h] BYREF
  __int64 v67; // [rsp+1A8h] [rbp-30h] BYREF
  __int64 v68; // [rsp+1B0h] [rbp-28h] BYREF
  __int64 v69; // [rsp+1B8h] [rbp-20h] BYREF
  __int64 v70; // [rsp+1C0h] [rbp-18h] BYREF
  __int64 v71; // [rsp+1C8h] [rbp-10h] BYREF
  __int64 v72; // [rsp+1D0h] [rbp-8h] BYREF
  __int64 v73; // [rsp+1D8h] [rbp+0h] BYREF
  __int64 v74; // [rsp+1E0h] [rbp+8h] BYREF
  __int64 v75; // [rsp+1E8h] [rbp+10h] BYREF
  __int64 v76; // [rsp+1F0h] [rbp+18h] BYREF
  __int64 v77; // [rsp+1F8h] [rbp+20h] BYREF
  __int64 v78; // [rsp+218h] [rbp+40h] BYREF

  v78 = (__int64)this;
  v34 = wil::details::static_lazy<TouchKeyboardTraceLogging>::get(
          this,
          _lambda_1ac898bd3d40bc28a50fe4f0aa1b56f0_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v34 + 8) > 5u )
  {
    if ( tlgKeywordOn(*(_QWORD *)(v34 + 8), 0x400000000000LL) )
    {
      LOBYTE(v78) = a31;
      v38 = *((float *)a6 + 3) + *((float *)a6 + 1);
      v39 = *((float *)a6 + 2) + *(float *)a6;
      v55 = a30;
      v42 = a29;
      v43 = a28;
      v44 = a27;
      v64 = (__int64)a26;
      v65 = (__int64)a25;
      v66 = (__int64)a24;
      v67 = (__int64)a23;
      v68 = (__int64)a22;
      v69 = (__int64)a21;
      v70 = (__int64)a20;
      v71 = (__int64)a19;
      v45 = a18;
      v46 = a17;
      v47 = a16;
      v48 = a15;
      v49 = a14;
      v50 = a13;
      v51 = a12;
      v52 = a11;
      v53 = a10;
      v54 = a9;
      v72 = (__int64)a8;
      v73 = (__int64)a7;
      v58 = *((_DWORD *)a6 + 1);
      v59 = *(float *)a6;
      v56 = v38;
      v57 = v39;
      v40 = *((float *)a5 + 3) + *((float *)a5 + 1);
      v41 = *((float *)a5 + 2) + *(float *)a5;
      v62 = *((_DWORD *)a5 + 1);
      v63 = *(float *)a5;
      v60 = v40;
      v61 = v41;
      v74 = (__int64)a4;
      v75 = (__int64)a3;
      v76 = (__int64)a2;
      v77 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v37,
        (unsigned __int8 *)dword_180864C03,
        v35,
        v36,
        (__int64)&v77,
        (const WCHAR **)&v76,
        (const WCHAR **)&v75,
        (const WCHAR **)&v74,
        (__int64)&v63,
        (__int64)&v62,
        (__int64)&v61,
        (__int64)&v60,
        (__int64)&v59,
        (__int64)&v58,
        (__int64)&v57,
        (__int64)&v56,
        (const WCHAR **)&v73,
        &v72,
        (__int64)&v54,
        (__int64)&v53,
        (__int64)&v52,
        (__int64)&v51,
        (__int64)&v50,
        (__int64)&v49,
        (__int64)&v48,
        (__int64)&v47,
        (__int64)&v46,
        (__int64)&v45,
        (const WCHAR **)&v71,
        (const WCHAR **)&v70,
        (const WCHAR **)&v69,
        (const WCHAR **)&v68,
        (const WCHAR **)&v67,
        (const WCHAR **)&v66,
        (const WCHAR **)&v65,
        (const WCHAR **)&v64,
        (__int64)&v44,
        (__int64)&v43,
        (__int64)&v42,
        (__int64)&v55,
        (__int64)&v78);
    }
  }
}
