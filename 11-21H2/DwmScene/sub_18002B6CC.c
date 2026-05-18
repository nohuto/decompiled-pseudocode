/*
 * XREFs of sub_18002B6CC @ 0x18002B6CC
 * Callers:
 *     sub_1800508C0 @ 0x1800508C0 (sub_1800508C0.c)
 *     sub_1800532F0 @ 0x1800532F0 (sub_1800532F0.c)
 *     sub_180064DC0 @ 0x180064DC0 (sub_180064DC0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002B6CC(__int64 a1, __int64 a2, __int64 a3, __int64 (__fastcall *a4)(__int64))
{
  __int64 result; // rax

  do
  {
    result = a4(a1);
    a1 += a2;
    --a3;
  }
  while ( a3 );
  return result;
}
