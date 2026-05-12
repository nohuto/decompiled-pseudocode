/*
 * XREFs of McTemplateK0quuujjzsszstxqqbr14uhqbr18_EtwWriteTransfer @ 0x1C006ABE4
 * Callers:
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C00208E4 (StorpTelemetrySendUnitNvmeHealthInfo.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0014E0C (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
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
        __int64 a16,
        char a17,
        int a18,
        __int64 a19,
        char a20,
        char a21,
        int a22,
        __int64 a23)
{
  const wchar_t *v23; // rdx
  const char *v24; // rdi
  const wchar_t *v25; // r9
  const char *v26; // r10
  const char *v27; // r8
  int v28; // ebx
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // r11d
  __int64 v32; // rcx
  int v33; // ecx
  __int64 v34; // rcx
  __int64 v35; // rcx
  bool v36; // zf
  int v37; // eax
  __int64 v39; // [rsp+38h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+48h] [rbp-C0h] BYREF
  int *v41; // [rsp+58h] [rbp-B0h]
  __int64 v42; // [rsp+60h] [rbp-A8h]
  char *v43; // [rsp+68h] [rbp-A0h]
  __int64 v44; // [rsp+70h] [rbp-98h]
  char *v45; // [rsp+78h] [rbp-90h]
  __int64 v46; // [rsp+80h] [rbp-88h]
  char *v47; // [rsp+88h] [rbp-80h]
  __int64 v48; // [rsp+90h] [rbp-78h]
  __int64 v49; // [rsp+98h] [rbp-70h]
  __int64 v50; // [rsp+A0h] [rbp-68h]
  __int64 v51; // [rsp+A8h] [rbp-60h]
  __int64 v52; // [rsp+B0h] [rbp-58h]
  const wchar_t *v53; // [rsp+B8h] [rbp-50h]
  int v54; // [rsp+C0h] [rbp-48h]
  int v55; // [rsp+C4h] [rbp-44h]
  const char *v56; // [rsp+C8h] [rbp-40h]
  int v57; // [rsp+D0h] [rbp-38h]
  int v58; // [rsp+D4h] [rbp-34h]
  const char *v59; // [rsp+D8h] [rbp-30h]
  int v60; // [rsp+E0h] [rbp-28h]
  int v61; // [rsp+E4h] [rbp-24h]
  const wchar_t *v62; // [rsp+E8h] [rbp-20h]
  int v63; // [rsp+F0h] [rbp-18h]
  int v64; // [rsp+F4h] [rbp-14h]
  const char *v65; // [rsp+F8h] [rbp-10h]
  int v66; // [rsp+100h] [rbp-8h]
  int v67; // [rsp+104h] [rbp-4h]
  char *v68; // [rsp+108h] [rbp+0h]
  __int64 v69; // [rsp+110h] [rbp+8h]
  __int64 *v70; // [rsp+118h] [rbp+10h]
  __int64 v71; // [rsp+120h] [rbp+18h]
  char *v72; // [rsp+128h] [rbp+20h]
  __int64 v73; // [rsp+130h] [rbp+28h]
  int *v74; // [rsp+138h] [rbp+30h]
  __int64 v75; // [rsp+140h] [rbp+38h]
  __int64 v76; // [rsp+148h] [rbp+40h]
  int v77; // [rsp+150h] [rbp+48h]
  int v78; // [rsp+154h] [rbp+4Ch]
  char *v79; // [rsp+158h] [rbp+50h]
  __int64 v80; // [rsp+160h] [rbp+58h]
  char *v81; // [rsp+168h] [rbp+60h]
  __int64 v82; // [rsp+170h] [rbp+68h]
  int *v83; // [rsp+178h] [rbp+70h]
  __int64 v84; // [rsp+180h] [rbp+78h]
  __int64 v85; // [rsp+188h] [rbp+80h]
  int v86; // [rsp+190h] [rbp+88h]
  int v87; // [rsp+194h] [rbp+8Ch]
  int v88; // [rsp+1F0h] [rbp+E8h] BYREF

  v88 = a4;
  v23 = a10;
  v24 = a14;
  v25 = a13;
  v26 = a12;
  v27 = a11;
  v28 = 10;
  v39 = *(_QWORD *)&g_SystemUptime_s;
  v41 = &v88;
  v43 = &a5;
  v45 = &a6;
  v47 = &a7;
  v49 = a8;
  v51 = a9;
  v29 = -1LL;
  v42 = 4LL;
  v44 = 1LL;
  v46 = 1LL;
  v48 = 1LL;
  v50 = 16LL;
  v52 = 16LL;
  if ( a10 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( a10[v30] );
    v31 = 2 * v30 + 2;
  }
  else
  {
    v31 = 10;
  }
  v54 = v31;
  v55 = 0;
  if ( !a10 )
    v23 = L"NULL";
  v53 = v23;
  if ( a11 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a11[v32] );
    v33 = v32 + 1;
  }
  else
  {
    v33 = 5;
  }
  v57 = v33;
  v58 = 0;
  if ( !a11 )
    v27 = "NULL";
  v56 = v27;
  if ( a12 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a12[v34] );
    v35 = (unsigned int)(v34 + 1);
  }
  else
  {
    v35 = 5LL;
  }
  v60 = v35;
  v61 = 0;
  if ( !a12 )
    v26 = "NULL";
  v59 = v26;
  v36 = a13 == 0LL;
  if ( a13 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( a13[v35] );
    v28 = 2 * v35 + 2;
    v36 = a13 == 0LL;
  }
  if ( v36 )
    v25 = L"NULL";
  v63 = v28;
  v62 = v25;
  v64 = 0;
  if ( a14 )
  {
    do
      ++v29;
    while ( a14[v29] );
    v37 = v29 + 1;
  }
  else
  {
    v37 = 5;
  }
  v66 = v37;
  v67 = 0;
  v68 = &a15;
  v69 = 4LL;
  v70 = &v39;
  if ( !a14 )
    v24 = "NULL";
  v65 = v24;
  v72 = &a17;
  v71 = 8LL;
  v74 = &a18;
  v76 = a19;
  v77 = a18;
  v79 = &a20;
  v81 = &a21;
  v83 = &a22;
  v85 = a23;
  v86 = a22;
  v73 = 4LL;
  v75 = 4LL;
  v78 = 0;
  v80 = 1LL;
  v82 = 2LL;
  v84 = 4LL;
  v87 = 0;
  return McGenEventWrite_EtwWriteTransfer(v35, &EventUnitNvmeHealthLog, 0LL, 0x15u, &v40);
}
