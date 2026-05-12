/*
 * XREFs of McTemplateK0quuujjzsszstxqqbr14uhqbr18_EtwWriteTransfer @ 0x1C005D910
 * Callers:
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C0063D00 (StorpTelemetrySendUnitNvmeHealthInfo.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013144 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjzsszstxqqbr14uhqbr18_EtwWriteTransfer(
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
        const wchar_t *a13,
        const char *a14,
        char a15,
        int a16,
        char a17,
        int a18,
        __int64 a19,
        char a20,
        char a21,
        int a22,
        __int64 a23)
{
  const wchar_t *v23; // rcx
  int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // r8d
  const char *v28; // rdx
  __int64 v29; // rcx
  int v30; // ecx
  const char *v31; // rdx
  __int64 v32; // rcx
  int v33; // ecx
  const wchar_t *v34; // rcx
  bool v35; // zf
  __int64 v36; // rdx
  const char *v37; // rcx
  int v38; // eax
  __int64 v40; // [rsp+38h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+48h] [rbp-C0h] BYREF
  int *v42; // [rsp+58h] [rbp-B0h]
  __int64 v43; // [rsp+60h] [rbp-A8h]
  char *v44; // [rsp+68h] [rbp-A0h]
  __int64 v45; // [rsp+70h] [rbp-98h]
  char *v46; // [rsp+78h] [rbp-90h]
  __int64 v47; // [rsp+80h] [rbp-88h]
  char *v48; // [rsp+88h] [rbp-80h]
  __int64 v49; // [rsp+90h] [rbp-78h]
  __int64 v50; // [rsp+98h] [rbp-70h]
  __int64 v51; // [rsp+A0h] [rbp-68h]
  __int64 v52; // [rsp+A8h] [rbp-60h]
  __int64 v53; // [rsp+B0h] [rbp-58h]
  const wchar_t *v54; // [rsp+B8h] [rbp-50h]
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
  __int64 *v71; // [rsp+118h] [rbp+10h]
  __int64 v72; // [rsp+120h] [rbp+18h]
  char *v73; // [rsp+128h] [rbp+20h]
  __int64 v74; // [rsp+130h] [rbp+28h]
  int *v75; // [rsp+138h] [rbp+30h]
  __int64 v76; // [rsp+140h] [rbp+38h]
  __int64 v77; // [rsp+148h] [rbp+40h]
  int v78; // [rsp+150h] [rbp+48h]
  int v79; // [rsp+154h] [rbp+4Ch]
  char *v80; // [rsp+158h] [rbp+50h]
  __int64 v81; // [rsp+160h] [rbp+58h]
  char *v82; // [rsp+168h] [rbp+60h]
  __int64 v83; // [rsp+170h] [rbp+68h]
  int *v84; // [rsp+178h] [rbp+70h]
  __int64 v85; // [rsp+180h] [rbp+78h]
  __int64 v86; // [rsp+188h] [rbp+80h]
  int v87; // [rsp+190h] [rbp+88h]
  int v88; // [rsp+194h] [rbp+8Ch]
  int v89; // [rsp+1D0h] [rbp+C8h] BYREF

  v89 = a4;
  v23 = a10;
  v40 = *(_QWORD *)&g_SystemUptime_s;
  v42 = &v89;
  v44 = &a5;
  v43 = 4LL;
  v46 = &a6;
  v24 = 10;
  v45 = 1LL;
  v48 = &a7;
  v50 = a8;
  v52 = a9;
  v25 = -1LL;
  v47 = 1LL;
  v49 = 1LL;
  v51 = 16LL;
  v53 = 16LL;
  if ( a10 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a10[v26] );
    v27 = 2 * v26 + 2;
  }
  else
  {
    v27 = 10;
  }
  v28 = a11;
  v55 = v27;
  v56 = 0;
  if ( !a10 )
    v23 = L"NULL";
  v54 = v23;
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
  v58 = v30;
  v59 = 0;
  if ( !a11 )
    v28 = "NULL";
  v57 = v28;
  v31 = a12;
  if ( a12 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a12[v32] );
    v33 = v32 + 1;
  }
  else
  {
    v33 = 5;
  }
  v61 = v33;
  v34 = a13;
  if ( !a12 )
    v31 = "NULL";
  v62 = 0;
  v60 = v31;
  v35 = a13 == 0LL;
  if ( a13 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( a13[v36] );
    v24 = 2 * v36 + 2;
    v35 = a13 == 0LL;
  }
  if ( v35 )
    v34 = L"NULL";
  v64 = v24;
  v63 = v34;
  v37 = a14;
  v65 = 0;
  if ( a14 )
  {
    do
      ++v25;
    while ( a14[v25] );
    v38 = v25 + 1;
  }
  else
  {
    v38 = 5;
  }
  v67 = v38;
  v68 = 0;
  v69 = &a15;
  v70 = 4LL;
  v71 = &v40;
  if ( !a14 )
    v37 = "NULL";
  v66 = v37;
  v73 = &a17;
  v72 = 8LL;
  v75 = &a18;
  v77 = a19;
  v78 = a18;
  v80 = &a20;
  v82 = &a21;
  v84 = &a22;
  v86 = a23;
  v87 = a22;
  v74 = 4LL;
  v76 = 4LL;
  v79 = 0;
  v81 = 1LL;
  v83 = 2LL;
  v85 = 4LL;
  v88 = 0;
  return McGenEventWrite_EtwWriteTransfer((__int64)v37, &EventUnitNvmeHealthLog, 0LL, 0x15u, &v41);
}
