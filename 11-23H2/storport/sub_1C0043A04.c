/*
 * XREFs of sub_1C0043A04 @ 0x1C0043A04
 * Callers:
 *     sub_1C0043B50 @ 0x1C0043B50 (sub_1C0043B50.c)
 * Callees:
 *     sub_1C001579C @ 0x1C001579C (sub_1C001579C.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1C0043A04(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        char a6,
        char a7,
        char a8)
{
  const wchar_t *v8; // rdx
  __int64 v9; // rax
  int v10; // r10d
  __int64 v11; // rcx
  int v12; // r8d
  bool v13; // zf
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-39h] BYREF
  const wchar_t *v16; // [rsp+40h] [rbp-29h]
  int v17; // [rsp+48h] [rbp-21h]
  int v18; // [rsp+4Ch] [rbp-1Dh]
  const wchar_t *v19; // [rsp+50h] [rbp-19h]
  int v20; // [rsp+58h] [rbp-11h]
  int v21; // [rsp+5Ch] [rbp-Dh]
  char *v22; // [rsp+60h] [rbp-9h]
  __int64 v23; // [rsp+68h] [rbp-1h]
  char *v24; // [rsp+70h] [rbp+7h]
  __int64 v25; // [rsp+78h] [rbp+Fh]
  char *v26; // [rsp+80h] [rbp+17h]
  __int64 v27; // [rsp+88h] [rbp+1Fh]

  v8 = a5;
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
  v17 = v12;
  v18 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v16 = a4;
  v13 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v9;
    while ( a5[v9] );
    v10 = 2 * v9 + 2;
    v13 = a5 == 0LL;
  }
  if ( v13 )
    v8 = L"NULL";
  v20 = v10;
  v19 = v8;
  v22 = &a6;
  v21 = 0;
  v24 = &a7;
  v23 = 4LL;
  v26 = &a8;
  v25 = 4LL;
  v27 = 4LL;
  return sub_1C001579C((__int64)L"NULL", &stru_1C0088C10, 0LL, 6u, &v15);
}
