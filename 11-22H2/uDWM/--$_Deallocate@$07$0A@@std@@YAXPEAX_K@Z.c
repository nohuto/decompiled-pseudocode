/*
 * XREFs of ??$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z @ 0x1800A276C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_a1bd6a3f4010080cf46ed714b573822e__void_::_Delete_this @ 0x1800A41F0 (std--_Func_impl_no_alloc__lambda_a1bd6a3f4010080cf46ed714b573822e__void_--_Delete_this.c)
 *     std::_Func_impl_no_alloc__lambda_08193cab3da7781645f32a8d9f5d6a66__void_::_Delete_this @ 0x1800FB5F0 (std--_Func_impl_no_alloc__lambda_08193cab3da7781645f32a8d9f5d6a66__void_--_Delete_this.c)
 *     ?_Delete_this@?$_Func_impl_no_alloc@UUnloadDelegate@Transitions@Udwm@winrt@@X$$V@std@@EEAAX_N@Z @ 0x180104EE0 (-_Delete_this@-$_Func_impl_no_alloc@UUnloadDelegate@Transitions@Udwm@winrt@@X$$V@std@@EEAAX_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Deallocate<8,0>(__int64 a1)
{
  return (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
           WPF::g_pProcessHeap,
           a1);
}
