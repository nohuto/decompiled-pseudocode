/*
 * XREFs of McTemplateK0qjzztqqquuhhhhhhhhqqqqqqqqqqqqu_EtwWriteTransfer @ 0x1C003279C
 * Callers:
 *     StorLogMFNDCapability @ 0x1C003DACC (StorLogMFNDCapability.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0014E0C (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzztqqquuhhhhhhhhqqqqqqqqqqqqu_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        char a26,
        char a27,
        char a28,
        char a29,
        char a30,
        char a31,
        char a32,
        char a33,
        char a34)
{
  const wchar_t *v34; // rcx
  const wchar_t *v35; // r8
  __int64 v36; // rax
  int v37; // r10d
  __int64 v38; // rdx
  int v39; // r9d
  bool v40; // zf
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+30h] [rbp-D0h] BYREF
  int *v43; // [rsp+40h] [rbp-C0h]
  __int64 v44; // [rsp+48h] [rbp-B8h]
  __int64 v45; // [rsp+50h] [rbp-B0h]
  __int64 v46; // [rsp+58h] [rbp-A8h]
  const wchar_t *v47; // [rsp+60h] [rbp-A0h]
  int v48; // [rsp+68h] [rbp-98h]
  int v49; // [rsp+6Ch] [rbp-94h]
  const wchar_t *v50; // [rsp+70h] [rbp-90h]
  int v51; // [rsp+78h] [rbp-88h]
  int v52; // [rsp+7Ch] [rbp-84h]
  char *v53; // [rsp+80h] [rbp-80h]
  __int64 v54; // [rsp+88h] [rbp-78h]
  char *v55; // [rsp+90h] [rbp-70h]
  __int64 v56; // [rsp+98h] [rbp-68h]
  char *v57; // [rsp+A0h] [rbp-60h]
  __int64 v58; // [rsp+A8h] [rbp-58h]
  char *v59; // [rsp+B0h] [rbp-50h]
  __int64 v60; // [rsp+B8h] [rbp-48h]
  char *v61; // [rsp+C0h] [rbp-40h]
  __int64 v62; // [rsp+C8h] [rbp-38h]
  char *v63; // [rsp+D0h] [rbp-30h]
  __int64 v64; // [rsp+D8h] [rbp-28h]
  char *v65; // [rsp+E0h] [rbp-20h]
  __int64 v66; // [rsp+E8h] [rbp-18h]
  char *v67; // [rsp+F0h] [rbp-10h]
  __int64 v68; // [rsp+F8h] [rbp-8h]
  char *v69; // [rsp+100h] [rbp+0h]
  __int64 v70; // [rsp+108h] [rbp+8h]
  char *v71; // [rsp+110h] [rbp+10h]
  __int64 v72; // [rsp+118h] [rbp+18h]
  char *v73; // [rsp+120h] [rbp+20h]
  __int64 v74; // [rsp+128h] [rbp+28h]
  char *v75; // [rsp+130h] [rbp+30h]
  __int64 v76; // [rsp+138h] [rbp+38h]
  char *v77; // [rsp+140h] [rbp+40h]
  __int64 v78; // [rsp+148h] [rbp+48h]
  char *v79; // [rsp+150h] [rbp+50h]
  __int64 v80; // [rsp+158h] [rbp+58h]
  char *v81; // [rsp+160h] [rbp+60h]
  __int64 v82; // [rsp+168h] [rbp+68h]
  char *v83; // [rsp+170h] [rbp+70h]
  __int64 v84; // [rsp+178h] [rbp+78h]
  char *v85; // [rsp+180h] [rbp+80h]
  __int64 v86; // [rsp+188h] [rbp+88h]
  char *v87; // [rsp+190h] [rbp+90h]
  __int64 v88; // [rsp+198h] [rbp+98h]
  char *v89; // [rsp+1A0h] [rbp+A0h]
  __int64 v90; // [rsp+1A8h] [rbp+A8h]
  char *v91; // [rsp+1B0h] [rbp+B0h]
  __int64 v92; // [rsp+1B8h] [rbp+B8h]
  char *v93; // [rsp+1C0h] [rbp+C0h]
  __int64 v94; // [rsp+1C8h] [rbp+C8h]
  char *v95; // [rsp+1D0h] [rbp+D0h]
  __int64 v96; // [rsp+1D8h] [rbp+D8h]
  char *v97; // [rsp+1E0h] [rbp+E0h]
  __int64 v98; // [rsp+1E8h] [rbp+E8h]
  char *v99; // [rsp+1F0h] [rbp+F0h]
  __int64 v100; // [rsp+1F8h] [rbp+F8h]
  char *v101; // [rsp+200h] [rbp+100h]
  __int64 v102; // [rsp+208h] [rbp+108h]
  char *v103; // [rsp+210h] [rbp+110h]
  __int64 v104; // [rsp+218h] [rbp+118h]
  char *v105; // [rsp+220h] [rbp+120h]
  __int64 v106; // [rsp+228h] [rbp+128h]
  int v107; // [rsp+268h] [rbp+168h] BYREF

  v107 = a4;
  v34 = a6;
  v35 = a7;
  v43 = &v107;
  v45 = a5;
  v36 = -1LL;
  v44 = 4LL;
  v37 = 10;
  v46 = 16LL;
  if ( a6 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( a6[v38] );
    v39 = 2 * v38 + 2;
  }
  else
  {
    v39 = 10;
  }
  v48 = v39;
  v49 = 0;
  if ( !a6 )
    v34 = L"NULL";
  v47 = v34;
  v40 = a7 == 0LL;
  if ( a7 )
  {
    do
      ++v36;
    while ( a7[v36] );
    v37 = 2 * v36 + 2;
    v40 = a7 == 0LL;
  }
  v51 = v37;
  v53 = &a8;
  if ( v40 )
    v35 = L"NULL";
  v50 = v35;
  v55 = &a9;
  v57 = &a10;
  v59 = &a11;
  v61 = &a12;
  v63 = &a13;
  v65 = &a14;
  v67 = &a15;
  v69 = &a16;
  v71 = &a17;
  v73 = &a18;
  v75 = &a19;
  v77 = &a20;
  v79 = &a21;
  v81 = &a22;
  v83 = &a23;
  v85 = &a24;
  v87 = &a25;
  v89 = &a26;
  v91 = &a27;
  v93 = &a28;
  v95 = &a29;
  v97 = &a30;
  v99 = &a31;
  v101 = &a32;
  v103 = &a33;
  v52 = 0;
  v54 = 4LL;
  v56 = 4LL;
  v58 = 4LL;
  v60 = 4LL;
  v62 = 1LL;
  v64 = 1LL;
  v66 = 2LL;
  v68 = 2LL;
  v70 = 2LL;
  v72 = 2LL;
  v74 = 2LL;
  v76 = 2LL;
  v78 = 2LL;
  v80 = 2LL;
  v82 = 4LL;
  v84 = 4LL;
  v86 = 4LL;
  v88 = 4LL;
  v90 = 4LL;
  v92 = 4LL;
  v94 = 4LL;
  v96 = 4LL;
  v98 = 4LL;
  v100 = 4LL;
  v102 = 4LL;
  v104 = 4LL;
  v105 = &a34;
  v106 = 1LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v34, &EventGetMFNDCapability, 0LL, 0x20u, &v42);
}
