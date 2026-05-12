/*
 * XREFs of McTemplateK0qjzzzqqqxqqquuq_EtwWriteTransfer @ 0x1C00331C8
 * Callers:
 *     StorLogMFNDNameSpaceWrite @ 0x1C003E15C (StorLogMFNDNameSpaceWrite.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0014E0C (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzzzqqqxqqquuq_EtwWriteTransfer(
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
        char a15,
        char a16,
        char a17,
        char a18)
{
  const wchar_t *v18; // r11
  const wchar_t *v19; // rcx
  const wchar_t *v21; // rdx
  int v22; // r9d
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned int v25; // r10d
  __int64 v26; // rdx
  int v27; // r8d
  bool v28; // zf
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+38h] [rbp-D0h] BYREF
  int *v31; // [rsp+48h] [rbp-C0h]
  __int64 v32; // [rsp+50h] [rbp-B8h]
  __int64 v33; // [rsp+58h] [rbp-B0h]
  __int64 v34; // [rsp+60h] [rbp-A8h]
  const wchar_t *v35; // [rsp+68h] [rbp-A0h]
  __int64 v36; // [rsp+70h] [rbp-98h]
  const wchar_t *v37; // [rsp+78h] [rbp-90h]
  int v38; // [rsp+80h] [rbp-88h]
  int v39; // [rsp+84h] [rbp-84h]
  const wchar_t *v40; // [rsp+88h] [rbp-80h]
  int v41; // [rsp+90h] [rbp-78h]
  int v42; // [rsp+94h] [rbp-74h]
  char *v43; // [rsp+98h] [rbp-70h]
  __int64 v44; // [rsp+A0h] [rbp-68h]
  char *v45; // [rsp+A8h] [rbp-60h]
  __int64 v46; // [rsp+B0h] [rbp-58h]
  char *v47; // [rsp+B8h] [rbp-50h]
  __int64 v48; // [rsp+C0h] [rbp-48h]
  char *v49; // [rsp+C8h] [rbp-40h]
  __int64 v50; // [rsp+D0h] [rbp-38h]
  char *v51; // [rsp+D8h] [rbp-30h]
  __int64 v52; // [rsp+E0h] [rbp-28h]
  char *v53; // [rsp+E8h] [rbp-20h]
  __int64 v54; // [rsp+F0h] [rbp-18h]
  char *v55; // [rsp+F8h] [rbp-10h]
  __int64 v56; // [rsp+100h] [rbp-8h]
  char *v57; // [rsp+108h] [rbp+0h]
  __int64 v58; // [rsp+110h] [rbp+8h]
  char *v59; // [rsp+118h] [rbp+10h]
  __int64 v60; // [rsp+120h] [rbp+18h]
  char *v61; // [rsp+128h] [rbp+20h]
  __int64 v62; // [rsp+130h] [rbp+28h]
  int v63; // [rsp+180h] [rbp+78h] BYREF

  v63 = a4;
  v18 = a8;
  v19 = a7;
  v31 = &v63;
  v21 = a6;
  v33 = a5;
  v22 = 10;
  v23 = -1LL;
  v32 = 4LL;
  v34 = 16LL;
  if ( a6 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a6[v24] );
    v25 = 2 * v24 + 2;
  }
  else
  {
    v25 = 10;
  }
  v36 = v25;
  if ( !a6 )
    v21 = L"NULL";
  v35 = v21;
  if ( a7 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a7[v26] );
    v27 = 2 * v26 + 2;
  }
  else
  {
    v27 = 10;
  }
  v38 = v27;
  v39 = 0;
  if ( !a7 )
    v19 = L"NULL";
  v37 = v19;
  v28 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v23;
    while ( a8[v23] );
    v22 = 2 * v23 + 2;
    v28 = a8 == 0LL;
  }
  if ( v28 )
    v18 = L"NULL";
  v41 = v22;
  v40 = v18;
  v43 = &a9;
  v42 = 0;
  v45 = &a10;
  v44 = 4LL;
  v47 = &a11;
  v46 = 4LL;
  v49 = &a12;
  v51 = &a13;
  v53 = &a14;
  v55 = &a15;
  v57 = &a16;
  v59 = &a17;
  v61 = &a18;
  v48 = 4LL;
  v50 = 8LL;
  v52 = 4LL;
  v54 = 4LL;
  v56 = 4LL;
  v58 = 1LL;
  v60 = 1LL;
  v62 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v19, a2, 0LL, 0x10u, &v30);
}
