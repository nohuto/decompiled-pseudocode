/*
 * XREFs of sub_1C004B778 @ 0x1C004B778
 * Callers:
 *     sub_1C004D6F0 @ 0x1C004D6F0 (sub_1C004D6F0.c)
 * Callees:
 *     sub_1C001579C @ 0x1C001579C (sub_1C001579C.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1C004B778(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        char a9,
        __int64 a10,
        const char *a11,
        const char *a12,
        const char *a13,
        char a14,
        char a15)
{
  const char *v15; // r10
  __int64 v16; // rcx
  const char *v17; // rdx
  const char *v18; // r8
  __int64 v19; // rax
  int v20; // r11d
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v28; // [rsp+40h] [rbp-C0h]
  int v29; // [rsp+48h] [rbp-B8h]
  int v30; // [rsp+4Ch] [rbp-B4h]
  __int64 v31; // [rsp+50h] [rbp-B0h]
  __int64 v32; // [rsp+58h] [rbp-A8h]
  char *v33; // [rsp+60h] [rbp-A0h]
  __int64 v34; // [rsp+68h] [rbp-98h]
  char *v35; // [rsp+70h] [rbp-90h]
  __int64 v36; // [rsp+78h] [rbp-88h]
  char *v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+88h] [rbp-78h]
  char *v39; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+98h] [rbp-68h]
  __int64 v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  const char *v43; // [rsp+B0h] [rbp-50h]
  int v44; // [rsp+B8h] [rbp-48h]
  int v45; // [rsp+BCh] [rbp-44h]
  const char *v46; // [rsp+C0h] [rbp-40h]
  int v47; // [rsp+C8h] [rbp-38h]
  int v48; // [rsp+CCh] [rbp-34h]
  const char *v49; // [rsp+D0h] [rbp-30h]
  int v50; // [rsp+D8h] [rbp-28h]
  int v51; // [rsp+DCh] [rbp-24h]
  char *v52; // [rsp+E0h] [rbp-20h]
  __int64 v53; // [rsp+E8h] [rbp-18h]
  char *v54; // [rsp+F0h] [rbp-10h]
  __int64 v55; // [rsp+F8h] [rbp-8h]

  v15 = a13;
  v16 = -1LL;
  v17 = a12;
  v18 = a11;
  if ( a4 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a4[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v20 = 10;
  }
  v29 = v20;
  v30 = 0;
  v32 = 16LL;
  if ( !a4 )
    a4 = L"NULL";
  v34 = 4LL;
  v31 = a5;
  v33 = &a6;
  v35 = &a7;
  v37 = &a8;
  v39 = &a9;
  v28 = a4;
  v41 = a10;
  v36 = 1LL;
  v38 = 1LL;
  v40 = 1LL;
  v42 = 16LL;
  if ( a11 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a11[v21] );
    v22 = v21 + 1;
  }
  else
  {
    v22 = 5;
  }
  v44 = v22;
  v45 = 0;
  if ( !a11 )
    v18 = "NULL";
  v43 = v18;
  if ( a12 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a12[v23] );
    v24 = v23 + 1;
  }
  else
  {
    v24 = 5;
  }
  v47 = v24;
  v48 = 0;
  if ( !a12 )
    v17 = "NULL";
  v46 = v17;
  if ( a13 )
  {
    do
      ++v16;
    while ( a13[v16] );
    v25 = (unsigned int)(v16 + 1);
  }
  else
  {
    v25 = 5LL;
  }
  v50 = v25;
  v52 = &a14;
  v51 = 0;
  v54 = &a15;
  v53 = 4LL;
  if ( !a13 )
    v15 = "NULL";
  v49 = v15;
  v55 = 4LL;
  return sub_1C001579C(v25, &stru_1C0089500, 0LL, 0xDu, &v27);
}
