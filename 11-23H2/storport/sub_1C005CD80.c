/*
 * XREFs of sub_1C005CD80 @ 0x1C005CD80
 * Callers:
 *     sub_1C000F3C0 @ 0x1C000F3C0 (sub_1C000F3C0.c)
 *     sub_1C005E0A0 @ 0x1C005E0A0 (sub_1C005E0A0.c)
 *     sub_1C005EDA0 @ 0x1C005EDA0 (sub_1C005EDA0.c)
 *     sub_1C005F3EC @ 0x1C005F3EC (sub_1C005F3EC.c)
 *     sub_1C00627D8 @ 0x1C00627D8 (sub_1C00627D8.c)
 * Callees:
 *     sub_1C001579C @ 0x1C001579C (sub_1C001579C.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1C005CD80(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        __int64 a10,
        const char *a11,
        const char *a12,
        const char *a13,
        char a14)
{
  const char *v14; // r10
  __int64 v15; // rcx
  const char *v16; // r8
  const char *v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // r11d
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+38h] [rbp-C9h] BYREF
  const wchar_t *v28; // [rsp+48h] [rbp-B9h]
  __int64 v29; // [rsp+50h] [rbp-B1h]
  char *v30; // [rsp+58h] [rbp-A9h]
  __int64 v31; // [rsp+60h] [rbp-A1h]
  __int64 v32; // [rsp+68h] [rbp-99h]
  __int64 v33; // [rsp+70h] [rbp-91h]
  char *v34; // [rsp+78h] [rbp-89h]
  __int64 v35; // [rsp+80h] [rbp-81h]
  char *v36; // [rsp+88h] [rbp-79h]
  __int64 v37; // [rsp+90h] [rbp-71h]
  char *v38; // [rsp+98h] [rbp-69h]
  __int64 v39; // [rsp+A0h] [rbp-61h]
  __int64 v40; // [rsp+A8h] [rbp-59h]
  __int64 v41; // [rsp+B0h] [rbp-51h]
  const char *v42; // [rsp+B8h] [rbp-49h]
  int v43; // [rsp+C0h] [rbp-41h]
  int v44; // [rsp+C4h] [rbp-3Dh]
  const char *v45; // [rsp+C8h] [rbp-39h]
  int v46; // [rsp+D0h] [rbp-31h]
  int v47; // [rsp+D4h] [rbp-2Dh]
  const char *v48; // [rsp+D8h] [rbp-29h]
  int v49; // [rsp+E0h] [rbp-21h]
  int v50; // [rsp+E4h] [rbp-1Dh]
  char *v51; // [rsp+E8h] [rbp-19h]
  __int64 v52; // [rsp+F0h] [rbp-11h]

  v14 = a13;
  v15 = -1LL;
  v16 = a11;
  v18 = a12;
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
  v31 = 4LL;
  if ( !a4 )
    a4 = L"NULL";
  v33 = 16LL;
  v28 = a4;
  v30 = &a5;
  v32 = a6;
  v34 = &a7;
  v36 = &a8;
  v38 = &a9;
  v40 = a10;
  v35 = 1LL;
  v37 = 1LL;
  v39 = 1LL;
  v41 = 16LL;
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
  v43 = v22;
  v44 = 0;
  if ( !a11 )
    v16 = "NULL";
  v42 = v16;
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
  v46 = v24;
  v47 = 0;
  if ( !a12 )
    v18 = "NULL";
  v45 = v18;
  if ( a13 )
  {
    do
      ++v15;
    while ( a13[v15] );
    v25 = (unsigned int)(v15 + 1);
  }
  else
  {
    v25 = 5LL;
  }
  v49 = v25;
  v50 = 0;
  if ( !a13 )
    v14 = "NULL";
  v51 = &a14;
  v48 = v14;
  v52 = 4LL;
  return sub_1C001579C(v25, a2, 0LL, 0xCu, &v27);
}
