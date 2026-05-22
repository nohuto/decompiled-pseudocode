/*
 * XREFs of McTemplateU0qqqqqffffhhbr10hbr12_EventWriteTransfer @ 0x1800FAA1C
 * Callers:
 *     ?EtwLogPrimitives@CPrimitiveGroup@DirectComposition@@AEAAXPEBUBatchedOccluder@2@@Z @ 0x1800F9BC4 (-EtwLogPrimitives@CPrimitiveGroup@DirectComposition@@AEAAXPEBUBatchedOccluder@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800E5E3C (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0qqqqqffffhhbr10hbr12_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        int a12,
        unsigned __int16 a13,
        __int64 a14,
        unsigned __int16 a15,
        __int64 a16)
{
  __int16 v17; // [rsp+30h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+40h] [rbp-C0h] BYREF
  int *v19; // [rsp+50h] [rbp-B0h]
  __int64 v20; // [rsp+58h] [rbp-A8h]
  int *v21; // [rsp+60h] [rbp-A0h]
  __int64 v22; // [rsp+68h] [rbp-98h]
  char *v23; // [rsp+70h] [rbp-90h]
  __int64 v24; // [rsp+78h] [rbp-88h]
  char *v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  char *v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  char *v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  char *v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  char *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  char *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  __int16 *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  unsigned __int16 *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  __int64 v41; // [rsp+100h] [rbp+0h]
  int v42; // [rsp+108h] [rbp+8h]
  int v43; // [rsp+10Ch] [rbp+Ch]
  unsigned __int16 *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  __int64 v46; // [rsp+120h] [rbp+20h]
  int v47; // [rsp+128h] [rbp+28h]
  int v48; // [rsp+12Ch] [rbp+2Ch]
  int v49; // [rsp+160h] [rbp+60h] BYREF
  int v50; // [rsp+168h] [rbp+68h] BYREF

  v50 = a4;
  v49 = a3;
  v20 = 4LL;
  v43 = 0;
  v17 = 20;
  v19 = &v49;
  v21 = &v50;
  v48 = 0;
  v23 = &a5;
  v22 = 4LL;
  v25 = &a6;
  v27 = &a7;
  v29 = &a8;
  v31 = &a9;
  v33 = &a10;
  v35 = &a11;
  v37 = &v17;
  v39 = &a13;
  v41 = a14;
  v42 = a13;
  v44 = &a15;
  v46 = a16;
  v47 = a15;
  v24 = 4LL;
  v26 = 4LL;
  v28 = 4LL;
  v30 = 4LL;
  v32 = 4LL;
  v34 = 4LL;
  v36 = 4LL;
  v38 = 2LL;
  v40 = 2LL;
  v45 = 2LL;
  return McGenEventWrite_EventWriteTransfer(a1, &DCOMPEVENT_PRIMITIVE_GROUP_UPDATE, a3, 0xFu, &v18);
}
