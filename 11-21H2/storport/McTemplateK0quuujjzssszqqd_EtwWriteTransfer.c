/*
 * XREFs of McTemplateK0quuujjzssszqqd_EtwWriteTransfer @ 0x1C004CBB4
 * Callers:
 *     RaidCaptureLiveDump @ 0x1C004E240 (RaidCaptureLiveDump.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013144 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjzssszqqd_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        const wchar_t *a10,
        const char *a11,
        const char *a12,
        const char *a13,
        const wchar_t *a14,
        char a15,
        char a16,
        char a17)
{
  const wchar_t *v17; // rdx
  __int64 v18; // rcx
  int v19; // r9d
  __int64 v20; // rax
  int v21; // r8d
  const char *v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  const char *v25; // rdx
  __int64 v26; // rax
  int v27; // eax
  const char *v28; // rdx
  __int64 v29; // rax
  int v30; // eax
  const wchar_t *v31; // rax
  bool v32; // zf
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+30h] [rbp-D0h] BYREF
  int *v35; // [rsp+40h] [rbp-C0h]
  __int64 v36; // [rsp+48h] [rbp-B8h]
  char *v37; // [rsp+50h] [rbp-B0h]
  __int64 v38; // [rsp+58h] [rbp-A8h]
  char *v39; // [rsp+60h] [rbp-A0h]
  __int64 v40; // [rsp+68h] [rbp-98h]
  char *v41; // [rsp+70h] [rbp-90h]
  __int64 v42; // [rsp+78h] [rbp-88h]
  __int64 v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+88h] [rbp-78h]
  __int64 v45; // [rsp+90h] [rbp-70h]
  __int64 v46; // [rsp+98h] [rbp-68h]
  const wchar_t *v47; // [rsp+A0h] [rbp-60h]
  int v48; // [rsp+A8h] [rbp-58h]
  int v49; // [rsp+ACh] [rbp-54h]
  const char *v50; // [rsp+B0h] [rbp-50h]
  int v51; // [rsp+B8h] [rbp-48h]
  int v52; // [rsp+BCh] [rbp-44h]
  const char *v53; // [rsp+C0h] [rbp-40h]
  int v54; // [rsp+C8h] [rbp-38h]
  int v55; // [rsp+CCh] [rbp-34h]
  const char *v56; // [rsp+D0h] [rbp-30h]
  int v57; // [rsp+D8h] [rbp-28h]
  int v58; // [rsp+DCh] [rbp-24h]
  const wchar_t *v59; // [rsp+E0h] [rbp-20h]
  int v60; // [rsp+E8h] [rbp-18h]
  int v61; // [rsp+ECh] [rbp-14h]
  char *v62; // [rsp+F0h] [rbp-10h]
  __int64 v63; // [rsp+F8h] [rbp-8h]
  char *v64; // [rsp+100h] [rbp+0h]
  __int64 v65; // [rsp+108h] [rbp+8h]
  char *v66; // [rsp+110h] [rbp+10h]
  __int64 v67; // [rsp+118h] [rbp+18h]
  int v68; // [rsp+158h] [rbp+58h] BYREF

  v68 = a4;
  v17 = a10;
  v35 = &v68;
  v36 = 4LL;
  v37 = &a5;
  v18 = -1LL;
  v38 = 1LL;
  v39 = &a6;
  v41 = &a7;
  v19 = 10;
  v43 = a8;
  v45 = a9;
  v40 = 1LL;
  v42 = 1LL;
  v44 = 16LL;
  v46 = 16LL;
  if ( a10 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a10[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v21 = 10;
  }
  v48 = v21;
  v49 = 0;
  if ( !a10 )
    v17 = L"NULL";
  v47 = v17;
  v22 = a11;
  if ( a11 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a11[v23] );
    v24 = v23 + 1;
  }
  else
  {
    v24 = 5;
  }
  v51 = v24;
  v52 = 0;
  if ( !a11 )
    v22 = "NULL";
  v50 = v22;
  v25 = a12;
  if ( a12 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a12[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v27 = 5;
  }
  v54 = v27;
  v55 = 0;
  if ( !a12 )
    v25 = "NULL";
  v53 = v25;
  v28 = a13;
  if ( a13 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a13[v29] );
    v30 = v29 + 1;
  }
  else
  {
    v30 = 5;
  }
  v57 = v30;
  v31 = a14;
  if ( !a13 )
    v28 = "NULL";
  v58 = 0;
  v56 = v28;
  v32 = a14 == 0LL;
  if ( a14 )
  {
    do
      ++v18;
    while ( a14[v18] );
    v19 = 2 * v18 + 2;
    v32 = a14 == 0LL;
  }
  if ( v32 )
    v31 = L"NULL";
  v60 = v19;
  v59 = v31;
  v61 = 0;
  v62 = &a15;
  v63 = 4LL;
  v64 = &a16;
  v65 = 4LL;
  v66 = &a17;
  v67 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v18, &EventCaptureLiveDump, 0LL, 0xFu, &v34);
}
