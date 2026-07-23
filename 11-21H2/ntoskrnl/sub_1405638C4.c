/*
 * XREFs of sub_1405638C4 @ 0x1405638C4
 * Callers:
 *     sub_1406E32E4 @ 0x1406E32E4 (sub_1406E32E4.c)
 * Callees:
 *     sub_1402D1760 @ 0x1402D1760 (sub_1402D1760.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1405638C4(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, const wchar_t *a5, char a6)
{
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // rcx
  int v9; // r8d
  const wchar_t *v10; // rcx
  bool v11; // zf
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-58h] BYREF
  const wchar_t *v14; // [rsp+40h] [rbp-48h]
  int v15; // [rsp+48h] [rbp-40h]
  int v16; // [rsp+4Ch] [rbp-3Ch]
  const wchar_t *v17; // [rsp+50h] [rbp-38h]
  int v18; // [rsp+58h] [rbp-30h]
  int v19; // [rsp+5Ch] [rbp-2Ch]
  char *v20; // [rsp+60h] [rbp-28h]
  __int64 v21; // [rsp+68h] [rbp-20h]

  v6 = -1LL;
  v7 = 10;
  if ( a4 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a4[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10;
  }
  v10 = a5;
  v15 = v9;
  v16 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v14 = a4;
  v11 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v6;
    while ( a5[v6] );
    v7 = 2 * v6 + 2;
    v11 = a5 == 0LL;
  }
  if ( v11 )
    v10 = L"NULL";
  v18 = v7;
  v17 = v10;
  v20 = &a6;
  v19 = 0;
  v21 = 4LL;
  return sub_1402D1760(qword_140C03910, (const EVENT_DESCRIPTOR *)qword_14003B150, 0LL, 4u, &v13);
}
