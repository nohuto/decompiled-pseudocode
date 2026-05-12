/*
 * XREFs of StorpTelemetryLogUnitErrorDataMeasures @ 0x1C001CDA0
 * Callers:
 *     StorpTelemetrySendUnitErrorDataSummary @ 0x1C001B6D8 (StorpTelemetrySendUnitErrorDataSummary.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1C0019D9C (_tlgCreate1Sz_wchar_t.c)
 *     _tlgCreate1Sz_char @ 0x1C0019DF8 (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x1C0019F3C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001C770 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitErrorDataMeasures(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned __int16 *v4; // r10
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // [rsp+30h] [rbp-D0h] BYREF
  char v10; // [rsp+31h] [rbp-CFh] BYREF
  char v11; // [rsp+32h] [rbp-CEh] BYREF
  char v12; // [rsp+33h] [rbp-CDh] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+44h] [rbp-BCh] BYREF
  int v18; // [rsp+48h] [rbp-B8h] BYREF
  int v19; // [rsp+4Ch] [rbp-B4h] BYREF
  int v20; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+54h] [rbp-ACh] BYREF
  int v22; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+70h] [rbp-90h] BYREF
  char *v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  __int64 v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+A8h] [rbp-58h]
  __int64 v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  int *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  char *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  char *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  char *v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  _BYTE v39[16]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v40[16]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v41[16]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v42[16]; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v43; // [rsp+140h] [rbp+40h]
  __int64 v44; // [rsp+148h] [rbp+48h]
  int *v45; // [rsp+150h] [rbp+50h]
  __int64 v46; // [rsp+158h] [rbp+58h]
  int *v47; // [rsp+160h] [rbp+60h]
  __int64 v48; // [rsp+168h] [rbp+68h]
  int *v49; // [rsp+170h] [rbp+70h]
  __int64 v50; // [rsp+178h] [rbp+78h]
  int *v51; // [rsp+180h] [rbp+80h]
  __int64 v52; // [rsp+188h] [rbp+88h]
  int *v53; // [rsp+190h] [rbp+90h]
  __int64 v54; // [rsp+198h] [rbp+98h]
  int *v55; // [rsp+1A0h] [rbp+A0h]
  __int64 v56; // [rsp+1A8h] [rbp+A8h]
  int *v57; // [rsp+1B0h] [rbp+B0h]
  __int64 v58; // [rsp+1B8h] [rbp+B8h]
  _QWORD *v59; // [rsp+1C0h] [rbp+C0h]
  __int64 v60; // [rsp+1C8h] [rbp+C8h]
  __int64 v61; // [rsp+1D0h] [rbp+D0h]
  _QWORD v62[4]; // [rsp+1D8h] [rbp+D8h] BYREF
  _DWORD v63[2]; // [rsp+1F8h] [rbp+F8h] BYREF
  _DWORD *v64; // [rsp+200h] [rbp+100h]
  __int64 v65; // [rsp+208h] [rbp+108h]
  __int64 v66; // [rsp+210h] [rbp+110h]
  _DWORD v67[2]; // [rsp+218h] [rbp+118h] BYREF
  int *v68; // [rsp+220h] [rbp+120h]
  __int64 v69; // [rsp+228h] [rbp+128h]
  int *v70; // [rsp+230h] [rbp+130h]
  __int64 v71; // [rsp+238h] [rbp+138h]

  if ( (unsigned int)dword_1C00920C8 > 5 && tlgKeywordOn(a1, 0x400000000000LL) )
  {
    v3 = *(_QWORD *)(v2 + 24);
    v25 = &v9;
    v9 = 5;
    v26 = 1LL;
    v28 = 16LL;
    v27 = v3 + 5000;
    v29 = v2 + 2024;
    v30 = 16LL;
    v13 = *(_DWORD *)(v3 + 56);
    v31 = &v13;
    v10 = *(_BYTE *)(v2 + 96);
    v33 = &v10;
    v11 = *(_BYTE *)(v2 + 97);
    v35 = &v11;
    v12 = *(_BYTE *)(v2 + 98);
    v37 = &v12;
    v32 = 4LL;
    v34 = 1LL;
    v36 = 1LL;
    v38 = 1LL;
    tlgCreate1Sz_wchar_t((__int64)v39, *(_WORD **)(v3 + 4656));
    tlgCreate1Sz_char((__int64)v40, (_BYTE *)(a1 + 160));
    tlgCreate1Sz_char((__int64)v41, (_BYTE *)(a1 + 169));
    tlgCreate1Sz_char((__int64)v42, (_BYTE *)(a1 + 186));
    v5 = v4[1];
    v43 = &v23;
    v14 = *(_DWORD *)(a1 + 2392);
    v45 = &v14;
    v15 = *(_DWORD *)(a1 + 2396);
    v47 = &v15;
    v16 = *(_DWORD *)(a1 + 2400);
    v49 = &v16;
    v17 = *(_DWORD *)(a1 + 2404);
    v51 = &v17;
    v18 = *(_DWORD *)(a1 + 2184);
    v53 = &v18;
    v23 = *(_QWORD *)&g_SystemUptime_s;
    v6 = *v4;
    v55 = &v19;
    v44 = 8LL;
    v46 = 4LL;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 4LL;
    v54 = 4LL;
    v19 = v6;
    v56 = 4LL;
    v20 = v5;
    v57 = &v20;
    v59 = v62;
    v61 = a1 + 2408;
    v62[1] = v63;
    v62[3] = a1 + 2448;
    v63[0] = 40 * v6;
    v64 = v67;
    v66 = a1 + 2848;
    v67[0] = 40 * v5;
    v21 = *(_DWORD *)(a1 + 2208);
    v68 = &v21;
    v22 = *(_DWORD *)(a1 + 2204);
    v70 = &v22;
    v58 = 4LL;
    v60 = 2LL;
    v62[0] = 40LL;
    v62[2] = 2LL;
    v63[1] = 0;
    v65 = 2LL;
    v67[1] = 0;
    v69 = 4LL;
    v71 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(v6, (unsigned __int8 *)dword_1C00867A4, v7, v8, 0x1Du, &v24);
  }
  *(_QWORD *)(a1 + 2204) = 0LL;
}
