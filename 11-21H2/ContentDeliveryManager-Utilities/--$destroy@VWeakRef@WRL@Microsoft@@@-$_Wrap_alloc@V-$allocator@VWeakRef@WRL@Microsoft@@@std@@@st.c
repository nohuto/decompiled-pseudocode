/*
 * XREFs of ??$destroy@VWeakRef@WRL@Microsoft@@@?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXPEAVWeakRef@WRL@Microsoft@@@Z @ 0x18006D760
 * Callers:
 *     _std::_Uninit_move_Microsoft::WRL::WeakRef___Microsoft::WRL::WeakRef___std::allocator_Microsoft::WRL::WeakRef__Microsoft::WRL::WeakRef__::_1_::catch$1 @ 0x1800F047F (_std--_Uninit_move_Microsoft--WRL--WeakRef___Microsoft--WRL--WeakRef___std--allocator_Microsoft-.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Wrap_alloc<std::allocator<Microsoft::WRL::WeakRef>>::destroy<Microsoft::WRL::WeakRef>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
