/*
 * XREFs of sub_140AA0D20 @ 0x140AA0D20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403BF7F4 @ 0x1403BF7F4 (sub_1403BF7F4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405FDF9C @ 0x1405FDF9C (sub_1405FDF9C.c)
 *     sub_140A92CE0 @ 0x140A92CE0 (sub_140A92CE0.c)
 *     sub_140A92D34 @ 0x140A92D34 (sub_140A92D34.c)
 */

__int64 __fastcall sub_140AA0D20(__int64 a1, __int64 a2)
{
  char v5[40]; // [rsp+58h] [rbp-80h] BYREF
  const void *retaddr; // [rsp+D8h] [rbp+0h]

  if ( (dword_140C29FC0 & 0x10) != 0 && KeGetCurrentIrql() )
  {
    sub_140A92CE0(586);
    if ( (int)sub_1403BF7F4(v5, 38LL, (__int64)"CulpritAddress = %p.\n", retaddr) >= 0 )
      sub_1405FDF9C(v5);
    sub_140A92D34(586, (ULONG_PTR)retaddr, 0LL, 0LL);
  }
  return sub_14042A5E0(a1, a2);
}
