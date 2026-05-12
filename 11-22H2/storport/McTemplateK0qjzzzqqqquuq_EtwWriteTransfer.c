/*
 * XREFs of McTemplateK0qjzzzqqqquuq_EtwWriteTransfer @ 0x1C0033000
 * Callers:
 *     StorLogMFNDNSPageMapControl @ 0x1C003DE04 (StorLogMFNDNSPageMapControl.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0014E0C (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzzzqqqquuq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const wchar_t *a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15)
{
  const wchar_t *v15; // r11
  const wchar_t *v16; // rcx
  const wchar_t *v18; // rdx
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
  char *v46; // [rsp+C8h] [rbp-40h]
  __int64 v47; // [rsp+D0h] [rbp-38h]
  char *v48; // [rsp+D8h] [rbp-30h]
  __int64 v49; // [rsp+E0h] [rbp-28h]
  char *v50; // [rsp+E8h] [rbp-20h]
  __int64 v51; // [rsp+F0h] [rbp-18h]
  char *v52; // [rsp+F8h] [rbp-10h]
  __int64 v53; // [rsp+100h] [rbp-8h]
  int v54; // [rsp+150h] [rbp+48h] BYREF

  v54 = a4;
  v15 = a8;
  v16 = a7;
  v28 = &v54;
  v18 = a6;
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
    v18 = L"NULL";
  v32 = v18;
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
    v16 = L"NULL";
  v34 = v16;
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
    v15 = L"NULL";
  v38 = v19;
  v37 = v15;
  v40 = &a9;
  v39 = 0;
  v42 = &a10;
  v41 = 4LL;
  v44 = &a11;
  v43 = 4LL;
  v46 = &a12;
  v48 = &a13;
  v50 = &a14;
  v52 = &a15;
  v45 = 4LL;
  v47 = 4LL;
  v49 = 1LL;
  v51 = 1LL;
  v53 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v16, a2, 0LL, 0xDu, &v27);
}
