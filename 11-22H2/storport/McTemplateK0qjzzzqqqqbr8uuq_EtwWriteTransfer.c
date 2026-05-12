/*
 * XREFs of McTemplateK0qjzzzqqqqbr8uuq_EtwWriteTransfer @ 0x1C0075B90
 * Callers:
 *     StorLogMFNDQueryChildPFList @ 0x1C00763E4 (StorLogMFNDQueryChildPFList.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0014E0C (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzzzqqqqbr8uuq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const wchar_t *a8,
        char a9,
        char a10,
        char a11,
        int a12,
        __int64 a13,
        char a14,
        char a15,
        char a16)
{
  const wchar_t *v16; // rdx
  const wchar_t *v17; // r11
  const wchar_t *v18; // rcx
  int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // r8
  unsigned int v22; // r10d
  __int64 v23; // rdx
  int v24; // r8d
  bool v25; // zf
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+38h] [rbp-D0h] BYREF
  int *v28; // [rsp+48h] [rbp-C0h]
  __int64 v29; // [rsp+50h] [rbp-B8h]
  __int64 v30; // [rsp+58h] [rbp-B0h]
  __int64 v31; // [rsp+60h] [rbp-A8h]
  const wchar_t *v32; // [rsp+68h] [rbp-A0h]
  __int64 v33; // [rsp+70h] [rbp-98h]
  const wchar_t *v34; // [rsp+78h] [rbp-90h]
  int v35; // [rsp+80h] [rbp-88h]
  int v36; // [rsp+84h] [rbp-84h]
  const wchar_t *v37; // [rsp+88h] [rbp-80h]
  int v38; // [rsp+90h] [rbp-78h]
  int v39; // [rsp+94h] [rbp-74h]
  char *v40; // [rsp+98h] [rbp-70h]
  __int64 v41; // [rsp+A0h] [rbp-68h]
  char *v42; // [rsp+A8h] [rbp-60h]
  __int64 v43; // [rsp+B0h] [rbp-58h]
  char *v44; // [rsp+B8h] [rbp-50h]
  __int64 v45; // [rsp+C0h] [rbp-48h]
  int *v46; // [rsp+C8h] [rbp-40h]
  __int64 v47; // [rsp+D0h] [rbp-38h]
  __int64 v48; // [rsp+D8h] [rbp-30h]
  int v49; // [rsp+E0h] [rbp-28h]
  int v50; // [rsp+E4h] [rbp-24h]
  char *v51; // [rsp+E8h] [rbp-20h]
  __int64 v52; // [rsp+F0h] [rbp-18h]
  char *v53; // [rsp+F8h] [rbp-10h]
  __int64 v54; // [rsp+100h] [rbp-8h]
  char *v55; // [rsp+108h] [rbp+0h]
  __int64 v56; // [rsp+110h] [rbp+8h]
  int v57; // [rsp+150h] [rbp+48h] BYREF

  v57 = a4;
  v16 = a6;
  v17 = a8;
  v18 = a7;
  v28 = &v57;
  v30 = a5;
  v19 = 10;
  v20 = -1LL;
  v29 = 4LL;
  v31 = 16LL;
  if ( a6 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a6[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10;
  }
  v33 = v22;
  if ( !a6 )
    v16 = L"NULL";
  v32 = v16;
  if ( a7 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a7[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v24 = 10;
  }
  v35 = v24;
  v36 = 0;
  if ( !a7 )
    v18 = L"NULL";
  v34 = v18;
  v25 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v20;
    while ( a8[v20] );
    v19 = 2 * v20 + 2;
    v25 = a8 == 0LL;
  }
  if ( v25 )
    v17 = L"NULL";
  v38 = v19;
  v37 = v17;
  v40 = &a9;
  v39 = 0;
  v42 = &a10;
  v41 = 4LL;
  v44 = &a11;
  v43 = 4LL;
  v46 = &a12;
  v48 = a13;
  v49 = a12;
  v51 = &a14;
  v53 = &a15;
  v55 = &a16;
  v45 = 4LL;
  v47 = 4LL;
  v50 = 0;
  v52 = 1LL;
  v54 = 1LL;
  v56 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v18, &EventMFNDQueryChildPFList, 0LL, 0xEu, &v27);
}
