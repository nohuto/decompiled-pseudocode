/*
 * XREFs of sub_140920C6C @ 0x140920C6C
 * Callers:
 *     sub_140716F80 @ 0x140716F80 (sub_140716F80.c)
 * Callees:
 *     sub_1407CD270 @ 0x1407CD270 (sub_1407CD270.c)
 */

__int64 __fastcall sub_140920C6C(ULONG_PTR a1, __int64 a2, const UNICODE_STRING *a3, unsigned __int16 *a4, _DWORD *a5)
{
  unsigned int v6[6]; // [rsp+30h] [rbp-18h] BYREF

  v6[0] = 0;
  sub_1407CD270(a1, a2, a3, a4, a5, (int *)v6);
  return v6[0];
}
