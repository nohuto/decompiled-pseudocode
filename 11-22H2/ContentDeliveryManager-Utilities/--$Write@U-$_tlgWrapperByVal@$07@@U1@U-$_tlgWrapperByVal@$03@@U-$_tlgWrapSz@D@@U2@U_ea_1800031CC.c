/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@4545645644545@Z @ 0x1800031CC
 * Callers:
 *     ?Stop@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIPEBD@Z @ 0x180094DC4 (-Stop@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background.c)
 *     ?Stop@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAX_NPEBD@Z @ 0x180095044 (-Stop@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryM.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001D54 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
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
        const wchar_t **a12,
        __int64 a13,
        const wchar_t **a14,
        __int64 a15,
        const wchar_t **a16,
        const wchar_t **a17,
        __int64 a18,
        const wchar_t **a19,
        const wchar_t **a20,
        __int64 a21,
        __int64 a22,
        const wchar_t **a23,
        __int64 a24,
        const wchar_t **a25)
{
  __int64 v27; // rdx
  const wchar_t *v28; // r8
  __int64 v29; // rax
  int v30; // eax
  const wchar_t *v31; // r8
  __int64 v32; // rax
  int v33; // eax
  int v34; // r10d
  const wchar_t *v35; // r8
  __int64 v36; // rax
  int v37; // r9d
  const wchar_t *v38; // r8
  __int64 v39; // rax
  int v40; // eax
  const wchar_t *v41; // r8
  __int64 v42; // rax
  int v43; // r9d
  const wchar_t *v44; // r8
  __int64 v45; // rax
  int v46; // eax
  const wchar_t *v47; // r8
  __int64 v48; // rax
  int v49; // eax
  const wchar_t *v50; // r8
  __int64 v51; // rax
  const wchar_t *v52; // r8
  __int64 v53; // rax
  int v54; // eax
  const wchar_t *v55; // r8
  int v56; // edx
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v59; // [rsp+50h] [rbp-B0h]
  __int64 v60; // [rsp+58h] [rbp-A8h]
  __int64 v61; // [rsp+60h] [rbp-A0h]
  __int64 v62; // [rsp+68h] [rbp-98h]
  __int64 v63; // [rsp+70h] [rbp-90h]
  __int64 v64; // [rsp+78h] [rbp-88h]
  const wchar_t *v65; // [rsp+80h] [rbp-80h]
  int v66; // [rsp+88h] [rbp-78h]
  int v67; // [rsp+8Ch] [rbp-74h]
  __int64 v68; // [rsp+90h] [rbp-70h]
  __int64 v69; // [rsp+98h] [rbp-68h]
  const wchar_t *v70; // [rsp+A0h] [rbp-60h]
  int v71; // [rsp+A8h] [rbp-58h]
  int v72; // [rsp+ACh] [rbp-54h]
  __int64 v73; // [rsp+B0h] [rbp-50h]
  __int64 v74; // [rsp+B8h] [rbp-48h]
  const wchar_t *v75; // [rsp+C0h] [rbp-40h]
  int v76; // [rsp+C8h] [rbp-38h]
  int v77; // [rsp+CCh] [rbp-34h]
  __int64 v78; // [rsp+D0h] [rbp-30h]
  __int64 v79; // [rsp+D8h] [rbp-28h]
  const wchar_t *v80; // [rsp+E0h] [rbp-20h]
  int v81; // [rsp+E8h] [rbp-18h]
  int v82; // [rsp+ECh] [rbp-14h]
  __int64 v83; // [rsp+F0h] [rbp-10h]
  __int64 v84; // [rsp+F8h] [rbp-8h]
  const wchar_t *v85; // [rsp+100h] [rbp+0h]
  int v86; // [rsp+108h] [rbp+8h]
  int v87; // [rsp+10Ch] [rbp+Ch]
  const wchar_t *v88; // [rsp+110h] [rbp+10h]
  int v89; // [rsp+118h] [rbp+18h]
  int v90; // [rsp+11Ch] [rbp+1Ch]
  __int64 v91; // [rsp+120h] [rbp+20h]
  __int64 v92; // [rsp+128h] [rbp+28h]
  const wchar_t *v93; // [rsp+130h] [rbp+30h]
  int v94; // [rsp+138h] [rbp+38h]
  int v95; // [rsp+13Ch] [rbp+3Ch]
  const wchar_t *v96; // [rsp+140h] [rbp+40h]
  int v97; // [rsp+148h] [rbp+48h]
  int v98; // [rsp+14Ch] [rbp+4Ch]
  __int64 v99; // [rsp+150h] [rbp+50h]
  __int64 v100; // [rsp+158h] [rbp+58h]
  __int64 v101; // [rsp+160h] [rbp+60h]
  __int64 v102; // [rsp+168h] [rbp+68h]
  const wchar_t *v103; // [rsp+170h] [rbp+70h]
  int v104; // [rsp+178h] [rbp+78h]
  int v105; // [rsp+17Ch] [rbp+7Ch]
  __int64 v106; // [rsp+180h] [rbp+80h]
  __int64 v107; // [rsp+188h] [rbp+88h]
  const wchar_t *v108; // [rsp+190h] [rbp+90h]
  int v109; // [rsp+198h] [rbp+98h]
  int v110; // [rsp+19Ch] [rbp+9Ch]

  v27 = -1LL;
  v28 = *a25;
  if ( *a25 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( *((_BYTE *)v28 + v29) );
    v30 = v29 + 1;
  }
  else
  {
    v28 = &word_1801070C0;
    v30 = 1;
  }
  v109 = v30;
  v106 = a24;
  v108 = v28;
  v110 = 0;
  v107 = 4LL;
  v31 = *a23;
  if ( *a23 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( *((_BYTE *)v31 + v32) );
    v33 = v32 + 1;
  }
  else
  {
    v31 = &word_1801070C0;
    v33 = 1;
  }
  v104 = v33;
  v34 = 2;
  v101 = a22;
  v99 = a21;
  v103 = v31;
  v105 = 0;
  v102 = 4LL;
  v35 = *a20;
  v100 = 4LL;
  if ( v35 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( v35[v36] );
    v37 = 2 * v36 + 2;
  }
  else
  {
    v35 = &word_1801070C4;
    v37 = 2;
  }
  v96 = v35;
  v97 = v37;
  v98 = 0;
  v38 = *a19;
  if ( *a19 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( *((_BYTE *)v38 + v39) );
    v40 = v39 + 1;
  }
  else
  {
    v38 = &word_1801070C0;
    v40 = 1;
  }
  v94 = v40;
  v91 = a18;
  v93 = v38;
  v95 = 0;
  v92 = 4LL;
  v41 = *a17;
  if ( *a17 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( v41[v42] );
    v43 = 2 * v42 + 2;
  }
  else
  {
    v41 = &word_1801070C4;
    v43 = 2;
  }
  v88 = v41;
  v89 = v43;
  v90 = 0;
  v44 = *a16;
  if ( *a16 )
  {
    v45 = -1LL;
    do
      ++v45;
    while ( *((_BYTE *)v44 + v45) );
    v46 = v45 + 1;
  }
  else
  {
    v44 = &word_1801070C0;
    v46 = 1;
  }
  v86 = v46;
  v83 = a15;
  v85 = v44;
  v87 = 0;
  v84 = 4LL;
  v47 = *a14;
  if ( *a14 )
  {
    v48 = -1LL;
    do
      ++v48;
    while ( *((_BYTE *)v47 + v48) );
    v49 = v48 + 1;
  }
  else
  {
    v47 = &word_1801070C0;
    v49 = 1;
  }
  v81 = v49;
  v78 = a13;
  v80 = v47;
  v82 = 0;
  v79 = 4LL;
  v50 = *a12;
  if ( *a12 )
  {
    v51 = -1LL;
    do
      ++v51;
    while ( v50[v51] );
    v34 = 2 * v51 + 2;
  }
  else
  {
    v50 = &word_1801070C4;
  }
  v73 = a11;
  v75 = v50;
  v76 = v34;
  v77 = 0;
  v52 = *a10;
  v74 = 4LL;
  if ( v52 )
  {
    v53 = -1LL;
    do
      ++v53;
    while ( *((_BYTE *)v52 + v53) );
    v54 = v53 + 1;
  }
  else
  {
    v52 = &word_1801070C0;
    v54 = 1;
  }
  v71 = v54;
  v68 = a9;
  v70 = v52;
  v72 = 0;
  v69 = 4LL;
  v55 = *a8;
  if ( *a8 )
  {
    do
      ++v27;
    while ( *((_BYTE *)v55 + v27) );
    v56 = v27 + 1;
  }
  else
  {
    v55 = &word_1801070C0;
    v56 = 1;
  }
  v63 = a7;
  v61 = a6;
  v59 = a5;
  v65 = v55;
  v66 = v56;
  v67 = 0;
  v64 = 4LL;
  v62 = 8LL;
  v60 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 0x17u, &v58);
}
