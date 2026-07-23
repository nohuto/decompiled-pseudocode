/*
 * XREFs of sub_1405622A4 @ 0x1405622A4
 * Callers:
 *     sub_140950084 @ 0x140950084 (sub_140950084.c)
 * Callees:
 *     sub_1402D1760 @ 0x1402D1760 (sub_1402D1760.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS sub_1405622A4(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  const wchar_t *v3; // rax
  __int64 v4; // rcx
  int v6; // r9d
  __int64 v7; // rdx
  int v8; // r8d
  const wchar_t *v9; // rax
  bool v10; // zf
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-21h] BYREF
  va_list v13; // [rsp+40h] [rbp-11h]
  __int64 v14; // [rsp+48h] [rbp-9h]
  const wchar_t *v15; // [rsp+50h] [rbp-1h]
  int v16; // [rsp+58h] [rbp+7h]
  int v17; // [rsp+5Ch] [rbp+Bh]
  const wchar_t *v18; // [rsp+60h] [rbp+Fh]
  int v19; // [rsp+68h] [rbp+17h]
  int v20; // [rsp+6Ch] [rbp+1Bh]
  va_list v21; // [rsp+70h] [rbp+1Fh]
  __int64 v22; // [rsp+78h] [rbp+27h]
  __int64 v23; // [rsp+B8h] [rbp+67h] BYREF
  va_list va; // [rsp+B8h] [rbp+67h]
  const wchar_t *v25; // [rsp+C0h] [rbp+6Fh]
  const wchar_t *v26; // [rsp+C8h] [rbp+77h]
  va_list va1; // [rsp+D0h] [rbp+7Fh] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v23 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, const wchar_t *);
  v26 = va_arg(va1, const wchar_t *);
  v14 = 8LL;
  va_copy(v13, va);
  v3 = v25;
  v4 = -1LL;
  v6 = 10;
  if ( v25 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v25[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v16 = v8;
  v17 = 0;
  if ( !v25 )
    v3 = L"NULL";
  v15 = v3;
  v9 = v26;
  v10 = v26 == 0LL;
  if ( v26 )
  {
    do
      ++v4;
    while ( v26[v4] );
    v6 = 2 * v4 + 2;
    v10 = v26 == 0LL;
  }
  if ( v10 )
    v9 = L"NULL";
  v19 = v6;
  v18 = v9;
  v20 = 0;
  va_copy(v21, va1);
  v22 = 8LL;
  return sub_1402D1760(qword_140C03910, a2, 0LL, 5u, &v12);
}
