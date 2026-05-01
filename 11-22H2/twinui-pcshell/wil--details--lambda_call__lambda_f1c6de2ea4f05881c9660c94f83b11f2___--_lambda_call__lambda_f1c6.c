/*
 * XREFs of wil::details::lambda_call__lambda_f1c6de2ea4f05881c9660c94f83b11f2___::_lambda_call__lambda_f1c6de2ea4f05881c9660c94f83b11f2___ @ 0x1804CF000
 * Callers:
 *     _UwpWindowEventDispatcher::OverrideNavigationLevelForView_::_1_::dtor$1 @ 0x1804D1A30 (_UwpWindowEventDispatcher--OverrideNavigationLevelForView_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_f1c6de2ea4f05881c9660c94f83b11f2___::_lambda_call__lambda_f1c6de2ea4f05881c9660c94f83b11f2___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(***(_QWORD ***)a1 + 312LL))(**(_QWORD **)a1, 2LL);
  }
  return result;
}
