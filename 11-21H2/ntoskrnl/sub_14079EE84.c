/*
 * XREFs of sub_14079EE84 @ 0x14079EE84
 * Callers:
 *     sub_140701218 @ 0x140701218 (sub_140701218.c)
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 *     sub_1407A34A0 @ 0x1407A34A0 (sub_1407A34A0.c)
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14079EF3C @ 0x14079EF3C (sub_14079EF3C.c)
 */

__int64 __fastcall sub_14079EE84(ULONG_PTR a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // rax
  int v7; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v8[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v8, 0, sizeof(v8));
  sub_14030D5C0(a1, 0LL, (__int64)v8, a4);
  v5 = (void *)sub_14030E7C0(a2, 0, &v7);
  if ( v5 )
    sub_14079EF3C(v5);
  return sub_1402D0930((__int64)v8, 0LL);
}
