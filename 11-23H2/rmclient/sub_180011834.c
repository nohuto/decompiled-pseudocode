/*
 * XREFs of sub_180011834 @ 0x180011834
 * Callers:
 *     sub_18000D260 @ 0x18000D260 (sub_18000D260.c)
 *     sub_18000D3CC @ 0x18000D3CC (sub_18000D3CC.c)
 *     sub_1800101BC @ 0x1800101BC (sub_1800101BC.c)
 *     sub_180010248 @ 0x180010248 (sub_180010248.c)
 * Callees:
 *     sub_18000DB40 @ 0x18000DB40 (sub_18000DB40.c)
 */

_QWORD *__fastcall sub_180011834(HANDLE *a1, _QWORD *a2)
{
  HANDLE v2; // rbx
  DWORD v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1;
  v4 = WaitForSingleObjectEx(*a1, 0xFFFFFFFF, 0);
  if ( v4 == 258 )
  {
    v2 = 0LL;
  }
  else if ( (v4 & 0xFFFFFF7F) != 0 )
  {
    sub_18000DB40(retaddr, v5, v6, v7);
  }
  *a2 = v2;
  return a2;
}
