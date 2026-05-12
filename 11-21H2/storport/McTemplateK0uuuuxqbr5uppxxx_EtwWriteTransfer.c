/*
 * XREFs of McTemplateK0uuuuxqbr5uppxxx_EtwWriteTransfer @ 0x1C0059B20
 * Callers:
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C005B01C (StorEtwLogoRequestServiceTimeEventData.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013144 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0uuuuxqbr5uppxxx_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        char a4,
        char a5,
        char a6,
        char a7,
        char a8,
        int a9,
        __int64 a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16)
{
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-D0h] BYREF
  char *v18; // [rsp+40h] [rbp-C0h]
  __int64 v19; // [rsp+48h] [rbp-B8h]
  char *v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+58h] [rbp-A8h]
  char *v22; // [rsp+60h] [rbp-A0h]
  __int64 v23; // [rsp+68h] [rbp-98h]
  char *v24; // [rsp+70h] [rbp-90h]
  __int64 v25; // [rsp+78h] [rbp-88h]
  char *v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  int *v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  __int64 v30; // [rsp+A0h] [rbp-60h]
  int v31; // [rsp+A8h] [rbp-58h]
  int v32; // [rsp+ACh] [rbp-54h]
  char *v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  char *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  char *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  char *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  char *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  char *v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]
  char v45; // [rsp+148h] [rbp+48h] BYREF

  v45 = a4;
  v19 = 1LL;
  v18 = &v45;
  v21 = 1LL;
  v20 = &a5;
  v22 = &a6;
  v24 = &a7;
  v23 = 1LL;
  v26 = &a8;
  v28 = &a9;
  v30 = a10;
  v31 = a9;
  v33 = &a11;
  v35 = &a12;
  v37 = &a13;
  v39 = &a14;
  v41 = &a15;
  v43 = &a16;
  v25 = 1LL;
  v27 = 8LL;
  v29 = 4LL;
  v32 = 0;
  v34 = 1LL;
  v36 = 8LL;
  v38 = 8LL;
  v40 = 8LL;
  v42 = 8LL;
  v44 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, a3, 0xEu, &v17);
}
