/*
 * XREFs of PmSendTelemetry @ 0x1C0020134
 * Callers:
 *     ?PmNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0001F80 (-PmNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U4@U4@U4@U4@U4@U3@U1@U?$_tlgWrapperByRef@$0BA@@@U5@U5@U5@U2@U2@U1@U1@U1@U1@U_tlgWrapperBinary@@U1@U1@U1@U1@U2@U2@U2@U1@U1@U1@U2@U2@U2@U3@U3@U1@U1@U1@U1@U1@U2@U3@U1@U1@U1@U?$_tlgWrapSz@G@@U1@U2@U1@U1@U6@U6@U6@U6@U6@U6@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$00@@3333AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@6666653AEBU?$_tlgWrapperByRef@$0BA@@@777443333AEBU_tlgWrapperBinary@@3333444333444553333345333AEBU?$_tlgWrapSz@G@@3433888888@Z @ 0x1C0005EA0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U-$_tlgWrapperBy.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U4@U4@U4@U4@U4@U3@U1@U?$_tlgWrapperByRef@$0BA@@@U5@U5@U5@U2@U2@U1@U1@U1@U1@U_tlgWrapperBinary@@U1@U1@U1@U1@U2@U2@U2@U1@U1@U1@U2@U2@U2@U3@U3@U1@U1@U1@U1@U1@U2@U3@U1@U1@U1@U?$_tlgWrapSz@G@@U1@U2@U1@U1@U6@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$00@@3333AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@6666653AEBU?$_tlgWrapperByRef@$0BA@@@777443333AEBU_tlgWrapperBinary@@3333444333444553333345333AEBU?$_tlgWrapSz@G@@34338@Z @ 0x1C0007148 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U-$_ea_1C0007148.c)
 *     _tlgKeywordOn @ 0x1C0007B80 (_tlgKeywordOn.c)
 *     McTemplateK0qqqtqqqqxqzzzzzzdddddddddxqjjjjtuqqqqqbr37qqqqtttqqqtttxxqqqqqtxqqqzqtqqqbr69qbr71qbr73qbr75qbr77qbr79_EtwWriteTransfer @ 0x1C0007BB4 (McTemplateK0qqqtqqqqxqzzzzzzdddddddddxqjjjjtuqqqqqbr37qqqqtttqqqtttxxqqqqqtxqqqzqtqqqbr69qbr71qb.c)
 *     ?PmFreeTelemetry@@YAXPEAU_DISK_TELEMETRY_INFO@@@Z @ 0x1C00200A0 (-PmFreeTelemetry@@YAXPEAU_DISK_TELEMETRY_INFO@@@Z.c)
 *     ?PmCollectTelemetry@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAU_DISK_TELEMETRY_INFO@@@Z @ 0x1C0021608 (-PmCollectTelemetry@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAU_DISK_TELEMETRY_INFO@@@Z.c)
 */

