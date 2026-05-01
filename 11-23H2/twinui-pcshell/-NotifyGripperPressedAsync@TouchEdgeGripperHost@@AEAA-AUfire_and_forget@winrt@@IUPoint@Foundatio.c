/*
 * XREFs of ?NotifyGripperPressedAsync@TouchEdgeGripperHost@@AEAA?AUfire_and_forget@winrt@@IUPoint@Foundation@Windows@3@@Z @ 0x18021FF0C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_c23e8e667a3c4ca3ee30dd3b90606dcd__void_unsigned_int_winrt::Windows::Foundation::Point_const_&_::_Do_call @ 0x180657430 (std--_Func_impl_no_alloc__lambda_c23e8e667a3c4ca3ee30dd3b90606dcd__void_unsigned_in_ea_180657430.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     TouchEdgeGripperHost::NotifyGripperPressedAsync$_InitCoro$2 @ 0x18021FCA0 (TouchEdgeGripperHost--NotifyGripperPressedAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall TouchEdgeGripperHost::NotifyGripperPressedAsync(__int64 a1, _BYTE *a2, int a3, __int64 a4)
{
  void *v6; // rax
  _QWORD v8[15]; // [rsp+30h] [rbp-78h] BYREF
  int v9; // [rsp+B8h] [rbp+10h] BYREF
  int v10; // [rsp+C0h] [rbp+18h] BYREF

  v10 = a3;
  v8[0] = a4;
  v6 = operator new(0x52uLL);
  v9 = 0;
  TouchEdgeGripperHost::NotifyGripperPressedAsync__InitCoro_2(&v9, (__int64)v6, a2, &v10, v8, a1);
  return a2;
}
