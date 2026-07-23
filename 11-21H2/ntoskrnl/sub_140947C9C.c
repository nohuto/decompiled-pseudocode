/*
 * XREFs of sub_140947C9C @ 0x140947C9C
 * Callers:
 *     sub_140946B60 @ 0x140946B60 (sub_140946B60.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140764CE4 @ 0x140764CE4 (sub_140764CE4.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 */

void sub_140947C9C()
{
  PVOID v0; // rbx
  _DWORD v1[4]; // [rsp+20h] [rbp-28h] BYREF

  v0 = qword_140C46278;
  v1[1] = 0;
  v1[2] = 0;
  v1[0] = 49;
  sub_14077572C(1);
  sub_140764CE4((__int64)v0, (__int64)sub_140852BC0, (__int64)v1);
  sub_140775698(1);
}
