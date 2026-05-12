/*
 * XREFs of sub_1C00754BC @ 0x1C00754BC
 * Callers:
 *     sub_1C00767F8 @ 0x1C00767F8 (sub_1C00767F8.c)
 *     sub_1C0077460 @ 0x1C0077460 (sub_1C0077460.c)
 * Callees:
 *     sub_1C001579C @ 0x1C001579C (sub_1C001579C.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1C00754BC(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
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
        int a24,
        __int64 a25,
        char a26,
        char a27,
        char a28)
{
  const wchar_t *v28; // r11
  const wchar_t *v29; // rcx
  const wchar_t *v31; // rdx
  int v32; // r9d
  __int64 v33; // rax
  __int64 v34; // r8
  int v35; // r10d
  __int64 v36; // rdx
  int v37; // r8d
  bool v38; // zf
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+30h] [rbp-D0h] BYREF
  int *v41; // [rsp+40h] [rbp-C0h]
  __int64 v42; // [rsp+48h] [rbp-B8h]
  __int64 v43; // [rsp+50h] [rbp-B0h]
  __int64 v44; // [rsp+58h] [rbp-A8h]
  const wchar_t *v45; // [rsp+60h] [rbp-A0h]
  int v46; // [rsp+68h] [rbp-98h]
  int v47; // [rsp+6Ch] [rbp-94h]
  const wchar_t *v48; // [rsp+70h] [rbp-90h]
  int v49; // [rsp+78h] [rbp-88h]
  int v50; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v51; // [rsp+80h] [rbp-80h]
  int v52; // [rsp+88h] [rbp-78h]
  int v53; // [rsp+8Ch] [rbp-74h]
  char *v54; // [rsp+90h] [rbp-70h]
  __int64 v55; // [rsp+98h] [rbp-68h]
  char *v56; // [rsp+A0h] [rbp-60h]
  __int64 v57; // [rsp+A8h] [rbp-58h]
  char *v58; // [rsp+B0h] [rbp-50h]
  __int64 v59; // [rsp+B8h] [rbp-48h]
  char *v60; // [rsp+C0h] [rbp-40h]
  __int64 v61; // [rsp+C8h] [rbp-38h]
  char *v62; // [rsp+D0h] [rbp-30h]
  __int64 v63; // [rsp+D8h] [rbp-28h]
  char *v64; // [rsp+E0h] [rbp-20h]
  __int64 v65; // [rsp+E8h] [rbp-18h]
  char *v66; // [rsp+F0h] [rbp-10h]
  __int64 v67; // [rsp+F8h] [rbp-8h]
  char *v68; // [rsp+100h] [rbp+0h]
  __int64 v69; // [rsp+108h] [rbp+8h]
  char *v70; // [rsp+110h] [rbp+10h]
  __int64 v71; // [rsp+118h] [rbp+18h]
  char *v72; // [rsp+120h] [rbp+20h]
  __int64 v73; // [rsp+128h] [rbp+28h]
  char *v74; // [rsp+130h] [rbp+30h]
  __int64 v75; // [rsp+138h] [rbp+38h]
  char *v76; // [rsp+140h] [rbp+40h]
  __int64 v77; // [rsp+148h] [rbp+48h]
  char *v78; // [rsp+150h] [rbp+50h]
  __int64 v79; // [rsp+158h] [rbp+58h]
  char *v80; // [rsp+160h] [rbp+60h]
  __int64 v81; // [rsp+168h] [rbp+68h]
  char *v82; // [rsp+170h] [rbp+70h]
  __int64 v83; // [rsp+178h] [rbp+78h]
  int *v84; // [rsp+180h] [rbp+80h]
  __int64 v85; // [rsp+188h] [rbp+88h]
  __int64 v86; // [rsp+190h] [rbp+90h]
  int v87; // [rsp+198h] [rbp+98h]
  int v88; // [rsp+19Ch] [rbp+9Ch]
  char *v89; // [rsp+1A0h] [rbp+A0h]
  __int64 v90; // [rsp+1A8h] [rbp+A8h]
  char *v91; // [rsp+1B0h] [rbp+B0h]
  __int64 v92; // [rsp+1B8h] [rbp+B8h]
  char *v93; // [rsp+1C0h] [rbp+C0h]
  __int64 v94; // [rsp+1C8h] [rbp+C8h]
  int v95; // [rsp+218h] [rbp+118h] BYREF

  v95 = a4;
  v28 = a8;
  v29 = a7;
  v41 = &v95;
  v31 = a6;
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
  v47 = 0;
  if ( !a6 )
    v31 = L"NULL";
  v45 = v31;
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
  v49 = v37;
  v50 = 0;
  if ( !a7 )
    v29 = L"NULL";
  v48 = v29;
  v38 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v33;
    while ( a8[v33] );
    v32 = 2 * v33 + 2;
    v38 = a8 == 0LL;
  }
  v52 = v32;
  v54 = &a9;
  if ( v38 )
    v28 = L"NULL";
  v51 = v28;
  v56 = &a10;
  v53 = 0;
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
  v86 = a25;
  v87 = a24;
  v89 = &a26;
  v91 = &a27;
  v93 = &a28;
  v59 = 2LL;
  v61 = 2LL;
  v63 = 2LL;
  v65 = 2LL;
  v67 = 2LL;
  v69 = 2LL;
  v71 = 2LL;
  v73 = 1LL;
  v75 = 2LL;
  v77 = 2LL;
  v79 = 2LL;
  v81 = 2LL;
  v83 = 1LL;
  v85 = 4LL;
  v88 = 0;
  v90 = 1LL;
  v92 = 1LL;
  v94 = 4LL;
  return sub_1C001579C((__int64)v29, a2, 0LL, 0x1Au, &v40);
}
