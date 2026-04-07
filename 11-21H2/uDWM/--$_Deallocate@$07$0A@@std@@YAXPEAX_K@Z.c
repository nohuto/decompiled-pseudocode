/*
 * XREFs of ??$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z @ 0x180099664
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_4f6e55dd49ac94c28a6037e68643a924__long_::_Delete_this @ 0x180007720 (std--_Func_impl_no_alloc__lambda_4f6e55dd49ac94c28a6037e68643a924__long_--_Delete_this.c)
 *     std::_Func_impl_no_alloc__lambda_02cc1c50b8ad83b5853f3b1d8986beec__void_::_Delete_this @ 0x18009BB80 (std--_Func_impl_no_alloc__lambda_02cc1c50b8ad83b5853f3b1d8986beec__void_--_Delete_this.c)
 *     ?_Delete_this@?$_Func_impl_no_alloc@UUnloadDelegate@Transitions@Udwm@winrt@@X$$V@std@@EEAAX_N@Z @ 0x1800FFBD0 (-_Delete_this@-$_Func_impl_no_alloc@UUnloadDelegate@Transitions@Udwm@winrt@@X$$V@std@@EEAAX_N@Z.c)
 *     std::_Func_impl_no_alloc__lambda_08193cab3da7781645f32a8d9f5d6a66__void_::_Delete_this @ 0x1800FFC20 (std--_Func_impl_no_alloc__lambda_08193cab3da7781645f32a8d9f5d6a66__void_--_Delete_this.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Deallocate<8,0>(__int64 a1)
{
  return (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
           WPF::g_pProcessHeap,
           a1);
}
