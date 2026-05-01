/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U1@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U4@U4@U4@U4@U4@U4@U4@U4@U1@U4@U4@U2@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@44444443AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@6666666636646@Z @ 0x18047F910
 * Callers:
 *     ?HostInvokedMethod_@TouchKeyboardTelemetry@@QEAAXPEBG0AEAURect@Foundation@Windows@@10U_GUID@@_N33333333033H3@Z @ 0x180481FAC (-HostInvokedMethod_@TouchKeyboardTelemetry@@QEAAXPEBG0AEAURect@Foundation@Windows@@10U_GUID@@_N3.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        const WCHAR **a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        const WCHAR **a15,
        __int64 *a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        const WCHAR **a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        __int64 a30)
{
  __int64 v32; // rdx
  int v33; // r8d
  const WCHAR *v34; // rcx
  __int64 v35; // rax
  int v36; // r9d
  const WCHAR *v37; // rcx
  __int64 v38; // rax
  int v39; // r9d
  const WCHAR *v40; // rcx
  __int64 v41; // rax
  int v42; // r9d
  const WCHAR *v43; // rcx
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+30h] [rbp-D0h] BYREF
  const WCHAR *v46; // [rsp+50h] [rbp-B0h]
  int v47; // [rsp+58h] [rbp-A8h]
  int v48; // [rsp+5Ch] [rbp-A4h]
  const WCHAR *v49; // [rsp+60h] [rbp-A0h]
  int v50; // [rsp+68h] [rbp-98h]
  int v51; // [rsp+6Ch] [rbp-94h]
  __int64 v52; // [rsp+70h] [rbp-90h]
  __int64 v53; // [rsp+78h] [rbp-88h]
  __int64 v54; // [rsp+80h] [rbp-80h]
  __int64 v55; // [rsp+88h] [rbp-78h]
  __int64 v56; // [rsp+90h] [rbp-70h]
  __int64 v57; // [rsp+98h] [rbp-68h]
  __int64 v58; // [rsp+A0h] [rbp-60h]
  __int64 v59; // [rsp+A8h] [rbp-58h]
  __int64 v60; // [rsp+B0h] [rbp-50h]
  __int64 v61; // [rsp+B8h] [rbp-48h]
  __int64 v62; // [rsp+C0h] [rbp-40h]
  __int64 v63; // [rsp+C8h] [rbp-38h]
  __int64 v64; // [rsp+D0h] [rbp-30h]
  __int64 v65; // [rsp+D8h] [rbp-28h]
  __int64 v66; // [rsp+E0h] [rbp-20h]
  __int64 v67; // [rsp+E8h] [rbp-18h]
  const WCHAR *v68; // [rsp+F0h] [rbp-10h]
  int v69; // [rsp+F8h] [rbp-8h]
  int v70; // [rsp+FCh] [rbp-4h]
  __int64 v71; // [rsp+100h] [rbp+0h]
  __int64 v72; // [rsp+108h] [rbp+8h]
  __int64 v73; // [rsp+110h] [rbp+10h]
  __int64 v74; // [rsp+118h] [rbp+18h]
  __int64 v75; // [rsp+120h] [rbp+20h]
  __int64 v76; // [rsp+128h] [rbp+28h]
  __int64 v77; // [rsp+130h] [rbp+30h]
  __int64 v78; // [rsp+138h] [rbp+38h]
  __int64 v79; // [rsp+140h] [rbp+40h]
  __int64 v80; // [rsp+148h] [rbp+48h]
  __int64 v81; // [rsp+150h] [rbp+50h]
  __int64 v82; // [rsp+158h] [rbp+58h]
  __int64 v83; // [rsp+160h] [rbp+60h]
  __int64 v84; // [rsp+168h] [rbp+68h]
  __int64 v85; // [rsp+170h] [rbp+70h]
  __int64 v86; // [rsp+178h] [rbp+78h]
  __int64 v87; // [rsp+180h] [rbp+80h]
  __int64 v88; // [rsp+188h] [rbp+88h]
  __int64 v89; // [rsp+190h] [rbp+90h]
  __int64 v90; // [rsp+198h] [rbp+98h]
  const WCHAR *v91; // [rsp+1A0h] [rbp+A0h]
  int v92; // [rsp+1A8h] [rbp+A8h]
  int v93; // [rsp+1ACh] [rbp+ACh]
  __int64 v94; // [rsp+1B0h] [rbp+B0h]
  __int64 v95; // [rsp+1B8h] [rbp+B8h]
  __int64 v96; // [rsp+1C0h] [rbp+C0h]
  __int64 v97; // [rsp+1C8h] [rbp+C8h]
  __int64 v98; // [rsp+1D0h] [rbp+D0h]
  __int64 v99; // [rsp+1D8h] [rbp+D8h]
  __int64 v100; // [rsp+1E0h] [rbp+E0h]
  __int64 v101; // [rsp+1E8h] [rbp+E8h]

  v100 = a30;
  v98 = a29;
  v32 = -1LL;
  v33 = 2;
  v96 = a28;
  v94 = a27;
  v101 = 1LL;
  v99 = 4LL;
  v97 = 1LL;
  v34 = *a26;
  v95 = 1LL;
  if ( v34 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( v34[v35] );
    v36 = 2 * v35 + 2;
  }
  else
  {
    v34 = &LocaleName;
    v36 = 2;
  }
  v89 = a25;
  v87 = a24;
  v85 = a23;
  v83 = a22;
  v81 = a21;
  v79 = a20;
  v77 = a19;
  v75 = a18;
  v73 = a17;
  v91 = v34;
  v92 = v36;
  v93 = 0;
  v71 = *a16;
  v90 = 1LL;
  v88 = 1LL;
  v37 = *a15;
  v86 = 1LL;
  v84 = 1LL;
  v82 = 1LL;
  v80 = 1LL;
  v78 = 1LL;
  v76 = 1LL;
  v74 = 1LL;
  v72 = 16LL;
  if ( v37 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( v37[v38] );
    v39 = 2 * v38 + 2;
  }
  else
  {
    v37 = &LocaleName;
    v39 = 2;
  }
  v66 = a14;
  v64 = a13;
  v62 = a12;
  v60 = a11;
  v58 = a10;
  v56 = a9;
  v54 = a8;
  v52 = a7;
  v68 = v37;
  v69 = v39;
  v70 = 0;
  v40 = *a6;
  v67 = 4LL;
  v65 = 4LL;
  v63 = 4LL;
  v61 = 4LL;
  v59 = 4LL;
  v57 = 4LL;
  v55 = 4LL;
  v53 = 4LL;
  if ( v40 )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( v40[v41] );
    v42 = 2 * v41 + 2;
  }
  else
  {
    v40 = &LocaleName;
    v42 = 2;
  }
  v49 = v40;
  v50 = v42;
  v51 = 0;
  v43 = *a5;
  if ( *a5 )
  {
    do
      ++v32;
    while ( v43[v32] );
    v33 = 2 * v32 + 2;
  }
  else
  {
    v43 = &LocaleName;
  }
  v46 = v43;
  v47 = v33;
  v48 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 0x1Cu, &v45);
}
