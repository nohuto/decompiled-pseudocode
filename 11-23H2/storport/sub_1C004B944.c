/*
 * XREFs of sub_1C004B944 @ 0x1C004B944
 * Callers:
 *     sub_1C0011880 @ 0x1C0011880 (sub_1C0011880.c)
 * Callees:
 *     sub_1C001579C @ 0x1C001579C (sub_1C001579C.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1C004B944(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        const wchar_t *a4,
        char a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-39h] BYREF
  const wchar_t *v11; // [rsp+40h] [rbp-29h]
  int v12; // [rsp+48h] [rbp-21h]
  int v13; // [rsp+4Ch] [rbp-1Dh]
  char *v14; // [rsp+50h] [rbp-19h]
  __int64 v15; // [rsp+58h] [rbp-11h]
  __int64 v16; // [rsp+60h] [rbp-9h]
  __int64 v17; // [rsp+68h] [rbp-1h]
  char *v18; // [rsp+70h] [rbp+7h]
  __int64 v19; // [rsp+78h] [rbp+Fh]
  const wchar_t *v20; // [rsp+80h] [rbp+17h]
  __int64 v21; // [rsp+88h] [rbp+1Fh]

  if ( a4 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a4[v7] );
    v8 = (unsigned int)(2 * v7 + 2);
  }
  else
  {
    v8 = 10LL;
  }
  v12 = v8;
  v13 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v15 = 4LL;
  v11 = a4;
  v14 = &a5;
  v16 = a6;
  v18 = &a7;
  v20 = L"PowerUp";
  v17 = 16LL;
  v19 = 4LL;
  v21 = 16LL;
  return sub_1C001579C(v8, &stru_1C0089480, a3, 6u, &v10);
}
