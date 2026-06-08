/*
 * XREFs of HvRequestIdle @ 0x1C0009D30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HvRequestIdle(__int128 *a1)
{
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a1;
  return ((__int64 (__fastcall *)(__int128 *))qword_1C0012878)(&v2);
}
