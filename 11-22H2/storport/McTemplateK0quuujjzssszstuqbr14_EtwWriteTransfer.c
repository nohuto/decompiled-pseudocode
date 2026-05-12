/*
 * XREFs of McTemplateK0quuujjzssszstuqbr14_EtwWriteTransfer @ 0x1C006A95C
 * Callers:
 *     StorpTelemetrySendUnitNvmeLogPage @ 0x1C00721A8 (StorpTelemetrySendUnitNvmeLogPage.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0014E0C (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
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
  const char *v20; // rdi
  const wchar_t *v21; // r10
  const char *v22; // rbx
  const char *v23; // r11
  const char *v24; // r8
  int v25; // esi
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // r9d
  __int64 v29; // rcx
  int v30; // ecx
  __int64 v31; // rcx
  int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // rcx
  bool v35; // zf
  int v36; // eax
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+38h] [rbp-D0h] BYREF
  int *v39; // [rsp+48h] [rbp-C0h]
  __int64 v40; // [rsp+50h] [rbp-B8h]
  char *v41; // [rsp+58h] [rbp-B0h]
  __int64 v42; // [rsp+60h] [rbp-A8h]
  char *v43; // [rsp+68h] [rbp-A0h]
  __int64 v44; // [rsp+70h] [rbp-98h]
  char *v45; // [rsp+78h] [rbp-90h]
  __int64 v46; // [rsp+80h] [rbp-88h]
  __int64 v47; // [rsp+88h] [rbp-80h]
  __int64 v48; // [rsp+90h] [rbp-78h]
  __int64 v49; // [rsp+98h] [rbp-70h]
  __int64 v50; // [rsp+A0h] [rbp-68h]
  const wchar_t *v51; // [rsp+A8h] [rbp-60h]
  int v52; // [rsp+B0h] [rbp-58h]
  int v53; // [rsp+B4h] [rbp-54h]
  const char *v54; // [rsp+B8h] [rbp-50h]
  int v55; // [rsp+C0h] [rbp-48h]
  int v56; // [rsp+C4h] [rbp-44h]
  const char *v57; // [rsp+C8h] [rbp-40h]
  int v58; // [rsp+D0h] [rbp-38h]
  int v59; // [rsp+D4h] [rbp-34h]
  const char *v60; // [rsp+D8h] [rbp-30h]
  int v61; // [rsp+E0h] [rbp-28h]
  int v62; // [rsp+E4h] [rbp-24h]
  const wchar_t *v63; // [rsp+E8h] [rbp-20h]
  int v64; // [rsp+F0h] [rbp-18h]
  int v65; // [rsp+F4h] [rbp-14h]
  const char *v66; // [rsp+F8h] [rbp-10h]
  int v67; // [rsp+100h] [rbp-8h]
  int v68; // [rsp+104h] [rbp-4h]
  char *v69; // [rsp+108h] [rbp+0h]
  __int64 v70; // [rsp+110h] [rbp+8h]
  char *v71; // [rsp+118h] [rbp+10h]
  __int64 v72; // [rsp+120h] [rbp+18h]
  int *v73; // [rsp+128h] [rbp+20h]
  __int64 v74; // [rsp+130h] [rbp+28h]
  __int64 v75; // [rsp+138h] [rbp+30h]
  int v76; // [rsp+140h] [rbp+38h]
  int v77; // [rsp+144h] [rbp+3Ch]
  int v78; // [rsp+1A0h] [rbp+98h] BYREF

  v78 = a4;
  v19 = a10;
  v20 = a15;
  v21 = a14;
  v22 = a13;
  v23 = a12;
  v24 = a11;
  v39 = &v78;
  v25 = 10;
  v40 = 4LL;
  v41 = &a5;
  v43 = &a6;
  v45 = &a7;
  v47 = a8;
  v49 = a9;
  v26 = -1LL;
  v42 = 1LL;
  v44 = 1LL;
  v46 = 1LL;
  v48 = 16LL;
  v50 = 16LL;
  if ( a10 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a10[v27] );
    v28 = 2 * v27 + 2;
  }
  else
  {
    v28 = 10;
  }
  v52 = v28;
  v53 = 0;
  if ( !a10 )
    v19 = L"NULL";
  v51 = v19;
  if ( a11 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a11[v29] );
    v30 = v29 + 1;
  }
  else
  {
    v30 = 5;
  }
  v55 = v30;
  v56 = 0;
  if ( !a11 )
    v24 = "NULL";
  v54 = v24;
  if ( a12 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( a12[v31] );
    v32 = v31 + 1;
  }
  else
  {
    v32 = 5;
  }
  v58 = v32;
  v59 = 0;
  if ( !a12 )
    v23 = "NULL";
  v57 = v23;
  if ( a13 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( a13[v33] );
    v34 = (unsigned int)(v33 + 1);
  }
  else
  {
    v34 = 5LL;
  }
  v61 = v34;
  v62 = 0;
  if ( !a13 )
    v22 = "NULL";
  v60 = v22;
  v35 = a14 == 0LL;
  if ( a14 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a14[v34] );
    v25 = 2 * v34 + 2;
    v35 = a14 == 0LL;
  }
  if ( v35 )
    v21 = L"NULL";
  v64 = v25;
  v63 = v21;
  v65 = 0;
  if ( a15 )
  {
    do
      ++v26;
    while ( a15[v26] );
    v36 = v26 + 1;
  }
  else
  {
    v36 = 5;
  }
  v67 = v36;
  v68 = 0;
  v69 = &a16;
  v70 = 4LL;
  v71 = &a17;
  if ( !a15 )
    v20 = "NULL";
  v66 = v20;
  v73 = &a18;
  v75 = a19;
  v76 = a18;
  v72 = 1LL;
  v74 = 4LL;
  v77 = 0;
  return McGenEventWrite_EtwWriteTransfer(v34, &DeviceLogPage, 0LL, 0x11u, &v38);
}