void __fastcall PmSendTelemetry(struct _DEVICE_EXTENSION *a1)
{
  struct _KMUTANT *v1; // rdi
  struct _DEVICE_EXTENSION *v2; // rbx
  int v3; // r8d
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // esi
  char v8; // dl
  char v9; // r8
  char v10; // r9
  char v11; // r10
  char v12; // r11
  char v13; // bl
  char v14; // di
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // [rsp+1D8h] [rbp-148h]
  int v19; // [rsp+1E0h] [rbp-140h]
  int v20; // [rsp+1E8h] [rbp-138h]
  char v21; // [rsp+2A0h] [rbp-80h] BYREF
  char v22; // [rsp+2A1h] [rbp-7Fh] BYREF
  char v23; // [rsp+2A2h] [rbp-7Eh] BYREF
  char v24; // [rsp+2A3h] [rbp-7Dh] BYREF
  char v25; // [rsp+2A4h] [rbp-7Ch] BYREF
  char v26; // [rsp+2A5h] [rbp-7Bh] BYREF
  _BYTE v27[2]; // [rsp+2A6h] [rbp-7Ah] BYREF
  PVOID P; // [rsp+2A8h] [rbp-78h] BYREF
  int v29; // [rsp+2B0h] [rbp-70h] BYREF
  int v30; // [rsp+2B4h] [rbp-6Ch] BYREF
  int v31; // [rsp+2B8h] [rbp-68h] BYREF
  int v32; // [rsp+2BCh] [rbp-64h] BYREF
  int v33; // [rsp+2C0h] [rbp-60h] BYREF
  int v34; // [rsp+2C4h] [rbp-5Ch] BYREF
  int v35; // [rsp+2C8h] [rbp-58h] BYREF
  int v36; // [rsp+2CCh] [rbp-54h] BYREF
  int v37; // [rsp+2D0h] [rbp-50h] BYREF
  int v38; // [rsp+2D4h] [rbp-4Ch] BYREF
  int v39; // [rsp+2D8h] [rbp-48h] BYREF
  int v40; // [rsp+2DCh] [rbp-44h] BYREF
  int v41; // [rsp+2E0h] [rbp-40h] BYREF
  int v42; // [rsp+2E4h] [rbp-3Ch] BYREF
  int v43; // [rsp+2E8h] [rbp-38h] BYREF
  int v44; // [rsp+2ECh] [rbp-34h] BYREF
  int v45; // [rsp+2F0h] [rbp-30h] BYREF
  int v46; // [rsp+2F4h] [rbp-2Ch] BYREF
  int v47; // [rsp+2F8h] [rbp-28h] BYREF
  int v48; // [rsp+2FCh] [rbp-24h] BYREF
  int v49; // [rsp+300h] [rbp-20h] BYREF
  int v50; // [rsp+304h] [rbp-1Ch] BYREF
  int v51; // [rsp+308h] [rbp-18h] BYREF
  int v52; // [rsp+30Ch] [rbp-14h] BYREF
  int v53; // [rsp+310h] [rbp-10h] BYREF
  int v54; // [rsp+314h] [rbp-Ch] BYREF
  int v55; // [rsp+318h] [rbp-8h] BYREF
  int v56; // [rsp+31Ch] [rbp-4h] BYREF
  int v57; // [rsp+320h] [rbp+0h] BYREF
  int v58; // [rsp+324h] [rbp+4h] BYREF
  int v59; // [rsp+328h] [rbp+8h] BYREF
  int v60; // [rsp+32Ch] [rbp+Ch] BYREF
  __int64 v61; // [rsp+330h] [rbp+10h] BYREF
  const wchar_t **v62; // [rsp+338h] [rbp+18h] BYREF
  const wchar_t **v63; // [rsp+340h] [rbp+20h] BYREF
  const wchar_t **v64; // [rsp+348h] [rbp+28h] BYREF
  _WORD *v65; // [rsp+350h] [rbp+30h] BYREF
  unsigned __int16 *v66; // [rsp+358h] [rbp+38h] BYREF
  unsigned __int16 *v67; // [rsp+360h] [rbp+40h] BYREF
  unsigned __int16 *v68; // [rsp+368h] [rbp+48h] BYREF
  unsigned __int16 *v69; // [rsp+370h] [rbp+50h] BYREF
  unsigned __int16 *v70; // [rsp+378h] [rbp+58h] BYREF
  unsigned __int16 *v71; // [rsp+380h] [rbp+60h] BYREF
  __int64 v72; // [rsp+388h] [rbp+68h] BYREF
  unsigned __int16 *v73; // [rsp+390h] [rbp+70h] BYREF
  unsigned __int16 *v74; // [rsp+398h] [rbp+78h] BYREF
  unsigned __int16 *v75; // [rsp+3A0h] [rbp+80h] BYREF
  __int64 v76; // [rsp+3A8h] [rbp+88h] BYREF
  __int64 v77; // [rsp+3B0h] [rbp+90h]
  __int16 v78; // [rsp+3B8h] [rbp+98h]
  __int64 v79; // [rsp+3C0h] [rbp+A0h] BYREF
  __int16 v80; // [rsp+3C8h] [rbp+A8h]
  __int64 v81; // [rsp+3D0h] [rbp+B0h]
  __int16 v82; // [rsp+3D8h] [rbp+B8h]
  __int64 v83; // [rsp+3E0h] [rbp+C0h]
  __int16 v84; // [rsp+3E8h] [rbp+C8h]
  __int64 v85; // [rsp+3F0h] [rbp+D0h]
  __int16 v86; // [rsp+3F8h] [rbp+D8h]
  __int64 v87; // [rsp+400h] [rbp+E0h]
  __int16 v88; // [rsp+408h] [rbp+E8h]
  __int64 v89; // [rsp+410h] [rbp+F0h] BYREF
  __int16 v90; // [rsp+418h] [rbp+F8h]
  int v91; // [rsp+470h] [rbp+150h] BYREF
  int v92; // [rsp+478h] [rbp+158h] BYREF
  __int64 v93; // [rsp+480h] [rbp+160h] BYREF
  __int64 v94; // [rsp+488h] [rbp+168h] BYREF

  P = 0LL;
  v1 = (struct _KMUTANT *)((char *)a1 + 56);
  v2 = a1;
  KeWaitForSingleObject((char *)a1 + 56, Executive, 0, 0, 0LL);
  LODWORD(v2) = PmCollectTelemetry(v2, (struct _DISK_TELEMETRY_INFO **)&P);
  KeReleaseMutex(v1, 0);
  if ( (int)v2 >= 0 )
  {
    v3 = *((_DWORD *)P + 92);
    if ( v3 )
    {
      if ( v3 == 1 && (unsigned int)dword_1C0017048 > 5 && tlgKeywordOn() )
      {
        v77 = *(_QWORD *)(v4 + 384);
        v78 = *(_WORD *)(v4 + 376);
        v60 = *(_DWORD *)(v4 + 372);
        v29 = v5;
        LOBYTE(v91) = *(_BYTE *)(v4 + 364);
        v30 = *(_DWORD *)(v4 + 360);
        v65 = *(_WORD **)(v4 + 352);
        v31 = *(_DWORD *)(v4 + 344);
        v32 = *(_DWORD *)(v4 + 340);
        v33 = *(_DWORD *)(v4 + 336);
        v66 = *(unsigned __int16 **)(v4 + 328);
        LOBYTE(v92) = *(_BYTE *)(v4 + 324);
        v34 = *(_DWORD *)(v4 + 320);
        v35 = *(_DWORD *)(v4 + 316);
        v36 = *(_DWORD *)(v4 + 312);
        v37 = *(_DWORD *)(v4 + 308);
        v38 = *(_DWORD *)(v4 + 304);
        v67 = *(unsigned __int16 **)(v4 + 296);
        v68 = *(unsigned __int16 **)(v4 + 288);
        LOBYTE(v93) = *(_BYTE *)(v4 + 286);
        LOBYTE(v94) = *(_BYTE *)(v4 + 285);
        v21 = *(_BYTE *)(v4 + 284);
        v39 = *(_DWORD *)(v4 + 280);
        v40 = *(_DWORD *)(v4 + 276);
        v41 = *(_DWORD *)(v4 + 272);
        v22 = *(_BYTE *)(v4 + 270);
        v23 = *(_BYTE *)(v4 + 269);
        v24 = *(_BYTE *)(v4 + 268);
        v42 = *(_DWORD *)(v4 + 264);
        v43 = *(_DWORD *)(v4 + 260);
        v44 = *(_DWORD *)(v4 + 256);
        v45 = *(_DWORD *)(v4 + 252);
        v79 = *(_QWORD *)(v4 + 240);
        v80 = *(_WORD *)(v4 + 248);
        v46 = *(_DWORD *)(v4 + 236);
        v47 = *(_DWORD *)(v4 + 232);
        v48 = *(_DWORD *)(v4 + 228);
        v49 = *(_DWORD *)(v4 + 224);
        v25 = *(_BYTE *)(v4 + 221);
        v26 = *(_BYTE *)(v4 + 220);
        v69 = (unsigned __int16 *)(v4 + 204);
        v70 = (unsigned __int16 *)(v4 + 188);
        v71 = (unsigned __int16 *)(v4 + 172);
        v72 = v4 + 156;
        v50 = *(_DWORD *)(v4 + 152);
        v76 = *(_QWORD *)(v4 + 144);
        v73 = *(unsigned __int16 **)(v4 + 96);
        v74 = *(unsigned __int16 **)(v4 + 88);
        v75 = *(unsigned __int16 **)(v4 + 72);
        v62 = *(const wchar_t ***)(v4 + 64);
        v63 = *(const wchar_t ***)(v4 + 56);
        v64 = *(const wchar_t ***)(v4 + 48);
        v51 = *(_DWORD *)(v4 + 40);
        v61 = *(_QWORD *)(v4 + 32);
        v52 = *(_DWORD *)(v4 + 28);
        v53 = *(_DWORD *)(v4 + 24);
        v54 = *(_DWORD *)(v4 + 20);
        v55 = *(_DWORD *)(v4 + 16);
        v27[0] = *(_BYTE *)(v4 + 12);
        v56 = *(_DWORD *)(v4 + 8);
        v57 = *(_DWORD *)(v4 + 4);
        v58 = *(_DWORD *)v4;
        v59 = 4;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
          v4,
          (int)&unk_1C001328A,
          v5,
          v6,
          (__int64)&v59,
          (__int64)&v58,
          (__int64)&v57,
          (__int64)&v56,
          (__int64)v27,
          (__int64)&v55,
          (__int64)&v54,
          (__int64)&v53,
          (__int64)&v52,
          (__int64)&v61,
          (__int64)&v51,
          (unsigned __int16 **)&v64,
          (unsigned __int16 **)&v63,
          (unsigned __int16 **)&v62,
          &v75,
          &v74,
          &v73,
          (__int64)&v76,
          (__int64)&v50,
          &v72,
          (__int64 *)&v71,
          (__int64 *)&v70,
          (__int64 *)&v69,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v49,
          (__int64)&v48,
          (__int64)&v47,
          (__int64)&v46,
          &v79,
          (__int64)&v45,
          (__int64)&v44,
          (__int64)&v43,
          (__int64)&v42,
          (__int64)&v24,
          (__int64)&v23,
          (__int64)&v22,
          (__int64)&v41,
          (__int64)&v40,
          (__int64)&v39,
          (__int64)&v21,
          (__int64)&v94,
          (__int64)&v93,
          (__int64)&v68,
          (__int64)&v67,
          (__int64)&v38,
          (__int64)&v37,
          (__int64)&v36,
          (__int64)&v35,
          (__int64)&v34,
          (__int64)&v92,
          (__int64)&v66,
          (__int64)&v33,
          (__int64)&v32,
          (__int64)&v31,
          &v65,
          (__int64)&v30,
          (__int64)&v91,
          (__int64)&v29);
      }
    }
    else if ( (unsigned int)dword_1C0017048 > 5 && tlgKeywordOn() )
    {
      v79 = *(_QWORD *)(v15 + 432);
      v80 = *(_WORD *)(v15 + 452);
      v77 = *(_QWORD *)(v15 + 424);
      v78 = *(_WORD *)(v15 + 448);
      v81 = *(_QWORD *)(v15 + 416);
      v82 = *(_WORD *)(v15 + 444);
      v83 = *(_QWORD *)(v15 + 408);
      v84 = *(_WORD *)(v15 + 440);
      v85 = *(_QWORD *)(v15 + 392);
      v86 = *(_WORD *)(v15 + 400);
      v87 = *(_QWORD *)(v15 + 384);
      v88 = *(_WORD *)(v15 + 376);
      v59 = *(_DWORD *)(v15 + 372);
      v58 = v16;
      LOBYTE(v91) = *(_BYTE *)(v15 + 364);
      v57 = *(_DWORD *)(v15 + 360);
      v61 = *(_QWORD *)(v15 + 352);
      v56 = *(_DWORD *)(v15 + 344);
      v55 = *(_DWORD *)(v15 + 340);
      v54 = *(_DWORD *)(v15 + 336);
      v64 = *(const wchar_t ***)(v15 + 328);
      LOBYTE(v92) = *(_BYTE *)(v15 + 324);
      v53 = *(_DWORD *)(v15 + 320);
      v52 = *(_DWORD *)(v15 + 316);
      v51 = *(_DWORD *)(v15 + 312);
      v50 = *(_DWORD *)(v15 + 308);
      v49 = *(_DWORD *)(v15 + 304);
      v63 = *(const wchar_t ***)(v15 + 296);
      v62 = *(const wchar_t ***)(v15 + 288);
      LOBYTE(v93) = *(_BYTE *)(v15 + 286);
      LOBYTE(v94) = *(_BYTE *)(v15 + 285);
      v27[0] = *(_BYTE *)(v15 + 284);
      v48 = *(_DWORD *)(v15 + 280);
      v47 = *(_DWORD *)(v15 + 276);
      v46 = *(_DWORD *)(v15 + 272);
      v26 = *(_BYTE *)(v15 + 270);
      v25 = *(_BYTE *)(v15 + 269);
      v24 = *(_BYTE *)(v15 + 268);
      v45 = *(_DWORD *)(v15 + 264);
      v44 = *(_DWORD *)(v15 + 260);
      v43 = *(_DWORD *)(v15 + 256);
      v42 = *(_DWORD *)(v15 + 252);
      v89 = *(_QWORD *)(v15 + 240);
      v90 = *(_WORD *)(v15 + 248);
      v41 = *(_DWORD *)(v15 + 236);
      v40 = *(_DWORD *)(v15 + 232);
      v39 = *(_DWORD *)(v15 + 228);
      v38 = *(_DWORD *)(v15 + 224);
      v23 = *(_BYTE *)(v15 + 221);
      v22 = *(_BYTE *)(v15 + 220);
      v75 = (unsigned __int16 *)(v15 + 204);
      v74 = (unsigned __int16 *)(v15 + 188);
      v73 = (unsigned __int16 *)(v15 + 172);
      v76 = v15 + 156;
      v37 = *(_DWORD *)(v15 + 152);
      v72 = *(_QWORD *)(v15 + 144);
      v71 = *(unsigned __int16 **)(v15 + 96);
      v70 = *(unsigned __int16 **)(v15 + 88);
      v69 = *(unsigned __int16 **)(v15 + 72);
      v68 = *(unsigned __int16 **)(v15 + 64);
      v67 = *(unsigned __int16 **)(v15 + 56);
      v66 = *(unsigned __int16 **)(v15 + 48);
      v36 = *(_DWORD *)(v15 + 40);
      v65 = *(_WORD **)(v15 + 32);
      v35 = *(_DWORD *)(v15 + 28);
      v34 = *(_DWORD *)(v15 + 24);
      v33 = *(_DWORD *)(v15 + 20);
      v32 = *(_DWORD *)(v15 + 16);
      v21 = *(_BYTE *)(v15 + 12);
      v31 = *(_DWORD *)(v15 + 8);
      v30 = *(_DWORD *)(v15 + 4);
      v29 = *(_DWORD *)v15;
      v60 = 4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperBinary,_tlgWrapperBinary,_tlgWrapperBinary,_tlgWrapperBinary,_tlgWrapperBinary>(
        v15,
        (int)&unk_1C0012DF6,
        v16,
        v17,
        (__int64)&v60,
        (__int64)&v29,
        (__int64)&v30,
        (__int64)&v31,
        (__int64)&v21,
        (__int64)&v32,
        (__int64)&v33,
        (__int64)&v34,
        (__int64)&v35,
        (__int64)&v65,
        (__int64)&v36,
        &v66,
        &v67,
        &v68,
        &v69,
        &v70,
        &v71,
        (__int64)&v72,
        (__int64)&v37,
        &v76,
        (__int64 *)&v73,
        (__int64 *)&v74,
        (__int64 *)&v75,
        (__int64)&v22,
        (__int64)&v23,
        (__int64)&v38,
        (__int64)&v39,
        (__int64)&v40,
        (__int64)&v41,
        &v89,
        (__int64)&v42,
        (__int64)&v43,
        (__int64)&v44,
        (__int64)&v45,
        (__int64)&v24,
        (__int64)&v25,
        (__int64)&v26,
        (__int64)&v46,
        (__int64)&v47,
        (__int64)&v48,
        (__int64)v27,
        (__int64)&v94,
        (__int64)&v93,
        (__int64)&v62,
        (__int64)&v63,
        (__int64)&v49,
        (__int64)&v50,
        (__int64)&v51,
        (__int64)&v52,
        (__int64)&v53,
        (__int64)&v92,
        (__int64)&v64,
        (__int64)&v54,
        (__int64)&v55,
        (__int64)&v56,
        &v61,
        (__int64)&v57,
        (__int64)&v91,
        (__int64)&v58);
    }
    if ( (Microsoft_Windows_PartitionEnableBits & 1) != 0 )
    {
      v7 = *((unsigned __int8 *)P + 220);
      v8 = *((_BYTE *)P + 324);
      v9 = *((_BYTE *)P + 286);
      v10 = *((_BYTE *)P + 285);
      v11 = *((_BYTE *)P + 284);
      v12 = *((_BYTE *)P + 270);
      v13 = *((_BYTE *)P + 269);
      v14 = *((_BYTE *)P + 268);
      v93 = *((_QWORD *)P + 12);
      v91 = v7;
      v94 = *((_QWORD *)P + 10);
      v61 = *((_QWORD *)P + 9);
      v64 = (const wchar_t **)*((_QWORD *)P + 8);
      v63 = (const wchar_t **)*((_QWORD *)P + 7);
      v62 = (const wchar_t **)*((_QWORD *)P + 6);
      v92 = *((unsigned __int8 *)P + 12);
      v20 = *((_DWORD *)P + 80);
      v19 = *((_DWORD *)P + 79);
      v18 = *((_DWORD *)P + 78);
      McTemplateK0qqqtqqqqxqzzzzzzdddddddddxqjjjjtuqqqqqbr37qqqqtttqqqtttxxqqqqqtxqqqzqtqqqbr69qbr71qbr73qbr75qbr77qbr79_EtwWriteTransfer(
        (__int64)&Microsoft_Windows_Partition_Context,
        (__int64)&DiskTelemetry,
        0LL,
        *(_DWORD *)P,
        *((_DWORD *)P + 1),
        *((_DWORD *)P + 2),
        v92,
        *((_DWORD *)P + 4),
        *((_DWORD *)P + 5),
        *((_DWORD *)P + 6),
        *((_DWORD *)P + 7),
        *((_QWORD *)P + 4),
        *((_DWORD *)P + 10),
        v62[1],
        v63[1],
        v64[1],
        *(const wchar_t **)(v61 + 8),
        *(const wchar_t **)(v94 + 8),
        *(const wchar_t **)(v93 + 8),
        *((_DWORD *)P + 26),
        *((_DWORD *)P + 27),
        *((_DWORD *)P + 32),
        *((_DWORD *)P + 33),
        *((_DWORD *)P + 34),
        *((_DWORD *)P + 28),
        *((_DWORD *)P + 29),
        *((_DWORD *)P + 30),
        *((_DWORD *)P + 31),
        *((_QWORD *)P + 18),
        *((_DWORD *)P + 38),
        (__int64)P + 156,
        (__int64)P + 172,
        (__int64)P + 188,
        (__int64)P + 204,
        v7,
        *((_BYTE *)P + 221),
        *((_DWORD *)P + 56),
        *((_DWORD *)P + 57),
        *((_DWORD *)P + 58),
        *((_DWORD *)P + 59),
        *((_DWORD *)P + 62),
        *((_QWORD *)P + 30),
        *((_DWORD *)P + 63),
        *((_DWORD *)P + 64),
        *((_DWORD *)P + 65),
        *((_DWORD *)P + 66),
        v14,
        v13,
        v12,
        *((_DWORD *)P + 68),
        *((_DWORD *)P + 69),
        *((_DWORD *)P + 70),
        v11,
        v10,
        v9,
        *((_QWORD *)P + 36),
        *((_QWORD *)P + 37),
        *((_DWORD *)P + 76),
        *((_DWORD *)P + 77),
        v18,
        v19,
        v20,
        v8);
    }
  }
  if ( P )
    PmFreeTelemetry((PVOID *)P);
}
