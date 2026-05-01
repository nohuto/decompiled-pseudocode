/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645644564@Z @ 0x18046D3C0
 * Callers:
 *     ?Stop@InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBGJ@Z @ 0x1800BFB70 (-Stop@InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBGJ@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const wchar_t **a8,
        __int64 a9,
        const wchar_t **a10,
        __int64 a11,
        const WCHAR **a12,
        __int64 a13,
        const wchar_t **a14,
        __int64 a15,
        const wchar_t **a16,
        const WCHAR **a17,
        __int64 a18,
        const wchar_t **a19,
        const WCHAR **a20,
        __int64 a21,
        __int64 a22,
        const wchar_t **a23,
        const WCHAR **a24,
        __int64 a25)
{
  __int64 v27; // rcx
  int v29; // r10d
  const WCHAR *v30; // rdx
  __int64 v31; // rax
  int v32; // r8d
  const wchar_t *v33; // r8
  __int64 v34; // rax
  int v35; // eax
  const WCHAR *v36; // r8
  __int64 v37; // rax
  int v38; // r9d
  const wchar_t *v39; // r8
  __int64 v40; // rax
  int v41; // eax
  const WCHAR *v42; // r8
  __int64 v43; // rax
  int v44; // r9d
  const wchar_t *v45; // r8
  __int64 v46; // rax
  int v47; // eax
  const wchar_t *v48; // r8
  __int64 v49; // rax
  int v50; // eax
  const WCHAR *v51; // r8
  __int64 v52; // rax
  const wchar_t *v53; // r8
  __int64 v54; // rax
  int v55; // eax
  const wchar_t *v56; // r8
  int v57; // ecx
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v60; // [rsp+50h] [rbp-B0h]
  __int64 v61; // [rsp+58h] [rbp-A8h]
  __int64 v62; // [rsp+60h] [rbp-A0h]
  __int64 v63; // [rsp+68h] [rbp-98h]
  __int64 v64; // [rsp+70h] [rbp-90h]
  __int64 v65; // [rsp+78h] [rbp-88h]
  const wchar_t *v66; // [rsp+80h] [rbp-80h]
  int v67; // [rsp+88h] [rbp-78h]
  int v68; // [rsp+8Ch] [rbp-74h]
  __int64 v69; // [rsp+90h] [rbp-70h]
  __int64 v70; // [rsp+98h] [rbp-68h]
  const wchar_t *v71; // [rsp+A0h] [rbp-60h]
  int v72; // [rsp+A8h] [rbp-58h]
  int v73; // [rsp+ACh] [rbp-54h]
  __int64 v74; // [rsp+B0h] [rbp-50h]
  __int64 v75; // [rsp+B8h] [rbp-48h]
  const WCHAR *v76; // [rsp+C0h] [rbp-40h]
  int v77; // [rsp+C8h] [rbp-38h]
  int v78; // [rsp+CCh] [rbp-34h]
  __int64 v79; // [rsp+D0h] [rbp-30h]
  __int64 v80; // [rsp+D8h] [rbp-28h]
  const wchar_t *v81; // [rsp+E0h] [rbp-20h]
  int v82; // [rsp+E8h] [rbp-18h]
  int v83; // [rsp+ECh] [rbp-14h]
  __int64 v84; // [rsp+F0h] [rbp-10h]
  __int64 v85; // [rsp+F8h] [rbp-8h]
  const wchar_t *v86; // [rsp+100h] [rbp+0h]
  int v87; // [rsp+108h] [rbp+8h]
  int v88; // [rsp+10Ch] [rbp+Ch]
  const WCHAR *v89; // [rsp+110h] [rbp+10h]
  int v90; // [rsp+118h] [rbp+18h]
  int v91; // [rsp+11Ch] [rbp+1Ch]
  __int64 v92; // [rsp+120h] [rbp+20h]
  __int64 v93; // [rsp+128h] [rbp+28h]
  const wchar_t *v94; // [rsp+130h] [rbp+30h]
  int v95; // [rsp+138h] [rbp+38h]
  int v96; // [rsp+13Ch] [rbp+3Ch]
  const WCHAR *v97; // [rsp+140h] [rbp+40h]
  int v98; // [rsp+148h] [rbp+48h]
  int v99; // [rsp+14Ch] [rbp+4Ch]
  __int64 v100; // [rsp+150h] [rbp+50h]
  __int64 v101; // [rsp+158h] [rbp+58h]
  __int64 v102; // [rsp+160h] [rbp+60h]
  __int64 v103; // [rsp+168h] [rbp+68h]
  const wchar_t *v104; // [rsp+170h] [rbp+70h]
  int v105; // [rsp+178h] [rbp+78h]
  int v106; // [rsp+17Ch] [rbp+7Ch]
  const WCHAR *v107; // [rsp+180h] [rbp+80h]
  int v108; // [rsp+188h] [rbp+88h]
  int v109; // [rsp+18Ch] [rbp+8Ch]
  __int64 v110; // [rsp+190h] [rbp+90h]
  __int64 v111; // [rsp+198h] [rbp+98h]

  v110 = a25;
  v27 = -1LL;
  v111 = 4LL;
  v29 = 2;
  v30 = *a24;
  if ( *a24 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( v30[v31] );
    v32 = 2 * v31 + 2;
  }
  else
  {
    v30 = &LocaleName;
    v32 = 2;
  }
  v108 = v32;
  v107 = v30;
  v109 = 0;
  v33 = *a23;
  if ( *a23 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( *((_BYTE *)v33 + v34) );
    v35 = v34 + 1;
  }
  else
  {
    v33 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v35 = 1;
  }
  v105 = v35;
  v102 = a22;
  v100 = a21;
  v104 = v33;
  v106 = 0;
  v103 = 4LL;
  v36 = *a20;
  v101 = 4LL;
  if ( v36 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( v36[v37] );
    v38 = 2 * v37 + 2;
  }
  else
  {
    v36 = &LocaleName;
    v38 = 2;
  }
  v97 = v36;
  v98 = v38;
  v99 = 0;
  v39 = *a19;
  if ( *a19 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( *((_BYTE *)v39 + v40) );
    v41 = v40 + 1;
  }
  else
  {
    v39 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v41 = 1;
  }
  v95 = v41;
  v92 = a18;
  v94 = v39;
  v96 = 0;
  v93 = 4LL;
  v42 = *a17;
  if ( *a17 )
  {
    v43 = -1LL;
    do
      ++v43;
    while ( v42[v43] );
    v44 = 2 * v43 + 2;
  }
  else
  {
    v42 = &LocaleName;
    v44 = 2;
  }
  v89 = v42;
  v90 = v44;
  v91 = 0;
  v45 = *a16;
  if ( *a16 )
  {
    v46 = -1LL;
    do
      ++v46;
    while ( *((_BYTE *)v45 + v46) );
    v47 = v46 + 1;
  }
  else
  {
    v45 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v47 = 1;
  }
  v87 = v47;
  v84 = a15;
  v86 = v45;
  v88 = 0;
  v85 = 4LL;
  v48 = *a14;
  if ( *a14 )
  {
    v49 = -1LL;
    do
      ++v49;
    while ( *((_BYTE *)v48 + v49) );
    v50 = v49 + 1;
  }
  else
  {
    v48 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v50 = 1;
  }
  v82 = v50;
  v79 = a13;
  v81 = v48;
  v83 = 0;
  v80 = 4LL;
  v51 = *a12;
  if ( *a12 )
  {
    v52 = -1LL;
    do
      ++v52;
    while ( v51[v52] );
    v29 = 2 * v52 + 2;
  }
  else
  {
    v51 = &LocaleName;
  }
  v74 = a11;
  v76 = v51;
  v77 = v29;
  v78 = 0;
  v53 = *a10;
  v75 = 4LL;
  if ( v53 )
  {
    v54 = -1LL;
    do
      ++v54;
    while ( *((_BYTE *)v53 + v54) );
    v55 = v54 + 1;
  }
  else
  {
    v53 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v55 = 1;
  }
  v72 = v55;
  v69 = a9;
  v71 = v53;
  v73 = 0;
  v70 = 4LL;
  v56 = *a8;
  if ( *a8 )
  {
    do
      ++v27;
    while ( *((_BYTE *)v56 + v27) );
    v57 = v27 + 1;
  }
  else
  {
    v56 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v57 = 1;
  }
  v64 = a7;
  v62 = a6;
  v60 = a5;
  v66 = v56;
  v67 = v57;
  v68 = 0;
  v65 = 4LL;
  v63 = 8LL;
  v61 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 0x17u, &v59);
}
