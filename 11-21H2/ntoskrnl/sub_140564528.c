/*
 * XREFs of sub_140564528 @ 0x140564528
 * Callers:
 *     sub_1409576F0 @ 0x1409576F0 (sub_1409576F0.c)
 * Callees:
 *     sub_1402D1760 @ 0x1402D1760 (sub_1402D1760.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140564528(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        char a6,
        char a7,
        const wchar_t *a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        const wchar_t *a15,
        char a16)
{
  __int64 v16; // rax
  int v17; // r8d
  __int64 v18; // rcx
  int v19; // edx
  const wchar_t *v20; // rcx
  __int64 v21; // rdx
  int v22; // r9d
  const wchar_t *v23; // rdx
  __int64 v24; // rcx
  int v25; // r9d
  const wchar_t *v26; // rcx
  bool v27; // zf
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v30; // [rsp+40h] [rbp-C0h]
  int v31; // [rsp+48h] [rbp-B8h]
  int v32; // [rsp+4Ch] [rbp-B4h]
  const wchar_t *v33; // [rsp+50h] [rbp-B0h]
  int v34; // [rsp+58h] [rbp-A8h]
  int v35; // [rsp+5Ch] [rbp-A4h]
  char *v36; // [rsp+60h] [rbp-A0h]
  __int64 v37; // [rsp+68h] [rbp-98h]
  char *v38; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+78h] [rbp-88h]
  const wchar_t *v40; // [rsp+80h] [rbp-80h]
  int v41; // [rsp+88h] [rbp-78h]
  int v42; // [rsp+8Ch] [rbp-74h]
  char *v43; // [rsp+90h] [rbp-70h]
  __int64 v44; // [rsp+98h] [rbp-68h]
  char *v45; // [rsp+A0h] [rbp-60h]
  __int64 v46; // [rsp+A8h] [rbp-58h]
  char *v47; // [rsp+B0h] [rbp-50h]
  __int64 v48; // [rsp+B8h] [rbp-48h]
  char *v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  char *v51; // [rsp+D0h] [rbp-30h]
  __int64 v52; // [rsp+D8h] [rbp-28h]
  char *v53; // [rsp+E0h] [rbp-20h]
  __int64 v54; // [rsp+E8h] [rbp-18h]
  const wchar_t *v55; // [rsp+F0h] [rbp-10h]
  int v56; // [rsp+F8h] [rbp-8h]
  int v57; // [rsp+FCh] [rbp-4h]
  char *v58; // [rsp+100h] [rbp+0h]
  __int64 v59; // [rsp+108h] [rbp+8h]

  v16 = -1LL;
  v17 = 10;
  if ( a4 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a4[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v20 = a5;
  v31 = v19;
  v32 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v30 = a4;
  if ( a5 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a5[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10;
  }
  v23 = a8;
  v34 = v22;
  if ( !a5 )
    v20 = L"NULL";
  v35 = 0;
  v33 = v20;
  v36 = &a6;
  v38 = &a7;
  v37 = 4LL;
  v39 = 4LL;
  if ( a8 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a8[v24] );
    v25 = 2 * v24 + 2;
  }
  else
  {
    v25 = 10;
  }
  v41 = v25;
  v43 = &a9;
  v42 = 0;
  v45 = &a10;
  if ( !a8 )
    v23 = L"NULL";
  v40 = v23;
  v47 = &a11;
  v49 = &a12;
  v51 = &a13;
  v53 = &a14;
  v26 = a15;
  v44 = 4LL;
  v46 = 4LL;
  v48 = 4LL;
  v50 = 1LL;
  v52 = 4LL;
  v54 = 4LL;
  v27 = a15 == 0LL;
  if ( a15 )
  {
    do
      ++v16;
    while ( a15[v16] );
    v17 = 2 * v16 + 2;
    v27 = a15 == 0LL;
  }
  if ( v27 )
    v26 = L"NULL";
  v56 = v17;
  v55 = v26;
  v58 = &a16;
  v57 = 0;
  v59 = 8LL;
  return sub_1402D1760(qword_140C03910, (const EVENT_DESCRIPTOR *)qword_14003B750, 0LL, 0xEu, &v29);
}
