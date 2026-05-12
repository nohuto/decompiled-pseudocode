/*
 * XREFs of McTemplateK0qjzzzhhhhhqqqqqqqqqqqqquuq_EtwWriteTransfer @ 0x1C0074F84
 * Callers:
 *     StorLogMFNDSetChildPFSettings @ 0x1C00773A8 (StorLogMFNDSetChildPFSettings.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0014E0C (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzzzhhhhhqqqqqqqqqqqqquuq_EtwWriteTransfer(
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
        char a29)
{
  const wchar_t *v29; // rdx
  const wchar_t *v30; // r11
  const wchar_t *v31; // rcx
  int v32; // r9d
  __int64 v33; // rax
  __int64 v34; // r8
  unsigned int v35; // r10d
  __int64 v36; // rdx
  int v37; // r8d
  bool v38; // zf
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+38h] [rbp-D0h] BYREF
  int *v41; // [rsp+48h] [rbp-C0h]
  __int64 v42; // [rsp+50h] [rbp-B8h]
  __int64 v43; // [rsp+58h] [rbp-B0h]
  __int64 v44; // [rsp+60h] [rbp-A8h]
  const wchar_t *v45; // [rsp+68h] [rbp-A0h]
  __int64 v46; // [rsp+70h] [rbp-98h]
  const wchar_t *v47; // [rsp+78h] [rbp-90h]
  int v48; // [rsp+80h] [rbp-88h]
  int v49; // [rsp+84h] [rbp-84h]
  const wchar_t *v50; // [rsp+88h] [rbp-80h]
  int v51; // [rsp+90h] [rbp-78h]
  int v52; // [rsp+94h] [rbp-74h]
  char *v53; // [rsp+98h] [rbp-70h]
  __int64 v54; // [rsp+A0h] [rbp-68h]
  char *v55; // [rsp+A8h] [rbp-60h]
  __int64 v56; // [rsp+B0h] [rbp-58h]
  char *v57; // [rsp+B8h] [rbp-50h]
  __int64 v58; // [rsp+C0h] [rbp-48h]
  char *v59; // [rsp+C8h] [rbp-40h]
  __int64 v60; // [rsp+D0h] [rbp-38h]
  char *v61; // [rsp+D8h] [rbp-30h]
  __int64 v62; // [rsp+E0h] [rbp-28h]
  char *v63; // [rsp+E8h] [rbp-20h]
  __int64 v64; // [rsp+F0h] [rbp-18h]
  char *v65; // [rsp+F8h] [rbp-10h]
  __int64 v66; // [rsp+100h] [rbp-8h]
  char *v67; // [rsp+108h] [rbp+0h]
  __int64 v68; // [rsp+110h] [rbp+8h]
  char *v69; // [rsp+118h] [rbp+10h]
  __int64 v70; // [rsp+120h] [rbp+18h]
  char *v71; // [rsp+128h] [rbp+20h]
  __int64 v72; // [rsp+130h] [rbp+28h]
  char *v73; // [rsp+138h] [rbp+30h]
  __int64 v74; // [rsp+140h] [rbp+38h]
  char *v75; // [rsp+148h] [rbp+40h]
  __int64 v76; // [rsp+150h] [rbp+48h]
  char *v77; // [rsp+158h] [rbp+50h]
  __int64 v78; // [rsp+160h] [rbp+58h]
  char *v79; // [rsp+168h] [rbp+60h]
  __int64 v80; // [rsp+170h] [rbp+68h]
  char *v81; // [rsp+178h] [rbp+70h]
  __int64 v82; // [rsp+180h] [rbp+78h]
  char *v83; // [rsp+188h] [rbp+80h]
  __int64 v84; // [rsp+190h] [rbp+88h]
  char *v85; // [rsp+198h] [rbp+90h]
  __int64 v86; // [rsp+1A0h] [rbp+98h]
  char *v87; // [rsp+1A8h] [rbp+A0h]
  __int64 v88; // [rsp+1B0h] [rbp+A8h]
  char *v89; // [rsp+1B8h] [rbp+B0h]
  __int64 v90; // [rsp+1C0h] [rbp+B8h]
  char *v91; // [rsp+1C8h] [rbp+C0h]
  __int64 v92; // [rsp+1D0h] [rbp+C8h]
  char *v93; // [rsp+1D8h] [rbp+D0h]
  __int64 v94; // [rsp+1E0h] [rbp+D8h]
  int v95; // [rsp+220h] [rbp+118h] BYREF

  v95 = a4;
  v29 = a6;
  v30 = a8;
  v31 = a7;
  v41 = &v95;
  v43 = a5;
  v32 = 10;
  v33 = -1LL;
  v42 = 4LL;
  v44 = 16LL;
  if ( a6 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a6[v34] );
    v35 = 2 * v34 + 2;
  }
  else
  {
    v35 = 10;
  }
  v46 = v35;
  if ( !a6 )
    v29 = L"NULL";
  v45 = v29;
  if ( a7 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( a7[v36] );
    v37 = 2 * v36 + 2;
  }
  else
  {
    v37 = 10;
  }
  v48 = v37;
  v49 = 0;
  if ( !a7 )
    v31 = L"NULL";
  v47 = v31;
  v38 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v33;
    while ( a8[v33] );
    v32 = 2 * v33 + 2;
    v38 = a8 == 0LL;
  }
  v51 = v32;
  v53 = &a9;
  v52 = 0;
  v55 = &a10;
  if ( v38 )
    v30 = L"NULL";
  v50 = v30;
  v57 = &a11;
  v54 = 2LL;
  v59 = &a12;
  v56 = 2LL;
  v61 = &a13;
  v63 = &a14;
  v65 = &a15;
  v67 = &a16;
  v69 = &a17;
  v71 = &a18;
  v73 = &a19;
  v75 = &a20;
  v77 = &a21;
  v79 = &a22;
  v81 = &a23;
  v83 = &a24;
  v85 = &a25;
  v87 = &a26;
  v89 = &a27;
  v91 = &a28;
  v93 = &a29;
  v58 = 2LL;
  v60 = 2LL;
  v62 = 2LL;
  v64 = 4LL;
  v66 = 4LL;
  v68 = 4LL;
  v70 = 4LL;
  v72 = 4LL;
  v74 = 4LL;
  v76 = 4LL;
  v78 = 4LL;
  v80 = 4LL;
  v82 = 4LL;
  v84 = 4LL;
  v86 = 4LL;
  v88 = 4LL;
  v90 = 1LL;
  v92 = 1LL;
  v94 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v31, &EventMFNDSetChildPFSettings, 0LL, 0x1Bu, &v40);
}
