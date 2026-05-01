/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18048F450
 * Callers:
 *     ?Stop@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAX_N@Z @ 0x180491EDC (-Stop@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAX_N@Z.c)
 *     ?Stop@EnsureInitializedAsync@SharedVisualHostProvider@@QEAAX_N@Z @ 0x1806E9A90 (-Stop@EnsureInitializedAsync@SharedVisualHostProvider@@QEAAX_N@Z.c)
 *     ?Stop@StartXamlHostThreadProc@SharedVisualHostProvider@@QEAAX_N@Z @ 0x1806E9CF0 (-Stop@StartXamlHostThreadProc@SharedVisualHostProvider@@QEAAX_N@Z.c)
 *     ?Stop@UpdateSize@SharedVisualHostProvider@@QEAAX_N@Z @ 0x1806EA2B0 (-Stop@UpdateSize@SharedVisualHostProvider@@QEAAX_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
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
        __int64 a21)
{
  __int64 v23; // rcx
  int v24; // r9d
  const WCHAR *v26; // rdx
  __int64 v27; // rax
  int v28; // r8d
  const wchar_t *v29; // rdx
  __int64 v30; // rax
  int v31; // eax
  const WCHAR *v32; // rdx
  __int64 v33; // rax
  int v34; // r8d
  const wchar_t *v35; // rdx
  __int64 v36; // rax
  int v37; // eax
  const wchar_t *v38; // rdx
  __int64 v39; // rax
  int v40; // eax
  const WCHAR *v41; // rdx
  __int64 v42; // rax
  const wchar_t *v43; // rdx
  __int64 v44; // rax
  int v45; // eax
  const wchar_t *v46; // rdx
  int v47; // ecx
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v50; // [rsp+50h] [rbp-B0h]
  __int64 v51; // [rsp+58h] [rbp-A8h]
  __int64 v52; // [rsp+60h] [rbp-A0h]
  __int64 v53; // [rsp+68h] [rbp-98h]
  __int64 v54; // [rsp+70h] [rbp-90h]
  __int64 v55; // [rsp+78h] [rbp-88h]
  const wchar_t *v56; // [rsp+80h] [rbp-80h]
  int v57; // [rsp+88h] [rbp-78h]
  int v58; // [rsp+8Ch] [rbp-74h]
  __int64 v59; // [rsp+90h] [rbp-70h]
  __int64 v60; // [rsp+98h] [rbp-68h]
  const wchar_t *v61; // [rsp+A0h] [rbp-60h]
  int v62; // [rsp+A8h] [rbp-58h]
  int v63; // [rsp+ACh] [rbp-54h]
  __int64 v64; // [rsp+B0h] [rbp-50h]
  __int64 v65; // [rsp+B8h] [rbp-48h]
  const WCHAR *v66; // [rsp+C0h] [rbp-40h]
  int v67; // [rsp+C8h] [rbp-38h]
  int v68; // [rsp+CCh] [rbp-34h]
  __int64 v69; // [rsp+D0h] [rbp-30h]
  __int64 v70; // [rsp+D8h] [rbp-28h]
  const wchar_t *v71; // [rsp+E0h] [rbp-20h]
  int v72; // [rsp+E8h] [rbp-18h]
  int v73; // [rsp+ECh] [rbp-14h]
  __int64 v74; // [rsp+F0h] [rbp-10h]
  __int64 v75; // [rsp+F8h] [rbp-8h]
  const wchar_t *v76; // [rsp+100h] [rbp+0h]
  int v77; // [rsp+108h] [rbp+8h]
  int v78; // [rsp+10Ch] [rbp+Ch]
  const WCHAR *v79; // [rsp+110h] [rbp+10h]
  int v80; // [rsp+118h] [rbp+18h]
  int v81; // [rsp+11Ch] [rbp+1Ch]
  __int64 v82; // [rsp+120h] [rbp+20h]
  __int64 v83; // [rsp+128h] [rbp+28h]
  const wchar_t *v84; // [rsp+130h] [rbp+30h]
  int v85; // [rsp+138h] [rbp+38h]
  int v86; // [rsp+13Ch] [rbp+3Ch]
  const WCHAR *v87; // [rsp+140h] [rbp+40h]
  int v88; // [rsp+148h] [rbp+48h]
  int v89; // [rsp+14Ch] [rbp+4Ch]
  __int64 v90; // [rsp+150h] [rbp+50h]
  __int64 v91; // [rsp+158h] [rbp+58h]

  v90 = a21;
  v91 = 1LL;
  v23 = -1LL;
  v24 = 2;
  v26 = *a20;
  if ( *a20 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( v26[v27] );
    v28 = 2 * v27 + 2;
  }
  else
  {
    v26 = &LocaleName;
    v28 = 2;
  }
  v87 = v26;
  v88 = v28;
  v89 = 0;
  v29 = *a19;
  if ( *a19 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( *((_BYTE *)v29 + v30) );
    v31 = v30 + 1;
  }
  else
  {
    v29 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v31 = 1;
  }
  v85 = v31;
  v82 = a18;
  v84 = v29;
  v86 = 0;
  v83 = 4LL;
  v32 = *a17;
  if ( *a17 )
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
  v79 = v32;
  v80 = v34;
  v81 = 0;
  v35 = *a16;
  if ( *a16 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( *((_BYTE *)v35 + v36) );
    v37 = v36 + 1;
  }
  else
  {
    v35 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v37 = 1;
  }
  v77 = v37;
  v74 = a15;
  v76 = v35;
  v78 = 0;
  v75 = 4LL;
  v38 = *a14;
  if ( *a14 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( *((_BYTE *)v38 + v39) );
    v40 = v39 + 1;
  }
  else
  {
    v38 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v40 = 1;
  }
  v72 = v40;
  v69 = a13;
  v71 = v38;
  v73 = 0;
  v70 = 4LL;
  v41 = *a12;
  if ( *a12 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( v41[v42] );
    v24 = 2 * v42 + 2;
  }
  else
  {
    v41 = &LocaleName;
  }
  v64 = a11;
  v66 = v41;
  v67 = v24;
  v68 = 0;
  v43 = *a10;
  v65 = 4LL;
  if ( v43 )
  {
    v44 = -1LL;
    do
      ++v44;
    while ( *((_BYTE *)v43 + v44) );
    v45 = v44 + 1;
  }
  else
  {
    v43 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v45 = 1;
  }
  v62 = v45;
  v59 = a9;
  v61 = v43;
  v63 = 0;
  v60 = 4LL;
  v46 = *a8;
  if ( *a8 )
  {
    do
      ++v23;
    while ( *((_BYTE *)v46 + v23) );
    v47 = v23 + 1;
  }
  else
  {
    v46 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v47 = 1;
  }
  v54 = a7;
  v52 = a6;
  v50 = a5;
  v56 = v46;
  v57 = v47;
  v58 = 0;
  v55 = 4LL;
  v53 = 8LL;
  v51 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 0x13u, &v49);
}
