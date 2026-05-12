/*
 * XREFs of sub_1C0075AC8 @ 0x1C0075AC8
 * Callers:
 *     NaptrDnsRecordConvert @ 0x1C0076ECC (NaptrDnsRecordConvert.c)
 * Callees:
 *     sub_1C001579C @ 0x1C001579C (sub_1C001579C.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1C0075AC8(
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
  const wchar_t *v30; // rdx
  const wchar_t *v31; // r11
  const wchar_t *v32; // rcx
  int v33; // r9d
  __int64 v34; // rax
  __int64 v35; // r8
  unsigned int v36; // r10d
  __int64 v37; // rdx
  int v38; // r8d
  bool v39; // zf
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+38h] [rbp-D0h] BYREF
  int *v42; // [rsp+48h] [rbp-C0h]
  __int64 v43; // [rsp+50h] [rbp-B8h]
  __int64 v44; // [rsp+58h] [rbp-B0h]
  __int64 v45; // [rsp+60h] [rbp-A8h]
  const wchar_t *v46; // [rsp+68h] [rbp-A0h]
  __int64 v47; // [rsp+70h] [rbp-98h]
  const wchar_t *v48; // [rsp+78h] [rbp-90h]
  int v49; // [rsp+80h] [rbp-88h]
  int v50; // [rsp+84h] [rbp-84h]
  const wchar_t *v51; // [rsp+88h] [rbp-80h]
  int v52; // [rsp+90h] [rbp-78h]
  int v53; // [rsp+94h] [rbp-74h]
  char *v54; // [rsp+98h] [rbp-70h]
  __int64 v55; // [rsp+A0h] [rbp-68h]
  char *v56; // [rsp+A8h] [rbp-60h]
  __int64 v57; // [rsp+B0h] [rbp-58h]
  char *v58; // [rsp+B8h] [rbp-50h]
  __int64 v59; // [rsp+C0h] [rbp-48h]
  char *v60; // [rsp+C8h] [rbp-40h]
  __int64 v61; // [rsp+D0h] [rbp-38h]
  char *v62; // [rsp+D8h] [rbp-30h]
  __int64 v63; // [rsp+E0h] [rbp-28h]
  char *v64; // [rsp+E8h] [rbp-20h]
  __int64 v65; // [rsp+F0h] [rbp-18h]
  char *v66; // [rsp+F8h] [rbp-10h]
  __int64 v67; // [rsp+100h] [rbp-8h]
  char *v68; // [rsp+108h] [rbp+0h]
  __int64 v69; // [rsp+110h] [rbp+8h]
  char *v70; // [rsp+118h] [rbp+10h]
  __int64 v71; // [rsp+120h] [rbp+18h]
  char *v72; // [rsp+128h] [rbp+20h]
  __int64 v73; // [rsp+130h] [rbp+28h]
  char *v74; // [rsp+138h] [rbp+30h]
  __int64 v75; // [rsp+140h] [rbp+38h]
  char *v76; // [rsp+148h] [rbp+40h]
  __int64 v77; // [rsp+150h] [rbp+48h]
  char *v78; // [rsp+158h] [rbp+50h]
  __int64 v79; // [rsp+160h] [rbp+58h]
  char *v80; // [rsp+168h] [rbp+60h]
  __int64 v81; // [rsp+170h] [rbp+68h]
  char *v82; // [rsp+178h] [rbp+70h]
  __int64 v83; // [rsp+180h] [rbp+78h]
  char *v84; // [rsp+188h] [rbp+80h]
  __int64 v85; // [rsp+190h] [rbp+88h]
  char *v86; // [rsp+198h] [rbp+90h]
  __int64 v87; // [rsp+1A0h] [rbp+98h]
  char *v88; // [rsp+1A8h] [rbp+A0h]
  __int64 v89; // [rsp+1B0h] [rbp+A8h]
  char *v90; // [rsp+1B8h] [rbp+B0h]
  __int64 v91; // [rsp+1C0h] [rbp+B8h]
  char *v92; // [rsp+1C8h] [rbp+C0h]
  __int64 v93; // [rsp+1D0h] [rbp+C8h]
  char *v94; // [rsp+1D8h] [rbp+D0h]
  __int64 v95; // [rsp+1E0h] [rbp+D8h]
  char *v96; // [rsp+1E8h] [rbp+E0h]
  __int64 v97; // [rsp+1F0h] [rbp+E8h]
  int v98; // [rsp+230h] [rbp+128h] BYREF

  v98 = a4;
  v30 = a6;
  v31 = a8;
  v32 = a7;
  v42 = &v98;
  v44 = a5;
  v33 = 10;
  v34 = -1LL;
  v43 = 4LL;
  v45 = 16LL;
  if ( a6 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( a6[v35] );
    v36 = 2 * v35 + 2;
  }
  else
  {
    v36 = 10;
  }
  v47 = v36;
  if ( !a6 )
    v30 = L"NULL";
  v46 = v30;
  if ( a7 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( a7[v37] );
    v38 = 2 * v37 + 2;
  }
  else
  {
    v38 = 10;
  }
  v49 = v38;
  v50 = 0;
  if ( !a7 )
    v32 = L"NULL";
  v48 = v32;
  v39 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v34;
    while ( a8[v34] );
    v33 = 2 * v34 + 2;
    v39 = a8 == 0LL;
  }
  v52 = v33;
  v54 = &a9;
  v53 = 0;
  v56 = &a10;
  if ( v39 )
    v31 = L"NULL";
  v51 = v31;
  v58 = &a11;
  v55 = 2LL;
  v60 = &a12;
  v57 = 2LL;
  v62 = &a13;
  v64 = &a14;
  v66 = &a15;
  v68 = &a16;
  v70 = &a17;
  v72 = &a18;
  v74 = &a19;
  v76 = &a20;
  v78 = &a21;
  v80 = &a22;
  v82 = &a23;
  v84 = &a24;
  v86 = &a25;
  v88 = &a26;
  v90 = &a27;
  v92 = &a28;
  v94 = &a29;
  v96 = &a30;
  v59 = 2LL;
  v61 = 2LL;
  v63 = 4LL;
  v65 = 4LL;
  v67 = 4LL;
  v69 = 4LL;
  v71 = 2LL;
  v73 = 2LL;
  v75 = 4LL;
  v77 = 4LL;
  v79 = 4LL;
  v81 = 4LL;
  v83 = 4LL;
  v85 = 4LL;
  v87 = 4LL;
  v89 = 4LL;
  v91 = 4LL;
  v93 = 1LL;
  v95 = 1LL;
  v97 = 4LL;
  return sub_1C001579C((__int64)v32, &stru_1C0088C90, 0LL, 0x1Cu, &v41);
}
