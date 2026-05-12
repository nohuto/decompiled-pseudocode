/*
 * XREFs of sub_1C00338EC @ 0x1C00338EC
 * Callers:
 *     sub_1C003E534 @ 0x1C003E534 (sub_1C003E534.c)
 * Callees:
 *     sub_1C001579C @ 0x1C001579C (sub_1C001579C.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1C00338EC(
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
        char a17)
{
  const wchar_t *v17; // r11
  const wchar_t *v18; // rcx
  const wchar_t *v20; // rdx
  int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned int v24; // r10d
  __int64 v25; // rdx
  int v26; // r8d
  bool v27; // zf
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+38h] [rbp-D0h] BYREF
  int *v30; // [rsp+48h] [rbp-C0h]
  __int64 v31; // [rsp+50h] [rbp-B8h]
  __int64 v32; // [rsp+58h] [rbp-B0h]
  __int64 v33; // [rsp+60h] [rbp-A8h]
  const wchar_t *v34; // [rsp+68h] [rbp-A0h]
  __int64 v35; // [rsp+70h] [rbp-98h]
  const wchar_t *v36; // [rsp+78h] [rbp-90h]
  int v37; // [rsp+80h] [rbp-88h]
  int v38; // [rsp+84h] [rbp-84h]
  const wchar_t *v39; // [rsp+88h] [rbp-80h]
  int v40; // [rsp+90h] [rbp-78h]
  int v41; // [rsp+94h] [rbp-74h]
  char *v42; // [rsp+98h] [rbp-70h]
  __int64 v43; // [rsp+A0h] [rbp-68h]
  char *v44; // [rsp+A8h] [rbp-60h]
  __int64 v45; // [rsp+B0h] [rbp-58h]
  char *v46; // [rsp+B8h] [rbp-50h]
  __int64 v47; // [rsp+C0h] [rbp-48h]
  char *v48; // [rsp+C8h] [rbp-40h]
  __int64 v49; // [rsp+D0h] [rbp-38h]
  char *v50; // [rsp+D8h] [rbp-30h]
  __int64 v51; // [rsp+E0h] [rbp-28h]
  char *v52; // [rsp+E8h] [rbp-20h]
  __int64 v53; // [rsp+F0h] [rbp-18h]
  char *v54; // [rsp+F8h] [rbp-10h]
  __int64 v55; // [rsp+100h] [rbp-8h]
  char *v56; // [rsp+108h] [rbp+0h]
  __int64 v57; // [rsp+110h] [rbp+8h]
  char *v58; // [rsp+118h] [rbp+10h]
  __int64 v59; // [rsp+120h] [rbp+18h]
  int v60; // [rsp+170h] [rbp+68h] BYREF

  v60 = a4;
  v17 = a8;
  v18 = a7;
  v30 = &v60;
  v20 = a6;
  v32 = a5;
  v21 = 10;
  v22 = -1LL;
  v31 = 4LL;
  v33 = 16LL;
  if ( a6 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a6[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v24 = 10;
  }
  v35 = v24;
  if ( !a6 )
    v20 = L"NULL";
  v34 = v20;
  if ( a7 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a7[v25] );
    v26 = 2 * v25 + 2;
  }
  else
  {
    v26 = 10;
  }
  v37 = v26;
  v38 = 0;
  if ( !a7 )
    v18 = L"NULL";
  v36 = v18;
  v27 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v22;
    while ( a8[v22] );
    v21 = 2 * v22 + 2;
    v27 = a8 == 0LL;
  }
  if ( v27 )
    v17 = L"NULL";
  v40 = v21;
  v39 = v17;
  v42 = &a9;
  v41 = 0;
  v44 = &a10;
  v43 = 4LL;
  v46 = &a11;
  v45 = 4LL;
  v48 = &a12;
  v50 = &a13;
  v52 = &a14;
  v54 = &a15;
  v56 = &a16;
  v58 = &a17;
  v47 = 4LL;
  v49 = 8LL;
  v51 = 4LL;
  v53 = 4LL;
  v55 = 1LL;
  v57 = 1LL;
  v59 = 4LL;
  return sub_1C001579C((__int64)v18, a2, 0LL, 0xFu, &v29);
}
