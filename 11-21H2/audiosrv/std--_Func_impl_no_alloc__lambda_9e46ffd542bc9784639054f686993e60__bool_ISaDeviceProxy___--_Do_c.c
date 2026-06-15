/*
 * XREFs of std::_Func_impl_no_alloc__lambda_9e46ffd542bc9784639054f686993e60__bool_ISaDeviceProxy___::_Do_call @ 0x1800FD550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall std::_Func_impl_no_alloc__lambda_9e46ffd542bc9784639054f686993e60__bool_ISaDeviceProxy___::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rbx

  v2 = *a2;
  return (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 80LL))(*a2) != 2
      && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2) != 3;
}
