/*
 * XREFs of StorpTelemetryLogUnitErrorDataMeasures @ 0x1C0013718
 * Callers:
 *     StorpTelemetrySendUnitErrorDataSummary @ 0x1C0003CA8 (StorpTelemetrySendUnitErrorDataSummary.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C001354C (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1C0019338 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgCreate1Sz_char @ 0x1C0019CF8 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002017C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitErrorDataMeasures(_DWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned __int16 *v4; // r10
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
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
  char v39[16]; // [rsp+100h] [rbp+0h] BYREF
  char v40[16]; // [rsp+110h] [rbp+10h] BYREF
  char v41[16]; // [rsp+120h] [rbp+20h] BYREF
  char v42[16]; // [rsp+130h] [rbp+30h] BYREF
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
  _DWORD *v61; // [rsp+1D0h] [rbp+D0h]
  _QWORD v62[4]; // [rsp+1D8h] [rbp+D8h] BYREF
  _DWORD v63[2]; // [rsp+1F8h] [rbp+F8h] BYREF
  _DWORD *v64; // [rsp+200h] [rbp+100h]
  __int64 v65; // [rsp+208h] [rbp+108h]
  _DWORD *v66; // [rsp+210h] [rbp+110h]
  _DWORD v67[2]; // [rsp+218h] [rbp+118h] BYREF
  int *v68; // [rsp+220h] [rbp+120h]
  __int64 v69; // [rsp+228h] [rbp+128h]
  int *v70; // [rsp+230h] [rbp+130h]
  __int64 v71; // [rsp+238h] [rbp+138h]

  if ( (unsigned int)dword_1C0079058 > 5 && tlgKeywordOn((__int64)a1, 0x400000000000LL) )
  {
    v3 = *(_QWORD *)(v2 + 24);
    v25 = &v9;
    v9 = 5;
    v26 = 1LL;
    v28 = 16LL;
    v27 = v3 + 4936;
    v29 = v2 + 1976;
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
    tlgCreate1Sz_wchar_t(v39, *(_QWORD *)(v3 + 4592));
    tlgCreate1Sz_char(v40, a1 + 40);
    tlgCreate1Sz_char(v41, (char *)a1 + 169);
    tlgCreate1Sz_char(v42, (char *)a1 + 186);
    v5 = v4[1];
    v43 = &v23;
    v14 = a1[586];
    v45 = &v14;
    v15 = a1[587];
    v47 = &v15;
    v16 = a1[588];
    v49 = &v16;
    v17 = a1[589];
    v51 = &v17;
    v18 = a1[534];
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
    v61 = a1 + 590;
    v62[1] = v63;
    v62[3] = a1 + 600;
    v63[0] = 40 * v6;
    v64 = v67;
    v66 = a1 + 700;
    v67[0] = 40 * v5;
    v21 = a1[540];
    v68 = &v21;
    v22 = a1[539];
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
    tlgWriteTransfer_EtwWriteTransfer(v6, (int)&dword_1C006F5F4, v7, v8, 0x1Du, &v24);
  }
  *(_QWORD *)(a1 + 539) = 0LL;
}
