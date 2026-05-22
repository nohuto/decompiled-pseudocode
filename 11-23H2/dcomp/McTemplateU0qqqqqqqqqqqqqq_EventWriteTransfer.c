/*
 * XREFs of McTemplateU0qqqqqqqqqqqqqq_EventWriteTransfer @ 0x1800FBDC4
 * Callers:
 *     ?ComputeAtlasSize@CSurfaceManager@DirectComposition@@AEAAXAEBUSurfaceRequestStruct@2@W4DXGI_FORMAT@@_NPEAVSizeU@2@@Z @ 0x180083E28 (-ComputeAtlasSize@CSurfaceManager@DirectComposition@@AEAAXAEBUSurfaceRequestStruct@2@W4DXGI_FORM.c)
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800E5E3C (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0qqqqqqqqqqqqqq_EventWriteTransfer(
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
        char a12,
        char a13,
        char a14,
        char a15,
        char a16)
{
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-D0h] BYREF
  int *v18; // [rsp+40h] [rbp-C0h]
  __int64 v19; // [rsp+48h] [rbp-B8h]
  int *v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+58h] [rbp-A8h]
  char *v22; // [rsp+60h] [rbp-A0h]
  __int64 v23; // [rsp+68h] [rbp-98h]
  char *v24; // [rsp+70h] [rbp-90h]
  __int64 v25; // [rsp+78h] [rbp-88h]
  char *v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  char *v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  char *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  char *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  char *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  char *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  char *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  char *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  char *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  char *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  int v46; // [rsp+150h] [rbp+50h] BYREF
  int v47; // [rsp+158h] [rbp+58h] BYREF

  v47 = a4;
  v46 = a3;
  v19 = 4LL;
  v18 = &v46;
  v21 = 4LL;
  v20 = &v47;
  v23 = 4LL;
  v22 = &a5;
  v24 = &a6;
  v26 = &a7;
  v28 = &a8;
  v30 = &a9;
  v32 = &a10;
  v34 = &a11;
  v36 = &a12;
  v38 = &a13;
  v40 = &a14;
  v42 = &a15;
  v44 = &a16;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 4LL;
  v33 = 4LL;
  v35 = 4LL;
  v37 = 4LL;
  v39 = 4LL;
  v41 = 4LL;
  v43 = 4LL;
  v45 = 4LL;
  return McGenEventWrite_EventWriteTransfer(a1, (const EVENT_DESCRIPTOR *)"6", a3, 0xFu, &v17);
}
