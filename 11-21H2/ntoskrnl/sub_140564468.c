/*
 * XREFs of sub_140564468 @ 0x140564468
 * Callers:
 *     sub_140788300 @ 0x140788300 (sub_140788300.c)
 * Callees:
 *     sub_1402D1760 @ 0x1402D1760 (sub_1402D1760.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140564468(__int64 a1, __int64 a2, __int64 a3, __int64 a4, const wchar_t *a5, char a6)
{
  const wchar_t *v6; // rcx
  __int64 v7; // rax
  int v8; // edx
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-58h] BYREF
  __int64 v11; // [rsp+40h] [rbp-48h]
  __int64 v12; // [rsp+48h] [rbp-40h]
  const wchar_t *v13; // [rsp+50h] [rbp-38h]
  int v14; // [rsp+58h] [rbp-30h]
  int v15; // [rsp+5Ch] [rbp-2Ch]
  char *v16; // [rsp+60h] [rbp-28h]
  __int64 v17; // [rsp+68h] [rbp-20h]

  v6 = a5;
  v11 = a4;
  v12 = 16LL;
  if ( a5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a5[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v14 = v8;
  v15 = 0;
  if ( !a5 )
    v6 = L"NULL";
  v13 = v6;
  v16 = &a6;
  v17 = 4LL;
  return sub_1402D1760(qword_140C03910, (const EVENT_DESCRIPTOR *)qword_140014F70, 0LL, 4u, &v10);
}
