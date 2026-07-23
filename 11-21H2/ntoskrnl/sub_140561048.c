/*
 * XREFs of sub_140561048 @ 0x140561048
 * Callers:
 *     sub_1402DD9AC @ 0x1402DD9AC (sub_1402DD9AC.c)
 *     sub_14065F7D4 @ 0x14065F7D4 (sub_14065F7D4.c)
 *     sub_140749ECC @ 0x140749ECC (sub_140749ECC.c)
 *     sub_14076C3C0 @ 0x14076C3C0 (sub_14076C3C0.c)
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 *     sub_14078B2D4 @ 0x14078B2D4 (sub_14078B2D4.c)
 *     sub_14078C398 @ 0x14078C398 (sub_14078C398.c)
 *     sub_140811C50 @ 0x140811C50 (sub_140811C50.c)
 * Callees:
 *     sub_1402D1760 @ 0x1402D1760 (sub_1402D1760.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140561048(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax
  int v5; // ecx
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-38h] BYREF
  const wchar_t *v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v9 = v5;
  v10 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v8 = a4;
  return sub_1402D1760(qword_140C03910, a2, 0LL, 2u, &v7);
}
