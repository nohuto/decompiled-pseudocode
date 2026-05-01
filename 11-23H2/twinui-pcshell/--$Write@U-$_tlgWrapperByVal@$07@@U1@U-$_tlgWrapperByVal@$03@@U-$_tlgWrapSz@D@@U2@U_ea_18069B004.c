/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U4@U4@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564566664@Z @ 0x18069B004
 * Callers:
 *     ?Stop@PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemResult@2@@Z @ 0x1806A60F8 (-Stop@PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemR.c)
 *     ?Stop@PinManagerRequestPinItem@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemResult@2@@Z @ 0x1806A63D8 (-Stop@PinManagerRequestPinItem@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemResult@.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
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
        const WCHAR **a21,
        const WCHAR **a22,
        const WCHAR **a23,
        __int64 a24)
{
  __int64 v26; // rcx
  int v28; // r10d
  const WCHAR *v29; // rdx
  __int64 v30; // rax
  int v31; // r8d
  const WCHAR *v32; // rdx
  __int64 v33; // rax
  int v34; // r8d
  const WCHAR *v35; // rdx
  __int64 v36; // rax
  int v37; // r8d
  const WCHAR *v38; // rdx
  __int64 v39; // rax
  int v40; // r8d
  const wchar_t *v41; // r8
  __int64 v42; // rax
  int v43; // eax
  const WCHAR *v44; // r8
  __int64 v45; // rax
  int v46; // r9d
  const wchar_t *v47; // r8
  __int64 v48; // rax
  int v49; // eax
  const wchar_t *v50; // r8
  __int64 v51; // rax
  int v52; // eax
  const WCHAR *v53; // r8
  __int64 v54; // rax
  const wchar_t *v55; // r8
  __int64 v56; // rax
  int v57; // eax
  const wchar_t *v58; // r8
  int v59; // ecx
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v62; // [rsp+50h] [rbp-B0h]
  __int64 v63; // [rsp+58h] [rbp-A8h]
  __int64 v64; // [rsp+60h] [rbp-A0h]
  __int64 v65; // [rsp+68h] [rbp-98h]
  __int64 v66; // [rsp+70h] [rbp-90h]
  __int64 v67; // [rsp+78h] [rbp-88h]
  const wchar_t *v68; // [rsp+80h] [rbp-80h]
  int v69; // [rsp+88h] [rbp-78h]
  int v70; // [rsp+8Ch] [rbp-74h]
  __int64 v71; // [rsp+90h] [rbp-70h]
  __int64 v72; // [rsp+98h] [rbp-68h]
  const wchar_t *v73; // [rsp+A0h] [rbp-60h]
  int v74; // [rsp+A8h] [rbp-58h]
  int v75; // [rsp+ACh] [rbp-54h]
  __int64 v76; // [rsp+B0h] [rbp-50h]
  __int64 v77; // [rsp+B8h] [rbp-48h]
  const WCHAR *v78; // [rsp+C0h] [rbp-40h]
  int v79; // [rsp+C8h] [rbp-38h]
  int v80; // [rsp+CCh] [rbp-34h]
  __int64 v81; // [rsp+D0h] [rbp-30h]
  __int64 v82; // [rsp+D8h] [rbp-28h]
  const wchar_t *v83; // [rsp+E0h] [rbp-20h]
  int v84; // [rsp+E8h] [rbp-18h]
  int v85; // [rsp+ECh] [rbp-14h]
  __int64 v86; // [rsp+F0h] [rbp-10h]
  __int64 v87; // [rsp+F8h] [rbp-8h]
  const wchar_t *v88; // [rsp+100h] [rbp+0h]
  int v89; // [rsp+108h] [rbp+8h]
  int v90; // [rsp+10Ch] [rbp+Ch]
  const WCHAR *v91; // [rsp+110h] [rbp+10h]
  int v92; // [rsp+118h] [rbp+18h]
  int v93; // [rsp+11Ch] [rbp+1Ch]
  __int64 v94; // [rsp+120h] [rbp+20h]
  __int64 v95; // [rsp+128h] [rbp+28h]
  const wchar_t *v96; // [rsp+130h] [rbp+30h]
  int v97; // [rsp+138h] [rbp+38h]
  int v98; // [rsp+13Ch] [rbp+3Ch]
  const WCHAR *v99; // [rsp+140h] [rbp+40h]
  int v100; // [rsp+148h] [rbp+48h]
  int v101; // [rsp+14Ch] [rbp+4Ch]
  const WCHAR *v102; // [rsp+150h] [rbp+50h]
  int v103; // [rsp+158h] [rbp+58h]
  int v104; // [rsp+15Ch] [rbp+5Ch]
  const WCHAR *v105; // [rsp+160h] [rbp+60h]
  int v106; // [rsp+168h] [rbp+68h]
  int v107; // [rsp+16Ch] [rbp+6Ch]
  const WCHAR *v108; // [rsp+170h] [rbp+70h]
  int v109; // [rsp+178h] [rbp+78h]
  int v110; // [rsp+17Ch] [rbp+7Ch]
  __int64 v111; // [rsp+180h] [rbp+80h]
  __int64 v112; // [rsp+188h] [rbp+88h]

  v111 = a24;
  v112 = 4LL;
  v26 = -1LL;
  v28 = 2;
  v29 = *a23;
  if ( *a23 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( v29[v30] );
    v31 = 2 * v30 + 2;
  }
  else
  {
    v29 = &LocaleName;
    v31 = 2;
  }
  v108 = v29;
  v109 = v31;
  v110 = 0;
  v32 = *a22;
  if ( *a22 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( v32[v33] );
    v34 = 2 * v33 + 2;
  }
  else
  {
    v32 = &LocaleName;
    v34 = 2;
  }
  v105 = v32;
  v106 = v34;
  v107 = 0;
  v35 = *a21;
  if ( *a21 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( v35[v36] );
    v37 = 2 * v36 + 2;
  }
  else
  {
    v35 = &LocaleName;
    v37 = 2;
  }
  v102 = v35;
  v103 = v37;
  v104 = 0;
  v38 = *a20;
  if ( *a20 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( v38[v39] );
    v40 = 2 * v39 + 2;
  }
  else
  {
    v38 = &LocaleName;
    v40 = 2;
  }
  v100 = v40;
  v99 = v38;
  v101 = 0;
  v41 = *a19;
  if ( *a19 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( *((_BYTE *)v41 + v42) );
    v43 = v42 + 1;
  }
  else
  {
    v41 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v43 = 1;
  }
  v97 = v43;
  v94 = a18;
  v96 = v41;
  v98 = 0;
  v95 = 4LL;
  v44 = *a17;
  if ( *a17 )
  {
    v45 = -1LL;
    do
      ++v45;
    while ( v44[v45] );
    v46 = 2 * v45 + 2;
  }
  else
  {
    v44 = &LocaleName;
    v46 = 2;
  }
  v91 = v44;
  v92 = v46;
  v93 = 0;
  v47 = *a16;
  if ( *a16 )
  {
    v48 = -1LL;
    do
      ++v48;
    while ( *((_BYTE *)v47 + v48) );
    v49 = v48 + 1;
  }
  else
  {
    v47 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v49 = 1;
  }
  v89 = v49;
  v86 = a15;
  v88 = v47;
  v90 = 0;
  v87 = 4LL;
  v50 = *a14;
  if ( *a14 )
  {
    v51 = -1LL;
    do
      ++v51;
    while ( *((_BYTE *)v50 + v51) );
    v52 = v51 + 1;
  }
  else
  {
    v50 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v52 = 1;
  }
  v84 = v52;
  v81 = a13;
  v83 = v50;
  v85 = 0;
  v82 = 4LL;
  v53 = *a12;
  if ( *a12 )
  {
    v54 = -1LL;
    do
      ++v54;
    while ( v53[v54] );
    v28 = 2 * v54 + 2;
  }
  else
  {
    v53 = &LocaleName;
  }
  v76 = a11;
  v78 = v53;
  v79 = v28;
  v80 = 0;
  v55 = *a10;
  v77 = 4LL;
  if ( v55 )
  {
    v56 = -1LL;
    do
      ++v56;
    while ( *((_BYTE *)v55 + v56) );
    v57 = v56 + 1;
  }
  else
  {
    v55 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v57 = 1;
  }
  v74 = v57;
  v71 = a9;
  v73 = v55;
  v75 = 0;
  v72 = 4LL;
  v58 = *a8;
  if ( *a8 )
  {
    do
      ++v26;
    while ( *((_BYTE *)v58 + v26) );
    v59 = v26 + 1;
  }
  else
  {
    v58 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v59 = 1;
  }
  v66 = a7;
  v64 = a6;
  v62 = a5;
  v68 = v58;
  v69 = v59;
  v70 = 0;
  v67 = 4LL;
  v65 = 8LL;
  v63 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 0x16u, &v61);
}
