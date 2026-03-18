/*
 * XREFs of __report_gsfailure @ 0x1C0009B40
 * Callers:
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn _report_gsfailure(ULONG_PTR StackCookie)
{
  KeBugCheckEx(0xF7u, StackCookie, _security_cookie, _security_cookie_complement, 0LL);
}
