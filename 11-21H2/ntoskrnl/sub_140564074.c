/*
 * XREFs of sub_140564074 @ 0x140564074
 * Callers:
 *     sub_1406619F8 @ 0x1406619F8 (sub_1406619F8.c)
 * Callees:
 *     sub_1402D1760 @ 0x1402D1760 (sub_1402D1760.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140564074(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        const wchar_t *a6,
        char a7,
        char a8,
        char a9)
{
  __int64 v9; // rax
  int v10; // r8d
  __int64 v11; // rcx
  int v12; // edx
  const wchar_t *v13; // rcx
  __int64 v14; // rdx
  int v15; // r9d
  const wchar_t *v16; // rcx
  bool v17; // zf
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+30h] [rbp-51h] BYREF
  const wchar_t *v20; // [rsp+40h] [rbp-41h]
  int v21; // [rsp+48h] [rbp-39h]
  int v22; // [rsp+4Ch] [rbp-35h]
  const wchar_t *v23; // [rsp+50h] [rbp-31h]
  int v24; // [rsp+58h] [rbp-29h]
  int v25; // [rsp+5Ch] [rbp-25h]
  const wchar_t *v26; // [rsp+60h] [rbp-21h]
  int v27; // [rsp+68h] [rbp-19h]
  int v28; // [rsp+6Ch] [rbp-15h]
  char *v29; // [rsp+70h] [rbp-11h]
  __int64 v30; // [rsp+78h] [rbp-9h]
  char *v31; // [rsp+80h] [rbp-1h]
  __int64 v32; // [rsp+88h] [rbp+7h]
  char *v33; // [rsp+90h] [rbp+Fh]
  __int64 v34; // [rsp+98h] [rbp+17h]

  v9 = -1LL;
  v10 = 10;
  if ( a4 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a4[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v12 = 10;
  }
  v13 = a5;
  v21 = v12;
  v22 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v20 = a4;
  if ( a5 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a5[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v24 = v15;
  v25 = 0;
  if ( !a5 )
    v13 = L"NULL";
  v23 = v13;
  v16 = a6;
  v17 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
    v10 = 2 * v9 + 2;
    v17 = a6 == 0LL;
  }
  if ( v17 )
    v16 = L"NULL";
  v27 = v10;
  v26 = v16;
  v29 = &a7;
  v28 = 0;
  v31 = &a8;
  v30 = 4LL;
  v33 = &a9;
  v32 = 4LL;
  v34 = 4LL;
  return sub_1402D1760(qword_140C03910, (const EVENT_DESCRIPTOR *)qword_14003B490, 0LL, 7u, &v19);
}
