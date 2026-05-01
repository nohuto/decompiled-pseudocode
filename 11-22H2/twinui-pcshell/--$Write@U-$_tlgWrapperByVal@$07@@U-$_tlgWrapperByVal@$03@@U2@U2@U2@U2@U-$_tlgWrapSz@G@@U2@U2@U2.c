/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U2@U2@U2@U2@U2@U2@U2@U2@U3@U2@U2@U2@U2@U3@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444AEBU?$_tlgWrapSz@G@@44445444444445444454444@Z @ 0x1805B7DD8
 * Callers:
 *     ?StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@@Z @ 0x1805BF870 (-StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        const WCHAR **a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        const WCHAR **a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        const WCHAR **a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        const WCHAR **a30,
        __int64 a31,
        __int64 a32,
        __int64 a33,
        __int64 a34)
{
  __int64 v36; // rcx
  int v38; // r8d
  const WCHAR *v40; // rdx
  __int64 v41; // rax
  int v42; // r9d
  const WCHAR *v43; // rdx
  __int64 v44; // rax
  int v45; // r9d
  const WCHAR *v46; // rdx
  __int64 v47; // rax
  int v48; // r9d
  const WCHAR *v49; // rdx
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v52; // [rsp+50h] [rbp-B0h]
  __int64 v53; // [rsp+58h] [rbp-A8h]
  __int64 v54; // [rsp+60h] [rbp-A0h]
  __int64 v55; // [rsp+68h] [rbp-98h]
  __int64 v56; // [rsp+70h] [rbp-90h]
  __int64 v57; // [rsp+78h] [rbp-88h]
  __int64 v58; // [rsp+80h] [rbp-80h]
  __int64 v59; // [rsp+88h] [rbp-78h]
  __int64 v60; // [rsp+90h] [rbp-70h]
  __int64 v61; // [rsp+98h] [rbp-68h]
  __int64 v62; // [rsp+A0h] [rbp-60h]
  __int64 v63; // [rsp+A8h] [rbp-58h]
  const WCHAR *v64; // [rsp+B0h] [rbp-50h]
  int v65; // [rsp+B8h] [rbp-48h]
  int v66; // [rsp+BCh] [rbp-44h]
  __int64 v67; // [rsp+C0h] [rbp-40h]
  __int64 v68; // [rsp+C8h] [rbp-38h]
  __int64 v69; // [rsp+D0h] [rbp-30h]
  __int64 v70; // [rsp+D8h] [rbp-28h]
  __int64 v71; // [rsp+E0h] [rbp-20h]
  __int64 v72; // [rsp+E8h] [rbp-18h]
  __int64 v73; // [rsp+F0h] [rbp-10h]
  __int64 v74; // [rsp+F8h] [rbp-8h]
  const WCHAR *v75; // [rsp+100h] [rbp+0h]
  int v76; // [rsp+108h] [rbp+8h]
  int v77; // [rsp+10Ch] [rbp+Ch]
  __int64 v78; // [rsp+110h] [rbp+10h]
  __int64 v79; // [rsp+118h] [rbp+18h]
  __int64 v80; // [rsp+120h] [rbp+20h]
  __int64 v81; // [rsp+128h] [rbp+28h]
  __int64 v82; // [rsp+130h] [rbp+30h]
  __int64 v83; // [rsp+138h] [rbp+38h]
  __int64 v84; // [rsp+140h] [rbp+40h]
  __int64 v85; // [rsp+148h] [rbp+48h]
  __int64 v86; // [rsp+150h] [rbp+50h]
  __int64 v87; // [rsp+158h] [rbp+58h]
  __int64 v88; // [rsp+160h] [rbp+60h]
  __int64 v89; // [rsp+168h] [rbp+68h]
  __int64 v90; // [rsp+170h] [rbp+70h]
  __int64 v91; // [rsp+178h] [rbp+78h]
  __int64 v92; // [rsp+180h] [rbp+80h]
  __int64 v93; // [rsp+188h] [rbp+88h]
  const WCHAR *v94; // [rsp+190h] [rbp+90h]
  int v95; // [rsp+198h] [rbp+98h]
  int v96; // [rsp+19Ch] [rbp+9Ch]
  __int64 v97; // [rsp+1A0h] [rbp+A0h]
  __int64 v98; // [rsp+1A8h] [rbp+A8h]
  __int64 v99; // [rsp+1B0h] [rbp+B0h]
  __int64 v100; // [rsp+1B8h] [rbp+B8h]
  __int64 v101; // [rsp+1C0h] [rbp+C0h]
  __int64 v102; // [rsp+1C8h] [rbp+C8h]
  __int64 v103; // [rsp+1D0h] [rbp+D0h]
  __int64 v104; // [rsp+1D8h] [rbp+D8h]
  const WCHAR *v105; // [rsp+1E0h] [rbp+E0h]
  int v106; // [rsp+1E8h] [rbp+E8h]
  int v107; // [rsp+1ECh] [rbp+ECh]
  __int64 v108; // [rsp+1F0h] [rbp+F0h]
  __int64 v109; // [rsp+1F8h] [rbp+F8h]
  __int64 v110; // [rsp+200h] [rbp+100h]
  __int64 v111; // [rsp+208h] [rbp+108h]
  __int64 v112; // [rsp+210h] [rbp+110h]
  __int64 v113; // [rsp+218h] [rbp+118h]
  __int64 v114; // [rsp+220h] [rbp+120h]
  __int64 v115; // [rsp+228h] [rbp+128h]

  v114 = a34;
  v112 = a33;
  v36 = -1LL;
  v110 = a32;
  v38 = 2;
  v108 = a31;
  v115 = 4LL;
  v113 = 4LL;
  v111 = 4LL;
  v40 = *a30;
  v109 = 4LL;
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
  v103 = a29;
  v101 = a28;
  v99 = a27;
  v97 = a26;
  v105 = v40;
  v106 = v42;
  v107 = 0;
  v43 = *a25;
  v104 = 4LL;
  v102 = 4LL;
  v100 = 4LL;
  v98 = 4LL;
  if ( v43 )
  {
    v44 = -1LL;
    do
      ++v44;
    while ( v43[v44] );
    v45 = 2 * v44 + 2;
  }
  else
  {
    v43 = &LocaleName;
    v45 = 2;
  }
  v92 = a24;
  v90 = a23;
  v88 = a22;
  v86 = a21;
  v84 = a20;
  v82 = a19;
  v80 = a18;
  v78 = a17;
  v94 = v43;
  v95 = v45;
  v96 = 0;
  v46 = *a16;
  v93 = 4LL;
  v91 = 4LL;
  v89 = 4LL;
  v87 = 4LL;
  v85 = 4LL;
  v83 = 4LL;
  v81 = 4LL;
  v79 = 4LL;
  if ( v46 )
  {
    v47 = -1LL;
    do
      ++v47;
    while ( v46[v47] );
    v48 = 2 * v47 + 2;
  }
  else
  {
    v46 = &LocaleName;
    v48 = 2;
  }
  v73 = a15;
  v71 = a14;
  v69 = a13;
  v67 = a12;
  v75 = v46;
  v76 = v48;
  v77 = 0;
  v49 = *a11;
  v74 = 4LL;
  v72 = 4LL;
  v70 = 4LL;
  v68 = 4LL;
  if ( v49 )
  {
    do
      ++v36;
    while ( v49[v36] );
    v38 = 2 * v36 + 2;
  }
  else
  {
    v49 = &LocaleName;
  }
  v62 = a10;
  v60 = a9;
  v58 = a8;
  v56 = a7;
  v54 = a6;
  v52 = a5;
  v64 = v49;
  v65 = v38;
  v66 = 0;
  v63 = 4LL;
  v61 = 4LL;
  v59 = 4LL;
  v57 = 4LL;
  v55 = 4LL;
  v53 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, a4, 0x20u, &v51);
}
