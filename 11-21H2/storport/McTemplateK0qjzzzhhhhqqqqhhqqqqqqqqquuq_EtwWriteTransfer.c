/*
 * XREFs of McTemplateK0qjzzzhhhhqqqqhhqqqqqqqqquuq_EtwWriteTransfer @ 0x1C00664BC
 * Callers:
 *     StorLogMFNDQueryChildPFSettings @ 0x1C006758C (StorLogMFNDQueryChildPFSettings.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013144 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzzzhhhhqqqqhhqqqqqqqqquuq_EtwWriteTransfer(
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
        char a29,
        char a30)
{
  const wchar_t *v30; // rcx
  __int64 v31; // rax
  int v32; // r8d
  __int64 v33; // rdx
  int v34; // r9d
  const wchar_t *v35; // rcx
  __int64 v36; // rdx
  int v37; // r9d
  const wchar_t *v38; // rcx
  bool v39; // zf
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+30h] [rbp-D0h] BYREF
  int *v42; // [rsp+40h] [rbp-C0h]
  __int64 v43; // [rsp+48h] [rbp-B8h]
  __int64 v44; // [rsp+50h] [rbp-B0h]
  __int64 v45; // [rsp+58h] [rbp-A8h]
  const wchar_t *v46; // [rsp+60h] [rbp-A0h]
  int v47; // [rsp+68h] [rbp-98h]
  int v48; // [rsp+6Ch] [rbp-94h]
  const wchar_t *v49; // [rsp+70h] [rbp-90h]
  int v50; // [rsp+78h] [rbp-88h]
  int v51; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v52; // [rsp+80h] [rbp-80h]
  int v53; // [rsp+88h] [rbp-78h]
  int v54; // [rsp+8Ch] [rbp-74h]
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
  int v99; // [rsp+228h] [rbp+128h] BYREF

  v99 = a4;
  v30 = a6;
  v42 = &v99;
  v44 = a5;
  v31 = -1LL;
  v43 = 4LL;
  v45 = 16LL;
  v32 = 10;
  if ( a6 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( a6[v33] );
    v34 = 2 * v33 + 2;
  }
  else
  {
    v34 = 10;
  }
  v47 = v34;
  v48 = 0;
  if ( !a6 )
    v30 = L"NULL";
  v46 = v30;
  v35 = a7;
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
  v50 = v37;
  v51 = 0;
  if ( !a7 )
    v35 = L"NULL";
  v49 = v35;
  v38 = a8;
  v39 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v31;
    while ( a8[v31] );
    v32 = 2 * v31 + 2;
    v39 = a8 == 0LL;
  }
  v53 = v32;
  v55 = &a9;
  v54 = 0;
  v57 = &a10;
  if ( v39 )
    v38 = L"NULL";
  v52 = v38;
  v59 = &a11;
  v56 = 2LL;
  v61 = &a12;
  v58 = 2LL;
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
  v60 = 2LL;
  v62 = 2LL;
  v64 = 4LL;
  v66 = 4LL;
  v68 = 4LL;
  v70 = 4LL;
  v72 = 2LL;
  v74 = 2LL;
  v76 = 4LL;
  v78 = 4LL;
  v80 = 4LL;
  v82 = 4LL;
  v84 = 4LL;
  v86 = 4LL;
  v88 = 4LL;
  v90 = 4LL;
  v92 = 4LL;
  v94 = 1LL;
  v96 = 1LL;
  v98 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v38, &EventMFNDQueryChildPFSettings, 0LL, 0x1Cu, &v41);
}
