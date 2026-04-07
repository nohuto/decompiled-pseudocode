/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U3@U2@U2@U2@U2@U2@U2@U1@U1@U2@U1@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4444AEBU?$_tlgWrapperByVal@$07@@544444433434AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800053A0
 * Callers:
 *     ?SendAnimationLastFrameTelemetry@CAnimationFrameStats@@IEAAXXZ @ 0x180004F30 (-SendAnimationLastFrameTelemetry@CAnimationFrameStats@@IEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180005630 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        void **a19,
        void **a20,
        __int64 a21,
        void **a22,
        __int64 a23,
        __int64 a24)
{
  __int64 v26; // rcx
  int v27; // r8d
  _WORD *v28; // rdx
  __int64 v29; // rax
  int v30; // r9d
  _WORD *v31; // rdx
  __int64 v32; // rax
  int v33; // r9d
  _WORD *v34; // rdx
  __int64 v35; // rax
  int v36; // r9d
  _WORD *v37; // rdx
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+30h] [rbp-D0h] BYREF
  _WORD *v40; // [rsp+50h] [rbp-B0h]
  int v41; // [rsp+58h] [rbp-A8h]
  int v42; // [rsp+5Ch] [rbp-A4h]
  __int64 v43; // [rsp+60h] [rbp-A0h]
  __int64 v44; // [rsp+68h] [rbp-98h]
  __int64 v45; // [rsp+70h] [rbp-90h]
  __int64 v46; // [rsp+78h] [rbp-88h]
  __int64 v47; // [rsp+80h] [rbp-80h]
  __int64 v48; // [rsp+88h] [rbp-78h]
  __int64 v49; // [rsp+90h] [rbp-70h]
  __int64 v50; // [rsp+98h] [rbp-68h]
  __int64 v51; // [rsp+A0h] [rbp-60h]
  __int64 v52; // [rsp+A8h] [rbp-58h]
  __int64 v53; // [rsp+B0h] [rbp-50h]
  __int64 v54; // [rsp+B8h] [rbp-48h]
  __int64 v55; // [rsp+C0h] [rbp-40h]
  __int64 v56; // [rsp+C8h] [rbp-38h]
  __int64 v57; // [rsp+D0h] [rbp-30h]
  __int64 v58; // [rsp+D8h] [rbp-28h]
  __int64 v59; // [rsp+E0h] [rbp-20h]
  __int64 v60; // [rsp+E8h] [rbp-18h]
  __int64 v61; // [rsp+F0h] [rbp-10h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  __int64 v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h]
  __int64 v65; // [rsp+110h] [rbp+10h]
  __int64 v66; // [rsp+118h] [rbp+18h]
  __int64 v67; // [rsp+120h] [rbp+20h]
  __int64 v68; // [rsp+128h] [rbp+28h]
  _WORD *v69; // [rsp+130h] [rbp+30h]
  int v70; // [rsp+138h] [rbp+38h]
  int v71; // [rsp+13Ch] [rbp+3Ch]
  _WORD *v72; // [rsp+140h] [rbp+40h]
  int v73; // [rsp+148h] [rbp+48h]
  int v74; // [rsp+14Ch] [rbp+4Ch]
  __int64 v75; // [rsp+150h] [rbp+50h]
  __int64 v76; // [rsp+158h] [rbp+58h]
  _WORD *v77; // [rsp+160h] [rbp+60h]
  int v78; // [rsp+168h] [rbp+68h]
  int v79; // [rsp+16Ch] [rbp+6Ch]
  __int64 v80; // [rsp+170h] [rbp+70h]
  __int64 v81; // [rsp+178h] [rbp+78h]
  __int64 v82; // [rsp+180h] [rbp+80h]
  __int64 v83; // [rsp+188h] [rbp+88h]

  v82 = a24;
  v80 = a23;
  v26 = -1LL;
  v27 = 2;
  v83 = 1LL;
  v81 = 4LL;
  v28 = *a22;
  if ( *a22 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( v28[v29] );
    v30 = 2 * v29 + 2;
  }
  else
  {
    v28 = &unk_180118A5C;
    v30 = 2;
  }
  v75 = a21;
  v77 = v28;
  v78 = v30;
  v79 = 0;
  v31 = *a20;
  v76 = 4LL;
  if ( v31 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( v31[v32] );
    v33 = 2 * v32 + 2;
  }
  else
  {
    v31 = &unk_180118A5C;
    v33 = 2;
  }
  v72 = v31;
  v73 = v33;
  v74 = 0;
  v34 = *a19;
  if ( *a19 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( v34[v35] );
    v36 = 2 * v35 + 2;
  }
  else
  {
    v34 = &unk_180118A5C;
    v36 = 2;
  }
  v67 = a18;
  v65 = a17;
  v63 = a16;
  v61 = a15;
  v59 = a14;
  v57 = a13;
  v55 = a12;
  v53 = a11;
  v51 = a10;
  v49 = a9;
  v47 = a8;
  v45 = a7;
  v43 = a6;
  v69 = v34;
  v70 = v36;
  v71 = 0;
  v37 = *a5;
  v68 = 4LL;
  v66 = 4LL;
  v64 = 4LL;
  v62 = 4LL;
  v60 = 4LL;
  v58 = 4LL;
  v56 = 8LL;
  v54 = 8LL;
  v52 = 4LL;
  v50 = 4LL;
  v48 = 4LL;
  v46 = 4LL;
  v44 = 4LL;
  if ( v37 )
  {
    do
      ++v26;
    while ( v37[v26] );
    v27 = 2 * v26 + 2;
  }
  else
  {
    v37 = &unk_180118A5C;
  }
  v40 = v37;
  v41 = v27;
  v42 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0, 0, 0x16u, &v39);
}
