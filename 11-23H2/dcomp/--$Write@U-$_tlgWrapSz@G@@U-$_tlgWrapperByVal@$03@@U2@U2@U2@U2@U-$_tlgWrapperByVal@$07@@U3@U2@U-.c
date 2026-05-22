/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U3@U2@U?$_tlgWrapperByVal@$01@@U2@U3@U2@U2@U1@U1@U2@U1@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4444AEBU?$_tlgWrapperByVal@$07@@54AEBU?$_tlgWrapperByVal@$01@@454433434AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180014968
 * Callers:
 *     ?SendTelemetry@CAnimationFrameStats@@MEAAXXZ @ 0x180014050 (-SendTelemetry@CAnimationFrameStats@@MEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800849F4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        __int64 a1,
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
  __int64 v24; // rcx
  int v26; // edx
  _WORD *v27; // r8
  __int64 v28; // rax
  int v29; // r9d
  _WORD *v30; // r8
  __int64 v31; // rax
  int v32; // r9d
  _WORD *v33; // r8
  __int64 v34; // rax
  int v35; // r9d
  _WORD *v36; // r8
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+30h] [rbp-D0h] BYREF
  _WORD *v39; // [rsp+50h] [rbp-B0h]
  int v40; // [rsp+58h] [rbp-A8h]
  int v41; // [rsp+5Ch] [rbp-A4h]
  __int64 v42; // [rsp+60h] [rbp-A0h]
  __int64 v43; // [rsp+68h] [rbp-98h]
  __int64 v44; // [rsp+70h] [rbp-90h]
  __int64 v45; // [rsp+78h] [rbp-88h]
  __int64 v46; // [rsp+80h] [rbp-80h]
  __int64 v47; // [rsp+88h] [rbp-78h]
  __int64 v48; // [rsp+90h] [rbp-70h]
  __int64 v49; // [rsp+98h] [rbp-68h]
  __int64 v50; // [rsp+A0h] [rbp-60h]
  __int64 v51; // [rsp+A8h] [rbp-58h]
  __int64 v52; // [rsp+B0h] [rbp-50h]
  __int64 v53; // [rsp+B8h] [rbp-48h]
  __int64 v54; // [rsp+C0h] [rbp-40h]
  __int64 v55; // [rsp+C8h] [rbp-38h]
  __int64 v56; // [rsp+D0h] [rbp-30h]
  __int64 v57; // [rsp+D8h] [rbp-28h]
  __int64 v58; // [rsp+E0h] [rbp-20h]
  __int64 v59; // [rsp+E8h] [rbp-18h]
  __int64 v60; // [rsp+F0h] [rbp-10h]
  __int64 v61; // [rsp+F8h] [rbp-8h]
  __int64 v62; // [rsp+100h] [rbp+0h]
  __int64 v63; // [rsp+108h] [rbp+8h]
  __int64 v64; // [rsp+110h] [rbp+10h]
  __int64 v65; // [rsp+118h] [rbp+18h]
  __int64 v66; // [rsp+120h] [rbp+20h]
  __int64 v67; // [rsp+128h] [rbp+28h]
  _WORD *v68; // [rsp+130h] [rbp+30h]
  int v69; // [rsp+138h] [rbp+38h]
  int v70; // [rsp+13Ch] [rbp+3Ch]
  _WORD *v71; // [rsp+140h] [rbp+40h]
  int v72; // [rsp+148h] [rbp+48h]
  int v73; // [rsp+14Ch] [rbp+4Ch]
  __int64 v74; // [rsp+150h] [rbp+50h]
  __int64 v75; // [rsp+158h] [rbp+58h]
  _WORD *v76; // [rsp+160h] [rbp+60h]
  int v77; // [rsp+168h] [rbp+68h]
  int v78; // [rsp+16Ch] [rbp+6Ch]
  __int64 v79; // [rsp+170h] [rbp+70h]
  __int64 v80; // [rsp+178h] [rbp+78h]
  __int64 v81; // [rsp+180h] [rbp+80h]
  __int64 v82; // [rsp+188h] [rbp+88h]

  v81 = a24;
  v24 = -1LL;
  v79 = a23;
  v26 = 2;
  v82 = 1LL;
  v80 = 4LL;
  v27 = *a22;
  if ( *a22 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( v27[v28] );
    v29 = 2 * v28 + 2;
  }
  else
  {
    v27 = &unk_1801E5750;
    v29 = 2;
  }
  v74 = a21;
  v76 = v27;
  v77 = v29;
  v78 = 0;
  v30 = *a20;
  v75 = 4LL;
  if ( v30 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( v30[v31] );
    v32 = 2 * v31 + 2;
  }
  else
  {
    v30 = &unk_1801E5750;
    v32 = 2;
  }
  v71 = v30;
  v72 = v32;
  v73 = 0;
  v33 = *a19;
  if ( *a19 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( v33[v34] );
    v35 = 2 * v34 + 2;
  }
  else
  {
    v33 = &unk_1801E5750;
    v35 = 2;
  }
  v66 = a18;
  v64 = a17;
  v62 = a16;
  v60 = a15;
  v58 = a14;
  v56 = a13;
  v54 = a12;
  v52 = a11;
  v50 = a10;
  v48 = a9;
  v46 = a8;
  v44 = a7;
  v42 = a6;
  v68 = v33;
  v69 = v35;
  v70 = 0;
  v36 = *a5;
  v67 = 4LL;
  v65 = 4LL;
  v63 = 8LL;
  v61 = 4LL;
  v59 = 2LL;
  v57 = 4LL;
  v55 = 8LL;
  v53 = 8LL;
  v51 = 4LL;
  v49 = 4LL;
  v47 = 4LL;
  v45 = 4LL;
  v43 = 4LL;
  if ( v36 )
  {
    do
      ++v24;
    while ( v36[v24] );
    v26 = 2 * v24 + 2;
  }
  else
  {
    v36 = &unk_1801E5750;
  }
  v39 = v36;
  v40 = v26;
  v41 = 0;
  return tlgWriteTransfer_EventWriteTransfer((int)&dword_1802191E8, a2, 0, 0, 0x16u, &v38);
}
