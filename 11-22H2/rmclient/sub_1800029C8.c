/*
 * XREFs of sub_1800029C8 @ 0x1800029C8
 * Callers:
 *     sub_180018170 @ 0x180018170 (sub_180018170.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800029C8(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    result = (**(__int64 (__fastcall ***)(__int64, _QWORD))a1)(a1, 0LL);
    *(_BYTE *)(a1 + 8) = 0;
  }
  return result;
}
