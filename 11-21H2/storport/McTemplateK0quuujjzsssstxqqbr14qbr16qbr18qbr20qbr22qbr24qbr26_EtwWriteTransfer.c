/*
 * XREFs of McTemplateK0quuujjzsssstxqqbr14qbr16qbr18qbr20qbr22qbr24qbr26_EtwWriteTransfer @ 0x1C005CAC8
 * Callers:
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C0001310 (StorpTelemetrySendUnitDeviceStatistics.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013144 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjzsssstxqqbr14qbr16qbr18qbr20qbr22qbr24qbr26_EtwWriteTransfer(
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
        const char *a14,
        char a15,
        __int64 a16,
        char a17,
        int a18,
        __int64 a19,
        int a20,
        __int64 a21,
        int a22,
        __int64 a23,
        int a24,
        __int64 a25,
        int a26,
        __int64 a27,
        int a28,
        __int64 a29,
        int a30,
        __int64 a31)
{
  const wchar_t *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  int v34; // r8d
  const char *v35; // rdx
  __int64 v36; // rcx
  int v37; // ecx
  const char *v38; // rdx
  __int64 v39; // rcx
  int v40; // ecx
  const char *v41; // rdx
  __int64 v42; // rcx
  int v43; // ecx
  const char *v44; // rcx
  int v45; // eax
  __int64 v47; // [rsp+30h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+40h] [rbp-C0h] BYREF
  int *v49; // [rsp+50h] [rbp-B0h]
  __int64 v50; // [rsp+58h] [rbp-A8h]
  char *v51; // [rsp+60h] [rbp-A0h]
  __int64 v52; // [rsp+68h] [rbp-98h]
  char *v53; // [rsp+70h] [rbp-90h]
  __int64 v54; // [rsp+78h] [rbp-88h]
  char *v55; // [rsp+80h] [rbp-80h]
  __int64 v56; // [rsp+88h] [rbp-78h]
  __int64 v57; // [rsp+90h] [rbp-70h]
  __int64 v58; // [rsp+98h] [rbp-68h]
  __int64 v59; // [rsp+A0h] [rbp-60h]
  __int64 v60; // [rsp+A8h] [rbp-58h]
  const wchar_t *v61; // [rsp+B0h] [rbp-50h]
  int v62; // [rsp+B8h] [rbp-48h]
  int v63; // [rsp+BCh] [rbp-44h]
  const char *v64; // [rsp+C0h] [rbp-40h]
  int v65; // [rsp+C8h] [rbp-38h]
  int v66; // [rsp+CCh] [rbp-34h]
  const char *v67; // [rsp+D0h] [rbp-30h]
  int v68; // [rsp+D8h] [rbp-28h]
  int v69; // [rsp+DCh] [rbp-24h]
  const char *v70; // [rsp+E0h] [rbp-20h]
  int v71; // [rsp+E8h] [rbp-18h]
  int v72; // [rsp+ECh] [rbp-14h]
  const char *v73; // [rsp+F0h] [rbp-10h]
  int v74; // [rsp+F8h] [rbp-8h]
  int v75; // [rsp+FCh] [rbp-4h]
  char *v76; // [rsp+100h] [rbp+0h]
  __int64 v77; // [rsp+108h] [rbp+8h]
  __int64 *v78; // [rsp+110h] [rbp+10h]
  __int64 v79; // [rsp+118h] [rbp+18h]
  char *v80; // [rsp+120h] [rbp+20h]
  __int64 v81; // [rsp+128h] [rbp+28h]
  int *v82; // [rsp+130h] [rbp+30h]
  __int64 v83; // [rsp+138h] [rbp+38h]
  __int64 v84; // [rsp+140h] [rbp+40h]
  int v85; // [rsp+148h] [rbp+48h]
  int v86; // [rsp+14Ch] [rbp+4Ch]
  int *v87; // [rsp+150h] [rbp+50h]
  __int64 v88; // [rsp+158h] [rbp+58h]
  __int64 v89; // [rsp+160h] [rbp+60h]
  int v90; // [rsp+168h] [rbp+68h]
  int v91; // [rsp+16Ch] [rbp+6Ch]
  int *v92; // [rsp+170h] [rbp+70h]
  __int64 v93; // [rsp+178h] [rbp+78h]
  __int64 v94; // [rsp+180h] [rbp+80h]
  int v95; // [rsp+188h] [rbp+88h]
  int v96; // [rsp+18Ch] [rbp+8Ch]
  int *v97; // [rsp+190h] [rbp+90h]
  __int64 v98; // [rsp+198h] [rbp+98h]
  __int64 v99; // [rsp+1A0h] [rbp+A0h]
  int v100; // [rsp+1A8h] [rbp+A8h]
  int v101; // [rsp+1ACh] [rbp+ACh]
  int *v102; // [rsp+1B0h] [rbp+B0h]
  __int64 v103; // [rsp+1B8h] [rbp+B8h]
  __int64 v104; // [rsp+1C0h] [rbp+C0h]
  int v105; // [rsp+1C8h] [rbp+C8h]
  int v106; // [rsp+1CCh] [rbp+CCh]
  int *v107; // [rsp+1D0h] [rbp+D0h]
  __int64 v108; // [rsp+1D8h] [rbp+D8h]
  __int64 v109; // [rsp+1E0h] [rbp+E0h]
  int v110; // [rsp+1E8h] [rbp+E8h]
  int v111; // [rsp+1ECh] [rbp+ECh]
  int *v112; // [rsp+1F0h] [rbp+F0h]
  __int64 v113; // [rsp+1F8h] [rbp+F8h]
  __int64 v114; // [rsp+200h] [rbp+100h]
  int v115; // [rsp+208h] [rbp+108h]
  int v116; // [rsp+20Ch] [rbp+10Ch]
  int v117; // [rsp+248h] [rbp+148h] BYREF

  v117 = a4;
  v31 = a10;
  v47 = *(_QWORD *)&g_SystemUptime_s;
  v49 = &v117;
  v51 = &a5;
  v50 = 4LL;
  v53 = &a6;
  v55 = &a7;
  v57 = a8;
  v59 = a9;
  v32 = -1LL;
  v52 = 1LL;
  v54 = 1LL;
  v56 = 1LL;
  v58 = 16LL;
  v60 = 16LL;
  if ( a10 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( a10[v33] );
    v34 = 2 * v33 + 2;
  }
  else
  {
    v34 = 10;
  }
  v62 = v34;
  v63 = 0;
  if ( !a10 )
    v31 = L"NULL";
  v35 = a11;
  v61 = v31;
  if ( a11 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( a11[v36] );
    v37 = v36 + 1;
  }
  else
  {
    v37 = 5;
  }
  v65 = v37;
  v66 = 0;
  if ( !a11 )
    v35 = "NULL";
  v64 = v35;
  v38 = a12;
  if ( a12 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( a12[v39] );
    v40 = v39 + 1;
  }
  else
  {
    v40 = 5;
  }
  v68 = v40;
  v69 = 0;
  if ( !a12 )
    v38 = "NULL";
  v67 = v38;
  v41 = a13;
  if ( a13 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( a13[v42] );
    v43 = v42 + 1;
  }
  else
  {
    v43 = 5;
  }
  v71 = v43;
  v44 = a14;
  if ( !a13 )
    v41 = "NULL";
  v72 = 0;
  v70 = v41;
  if ( a14 )
  {
    do
      ++v32;
    while ( a14[v32] );
    v45 = v32 + 1;
  }
  else
  {
    v45 = 5;
  }
  v74 = v45;
  v75 = 0;
  v76 = &a15;
  v86 = 0;
  v78 = &v47;
  if ( !a14 )
    v44 = "NULL";
  v91 = 0;
  v80 = &a17;
  v96 = 0;
  v82 = &a18;
  v84 = a19;
  v85 = a18;
  v87 = &a20;
  v89 = a21;
  v90 = a20;
  v92 = &a22;
  v94 = a23;
  v95 = a22;
  v97 = &a24;
  v99 = a25;
  v100 = a24;
  v102 = &a26;
  v104 = a27;
  v105 = a26;
  v107 = &a28;
  v109 = a29;
  v110 = a28;
  v112 = &a30;
  v114 = a31;
  v115 = a30;
  v101 = 0;
  v106 = 0;
  v111 = 0;
  v116 = 0;
  v73 = v44;
  v77 = 4LL;
  v79 = 8LL;
  v81 = 4LL;
  v83 = 4LL;
  v88 = 4LL;
  v93 = 4LL;
  v98 = 4LL;
  v103 = 4LL;
  v108 = 4LL;
  v113 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v44, &EventUnitDeviceStatisticsLogs, 0LL, 0x1Du, &v48);
}
