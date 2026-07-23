/*
 * XREFs of sub_14056471C @ 0x14056471C
 * Callers:
 *     sub_1409576F0 @ 0x1409576F0 (sub_1409576F0.c)
 * Callees:
 *     sub_1402D1760 @ 0x1402D1760 (sub_1402D1760.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_14056471C(
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
        char a13)
{
  __int64 v13; // rax
  int v14; // r8d
  __int64 v15; // rcx
  int v16; // edx
  const wchar_t *v17; // rcx
  __int64 v18; // rdx
  int v19; // r9d
  const wchar_t *v20; // rcx
  bool v21; // zf
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+30h] [rbp-B1h] BYREF
  const wchar_t *v24; // [rsp+40h] [rbp-A1h]
  int v25; // [rsp+48h] [rbp-99h]
  int v26; // [rsp+4Ch] [rbp-95h]
  const wchar_t *v27; // [rsp+50h] [rbp-91h]
  int v28; // [rsp+58h] [rbp-89h]
  int v29; // [rsp+5Ch] [rbp-85h]
  char *v30; // [rsp+60h] [rbp-81h]
  __int64 v31; // [rsp+68h] [rbp-79h]
  char *v32; // [rsp+70h] [rbp-71h]
  __int64 v33; // [rsp+78h] [rbp-69h]
  const wchar_t *v34; // [rsp+80h] [rbp-61h]
  int v35; // [rsp+88h] [rbp-59h]
  int v36; // [rsp+8Ch] [rbp-55h]
  char *v37; // [rsp+90h] [rbp-51h]
  __int64 v38; // [rsp+98h] [rbp-49h]
  char *v39; // [rsp+A0h] [rbp-41h]
  __int64 v40; // [rsp+A8h] [rbp-39h]
  char *v41; // [rsp+B0h] [rbp-31h]
  __int64 v42; // [rsp+B8h] [rbp-29h]
  char *v43; // [rsp+C0h] [rbp-21h]
  __int64 v44; // [rsp+C8h] [rbp-19h]
  char *v45; // [rsp+D0h] [rbp-11h]
  __int64 v46; // [rsp+D8h] [rbp-9h]

  v13 = -1LL;
  v14 = 10;
  if ( a4 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a4[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v16 = 10;
  }
  v17 = a5;
  v25 = v16;
  v26 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v24 = a4;
  if ( a5 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a5[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v28 = v19;
  v29 = 0;
  if ( !a5 )
    v17 = L"NULL";
  v31 = 4LL;
  v27 = v17;
  v30 = &a6;
  v32 = &a7;
  v20 = a8;
  v33 = 4LL;
  v21 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v13;
    while ( a8[v13] );
    v14 = 2 * v13 + 2;
    v21 = a8 == 0LL;
  }
  if ( v21 )
    v20 = L"NULL";
  v35 = v14;
  v34 = v20;
  v37 = &a9;
  v36 = 0;
  v39 = &a10;
  v38 = 4LL;
  v41 = &a11;
  v40 = 4LL;
  v43 = &a12;
  v42 = 4LL;
  v45 = &a13;
  v44 = 1LL;
  v46 = 8LL;
  return sub_1402D1760(qword_140C03910, (const EVENT_DESCRIPTOR *)qword_14003B350, 0LL, 0xBu, &v23);
}
