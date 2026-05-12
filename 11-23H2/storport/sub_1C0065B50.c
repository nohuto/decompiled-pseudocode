/*
 * XREFs of sub_1C0065B50 @ 0x1C0065B50
 * Callers:
 *     sub_1C0066298 @ 0x1C0066298 (sub_1C0066298.c)
 * Callees:
 *     sub_1C001579C @ 0x1C001579C (sub_1C001579C.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1C0065B50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v11; // [rsp+30h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+40h] [rbp-51h] BYREF
  const wchar_t *v13; // [rsp+50h] [rbp-41h]
  int v14; // [rsp+58h] [rbp-39h]
  int v15; // [rsp+5Ch] [rbp-35h]
  char *v16; // [rsp+60h] [rbp-31h]
  __int64 v17; // [rsp+68h] [rbp-29h]
  char *v18; // [rsp+70h] [rbp-21h]
  __int64 v19; // [rsp+78h] [rbp-19h]
  char *v20; // [rsp+80h] [rbp-11h]
  __int64 v21; // [rsp+88h] [rbp-9h]
  char *v22; // [rsp+90h] [rbp-1h]
  __int64 v23; // [rsp+98h] [rbp+7h]
  __int64 *v24; // [rsp+A0h] [rbp+Fh]
  __int64 v25; // [rsp+A8h] [rbp+17h]

  v11 = qword_1C0093AF8;
  if ( a4 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a4[v8] );
    v9 = (unsigned int)(2 * v8 + 2);
  }
  else
  {
    v9 = 10LL;
  }
  v15 = 0;
  v14 = v9;
  if ( !a4 )
    a4 = L"NULL";
  v17 = 4LL;
  v13 = a4;
  v16 = &a5;
  v19 = 4LL;
  v18 = &a6;
  v21 = 4LL;
  v20 = &a7;
  v23 = 4LL;
  v22 = &a8;
  v24 = &v11;
  v25 = 8LL;
  return sub_1C001579C(v9, &stru_1C0089028, 0LL, 7u, &v12);
}
