/*
 * XREFs of McTemplateU0qqxxxxxxxxxxxxxx_EventWriteTransfer @ 0x1800FBF24
 * Callers:
 *     ?CapMaximumAllocations@CSurfaceManager@DirectComposition@@QEAAX_N@Z @ 0x180026B30 (-CapMaximumAllocations@CSurfaceManager@DirectComposition@@QEAAX_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800E5E3C (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0qqxxxxxxxxxxxxxx_EventWriteTransfer(
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
        char a16,
        char a17,
        char a18)
{
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+30h] [rbp-D0h] BYREF
  int *v20; // [rsp+40h] [rbp-C0h]
  __int64 v21; // [rsp+48h] [rbp-B8h]
  int *v22; // [rsp+50h] [rbp-B0h]
  __int64 v23; // [rsp+58h] [rbp-A8h]
  char *v24; // [rsp+60h] [rbp-A0h]
  __int64 v25; // [rsp+68h] [rbp-98h]
  char *v26; // [rsp+70h] [rbp-90h]
  __int64 v27; // [rsp+78h] [rbp-88h]
  char *v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  char *v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  char *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  char *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  char *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  char *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  char *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  char *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  char *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  char *v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  char *v48; // [rsp+120h] [rbp+20h]
  __int64 v49; // [rsp+128h] [rbp+28h]
  char *v50; // [rsp+130h] [rbp+30h]
  __int64 v51; // [rsp+138h] [rbp+38h]
  int v52; // [rsp+170h] [rbp+70h] BYREF
  int v53; // [rsp+178h] [rbp+78h] BYREF

  v53 = a4;
  v52 = a3;
  v21 = 4LL;
  v20 = &v52;
  v23 = 4LL;
  v22 = &v53;
  v25 = 8LL;
  v24 = &a5;
  v26 = &a6;
  v28 = &a7;
  v30 = &a8;
  v32 = &a9;
  v34 = &a10;
  v36 = &a11;
  v38 = &a12;
  v40 = &a13;
  v42 = &a14;
  v44 = &a15;
  v46 = &a16;
  v48 = &a17;
  v50 = &a18;
  v27 = 8LL;
  v29 = 8LL;
  v31 = 8LL;
  v33 = 8LL;
  v35 = 8LL;
  v37 = 8LL;
  v39 = 8LL;
  v41 = 8LL;
  v43 = 8LL;
  v45 = 8LL;
  v47 = 8LL;
  v49 = 8LL;
  v51 = 8LL;
  return McGenEventWrite_EventWriteTransfer(a1, (const EVENT_DESCRIPTOR *)"&", a3, 0x11u, &v19);
}
