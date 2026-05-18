/*
 * XREFs of sub_18000B53C @ 0x18000B53C
 * Callers:
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_18000C8D4 @ 0x18000C8D4 (sub_18000C8D4.c)
 * Callees:
 *     _o_terminate @ 0x18000C09C (_o_terminate.c)
 *     __current_exception @ 0x18000C0B4 (__current_exception.c)
 *     __current_exception_context @ 0x18000C0C0 (__current_exception_context.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000B53C(__int64 a1, __int64 a2, __int64 a3, __int64 (__fastcall *a4)(__int64))
{
  __int64 i; // rbx
  __int64 result; // rax

  for ( i = 0LL; i != a3; ++i )
  {
    a1 -= a2;
    result = a4(a1);
  }
  return result;
}
