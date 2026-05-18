/*
 * XREFs of sub_18000FBC8 @ 0x18000FBC8
 * Callers:
 *     sub_18000D6E4 @ 0x18000D6E4 (sub_18000D6E4.c)
 *     sub_18000EE74 @ 0x18000EE74 (sub_18000EE74.c)
 * Callees:
 *     sub_18000DAB4 @ 0x18000DAB4 (sub_18000DAB4.c)
 */

_QWORD *__fastcall sub_18000FBC8(HANDLE *a1, _QWORD *a2)
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
    sub_18000DAB4(retaddr, v5, v6, v7);
  }
  *a2 = v2;
  return a2;
}
