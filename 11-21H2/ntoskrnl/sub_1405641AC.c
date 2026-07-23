/*
 * XREFs of sub_1405641AC @ 0x1405641AC
 * Callers:
 *     sub_140767040 @ 0x140767040 (sub_140767040.c)
 * Callees:
 *     sub_1402D1760 @ 0x1402D1760 (sub_1402D1760.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1405641AC(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        const wchar_t *a6,
        const wchar_t *a7,
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
  __int64 v17; // rdx
  int v18; // r9d
  const wchar_t *v19; // rcx
  bool v20; // zf
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+30h] [rbp-51h] BYREF
  const wchar_t *v23; // [rsp+40h] [rbp-41h]
  int v24; // [rsp+48h] [rbp-39h]
  int v25; // [rsp+4Ch] [rbp-35h]
  const wchar_t *v26; // [rsp+50h] [rbp-31h]
  int v27; // [rsp+58h] [rbp-29h]
  int v28; // [rsp+5Ch] [rbp-25h]
  const wchar_t *v29; // [rsp+60h] [rbp-21h]
  int v30; // [rsp+68h] [rbp-19h]
  int v31; // [rsp+6Ch] [rbp-15h]
  const wchar_t *v32; // [rsp+70h] [rbp-11h]
  int v33; // [rsp+78h] [rbp-9h]
  int v34; // [rsp+7Ch] [rbp-5h]
  char *v35; // [rsp+80h] [rbp-1h]
  __int64 v36; // [rsp+88h] [rbp+7h]
  char *v37; // [rsp+90h] [rbp+Fh]
  __int64 v38; // [rsp+98h] [rbp+17h]

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
  v24 = v12;
  v25 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v23 = a4;
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
  v27 = v15;
  v28 = 0;
  if ( !a5 )
    v13 = L"NULL";
  v26 = v13;
  v16 = a6;
  if ( a6 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a6[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v18 = 10;
  }
  v30 = v18;
  v31 = 0;
  if ( !a6 )
    v16 = L"NULL";
  v29 = v16;
  v19 = a7;
  v20 = a7 == 0LL;
  if ( a7 )
  {
    do
      ++v9;
    while ( a7[v9] );
    v10 = 2 * v9 + 2;
    v20 = a7 == 0LL;
  }
  if ( v20 )
    v19 = L"NULL";
  v33 = v10;
  v32 = v19;
  v35 = &a8;
  v34 = 0;
  v37 = &a9;
  v36 = 4LL;
  v38 = 4LL;
  return sub_1402D1760(qword_140C03910, (const EVENT_DESCRIPTOR *)qword_14003B3A0, 0LL, 7u, &v22);
}
