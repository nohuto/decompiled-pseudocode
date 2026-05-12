/*
 * XREFs of sub_1C006A724 @ 0x1C006A724
 * Callers:
 *     sub_1C0073170 @ 0x1C0073170 (sub_1C0073170.c)
 * Callees:
 *     sub_1C001579C @ 0x1C001579C (sub_1C001579C.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1C006A724(
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
        int a15,
        char a16,
        char a17,
        int a18,
        __int64 a19)
{
  const wchar_t *v19; // rdx
  const char *v20; // rbx
  const char *v21; // r10
  const char *v22; // r9
  const char *v23; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // r11d
  __int64 v27; // rcx
  int v28; // ecx
  __int64 v29; // rcx
  int v30; // ecx
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // eax
  __int64 v35; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+40h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+48h] [rbp-C0h] BYREF
  int *v38; // [rsp+58h] [rbp-B0h]
  __int64 v39; // [rsp+60h] [rbp-A8h]
  char *v40; // [rsp+68h] [rbp-A0h]
  __int64 v41; // [rsp+70h] [rbp-98h]
  char *v42; // [rsp+78h] [rbp-90h]
  __int64 v43; // [rsp+80h] [rbp-88h]
  char *v44; // [rsp+88h] [rbp-80h]
  __int64 v45; // [rsp+90h] [rbp-78h]
  __int64 v46; // [rsp+98h] [rbp-70h]
  __int64 v47; // [rsp+A0h] [rbp-68h]
  __int64 v48; // [rsp+A8h] [rbp-60h]
  __int64 v49; // [rsp+B0h] [rbp-58h]
  const wchar_t *v50; // [rsp+B8h] [rbp-50h]
  int v51; // [rsp+C0h] [rbp-48h]
  int v52; // [rsp+C4h] [rbp-44h]
  const char *v53; // [rsp+C8h] [rbp-40h]
  int v54; // [rsp+D0h] [rbp-38h]
  int v55; // [rsp+D4h] [rbp-34h]
  const char *v56; // [rsp+D8h] [rbp-30h]
  int v57; // [rsp+E0h] [rbp-28h]
  int v58; // [rsp+E4h] [rbp-24h]
  const char *v59; // [rsp+E8h] [rbp-20h]
  int v60; // [rsp+F0h] [rbp-18h]
  int v61; // [rsp+F4h] [rbp-14h]
  const char *v62; // [rsp+F8h] [rbp-10h]
  int v63; // [rsp+100h] [rbp-8h]
  int v64; // [rsp+104h] [rbp-4h]
  __int64 *v65; // [rsp+108h] [rbp+0h]
  __int64 v66; // [rsp+110h] [rbp+8h]
  char *v67; // [rsp+118h] [rbp+10h]
  __int64 v68; // [rsp+120h] [rbp+18h]
  char *v69; // [rsp+128h] [rbp+20h]
  __int64 v70; // [rsp+130h] [rbp+28h]
  __int64 *v71; // [rsp+138h] [rbp+30h]
  __int64 v72; // [rsp+140h] [rbp+38h]
  __int64 v73; // [rsp+148h] [rbp+40h]
  __int64 v74; // [rsp+150h] [rbp+48h]
  int v75; // [rsp+190h] [rbp+88h] BYREF

  v75 = a4;
  v19 = a10;
  v20 = a14;
  v21 = a13;
  v22 = a12;
  v23 = a11;
  v36 = *(_QWORD *)&qword_1C0093B20;
  v38 = &v75;
  v40 = &a5;
  v42 = &a6;
  v44 = &a7;
  v46 = a8;
  v48 = a9;
  v24 = -1LL;
  LODWORD(v35) = 512;
  v39 = 4LL;
  v41 = 1LL;
  v43 = 1LL;
  v45 = 1LL;
  v47 = 16LL;
  v49 = 16LL;
  if ( a10 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a10[v25] );
    v26 = 2 * v25 + 2;
  }
  else
  {
    v26 = 10;
  }
  v51 = v26;
  v52 = 0;
  if ( !a10 )
    v19 = L"NULL";
  v50 = v19;
  if ( a11 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a11[v27] );
    v28 = v27 + 1;
  }
  else
  {
    v28 = 5;
  }
  v54 = v28;
  v55 = 0;
  if ( !a11 )
    v23 = "NULL";
  v53 = v23;
  if ( a12 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a12[v29] );
    v30 = v29 + 1;
  }
  else
  {
    v30 = 5;
  }
  v57 = v30;
  v58 = 0;
  if ( !a12 )
    v22 = "NULL";
  v56 = v22;
  if ( a13 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( a13[v31] );
    v32 = (unsigned int)(v31 + 1);
  }
  else
  {
    v32 = 5LL;
  }
  v60 = v32;
  v61 = 0;
  if ( !a13 )
    v21 = "NULL";
  v59 = v21;
  if ( a14 )
  {
    do
      ++v24;
    while ( a14[v24] );
    v33 = v24 + 1;
  }
  else
  {
    v33 = 5;
  }
  v63 = v33;
  v64 = 0;
  v65 = &v36;
  v66 = 8LL;
  v67 = &a16;
  if ( !a14 )
    v20 = "NULL";
  v62 = v20;
  v69 = &a17;
  v68 = 4LL;
  v71 = &v35;
  v73 = a19;
  v70 = 4LL;
  v72 = 4LL;
  v74 = 512LL;
  return sub_1C001579C(v32, &stru_1C0089240, 0LL, 0x11u, &v37);
}
