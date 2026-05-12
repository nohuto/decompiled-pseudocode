/*
 * XREFs of McTemplateK0quuujjzssszstuqbr14_EtwWriteTransfer @ 0x1C005D690
 * Callers:
 *     StorpTelemetrySendUnitNvmeLogPage @ 0x1C006424C (StorpTelemetrySendUnitNvmeLogPage.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013144 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjzssszstuqbr14_EtwWriteTransfer(
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
        const char *a15,
        char a16,
        char a17,
        int a18,
        __int64 a19)
{
  const wchar_t *v19; // rdx
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // r8d
  const char *v24; // rdx
  __int64 v25; // rcx
  int v26; // ecx
  const char *v27; // rdx
  __int64 v28; // rcx
  int v29; // ecx
  const char *v30; // rdx
  __int64 v31; // rcx
  int v32; // ecx
  const wchar_t *v33; // rcx
  bool v34; // zf
  __int64 v35; // rdx
  const char *v36; // rcx
  int v37; // eax
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+38h] [rbp-D0h] BYREF
  int *v40; // [rsp+48h] [rbp-C0h]
  __int64 v41; // [rsp+50h] [rbp-B8h]
  char *v42; // [rsp+58h] [rbp-B0h]
  __int64 v43; // [rsp+60h] [rbp-A8h]
  char *v44; // [rsp+68h] [rbp-A0h]
  __int64 v45; // [rsp+70h] [rbp-98h]
  char *v46; // [rsp+78h] [rbp-90h]
  __int64 v47; // [rsp+80h] [rbp-88h]
  __int64 v48; // [rsp+88h] [rbp-80h]
  __int64 v49; // [rsp+90h] [rbp-78h]
  __int64 v50; // [rsp+98h] [rbp-70h]
  __int64 v51; // [rsp+A0h] [rbp-68h]
  const wchar_t *v52; // [rsp+A8h] [rbp-60h]
  int v53; // [rsp+B0h] [rbp-58h]
  int v54; // [rsp+B4h] [rbp-54h]
  const char *v55; // [rsp+B8h] [rbp-50h]
  int v56; // [rsp+C0h] [rbp-48h]
  int v57; // [rsp+C4h] [rbp-44h]
  const char *v58; // [rsp+C8h] [rbp-40h]
  int v59; // [rsp+D0h] [rbp-38h]
  int v60; // [rsp+D4h] [rbp-34h]
  const char *v61; // [rsp+D8h] [rbp-30h]
  int v62; // [rsp+E0h] [rbp-28h]
  int v63; // [rsp+E4h] [rbp-24h]
  const wchar_t *v64; // [rsp+E8h] [rbp-20h]
  int v65; // [rsp+F0h] [rbp-18h]
  int v66; // [rsp+F4h] [rbp-14h]
  const char *v67; // [rsp+F8h] [rbp-10h]
  int v68; // [rsp+100h] [rbp-8h]
  int v69; // [rsp+104h] [rbp-4h]
  char *v70; // [rsp+108h] [rbp+0h]
  __int64 v71; // [rsp+110h] [rbp+8h]
  char *v72; // [rsp+118h] [rbp+10h]
  __int64 v73; // [rsp+120h] [rbp+18h]
  int *v74; // [rsp+128h] [rbp+20h]
  __int64 v75; // [rsp+130h] [rbp+28h]
  __int64 v76; // [rsp+138h] [rbp+30h]
  int v77; // [rsp+140h] [rbp+38h]
  int v78; // [rsp+144h] [rbp+3Ch]
  int v79; // [rsp+180h] [rbp+78h] BYREF

  v79 = a4;
  v19 = a10;
  v40 = &v79;
  v41 = 4LL;
  v42 = &a5;
  v44 = &a6;
  v46 = &a7;
  v20 = 10;
  v48 = a8;
  v50 = a9;
  v21 = -1LL;
  v43 = 1LL;
  v45 = 1LL;
  v47 = 1LL;
  v49 = 16LL;
  v51 = 16LL;
  if ( a10 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a10[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v23 = 10;
  }
  v53 = v23;
  v54 = 0;
  if ( !a10 )
    v19 = L"NULL";
  v52 = v19;
  v24 = a11;
  if ( a11 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a11[v25] );
    v26 = v25 + 1;
  }
  else
  {
    v26 = 5;
  }
  v56 = v26;
  v57 = 0;
  if ( !a11 )
    v24 = "NULL";
  v55 = v24;
  v27 = a12;
  if ( a12 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a12[v28] );
    v29 = v28 + 1;
  }
  else
  {
    v29 = 5;
  }
  v59 = v29;
  v60 = 0;
  if ( !a12 )
    v27 = "NULL";
  v58 = v27;
  v30 = a13;
  if ( a13 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( a13[v31] );
    v32 = v31 + 1;
  }
  else
  {
    v32 = 5;
  }
  v62 = v32;
  v33 = a14;
  if ( !a13 )
    v30 = "NULL";
  v63 = 0;
  v61 = v30;
  v34 = a14 == 0LL;
  if ( a14 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( a14[v35] );
    v20 = 2 * v35 + 2;
    v34 = a14 == 0LL;
  }
  if ( v34 )
    v33 = L"NULL";
  v65 = v20;
  v64 = v33;
  v36 = a15;
  v66 = 0;
  if ( a15 )
  {
    do
      ++v21;
    while ( a15[v21] );
    v37 = v21 + 1;
  }
  else
  {
    v37 = 5;
  }
  v68 = v37;
  v69 = 0;
  v70 = &a16;
  v71 = 4LL;
  v72 = &a17;
  if ( !a15 )
    v36 = "NULL";
  v67 = v36;
  v74 = &a18;
  v76 = a19;
  v77 = a18;
  v73 = 1LL;
  v75 = 4LL;
  v78 = 0;
  return McGenEventWrite_EtwWriteTransfer((__int64)v36, &DeviceLogPage, 0LL, 0x11u, &v39);
}
