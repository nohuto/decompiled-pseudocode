/*
 * XREFs of sub_1403A6ED8 @ 0x1403A6ED8
 * Callers:
 *     sub_140560174 @ 0x140560174 (sub_140560174.c)
 *     sub_140811518 @ 0x140811518 (sub_140811518.c)
 * Callees:
 *     sub_1402D1760 @ 0x1402D1760 (sub_1402D1760.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1403A6ED8(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, const wchar_t *a4, char a5)
{
  __int64 v5; // rax
  int v6; // ecx
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v9; // [rsp+40h] [rbp-38h]
  int v10; // [rsp+48h] [rbp-30h]
  int v11; // [rsp+4Ch] [rbp-2Ch]
  char *v12; // [rsp+50h] [rbp-28h]
  __int64 v13; // [rsp+58h] [rbp-20h]

  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a4[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10;
  }
  v10 = v6;
  v11 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v13 = 4LL;
  v9 = a4;
  v12 = &a5;
  return sub_1402D1760(qword_140C03910, a2, a3, 3u, &v8);
}
