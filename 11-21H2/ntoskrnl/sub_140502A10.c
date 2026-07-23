/*
 * XREFs of sub_140502A10 @ 0x140502A10
 * Callers:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn sub_140502A10(ULONG_PTR BugCheckParameter1)
{
  KeBugCheckEx(0xF7u, BugCheckParameter1, _security_cookie, qword_140C0CA18, 0LL);
}
