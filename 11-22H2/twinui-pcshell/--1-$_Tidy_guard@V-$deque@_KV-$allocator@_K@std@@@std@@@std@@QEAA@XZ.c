/*
 * XREFs of ??1?$_Tidy_guard@V?$deque@_KV?$allocator@_K@std@@@std@@@std@@QEAA@XZ @ 0x180636794
 * Callers:
 *     _std::deque_unsigned___int64_std::allocator_unsigned___int64___::deque_unsigned___int64_std::allocator_unsigned___int64____::_1_::dtor$4 @ 0x1802BE2C8 (_std--deque_unsigned___int64_std--allocator_unsigned___int64___--deque_unsigned___i_ea_1802BE2C8.c)
 * Callees:
 *     ?_Tidy@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXXZ @ 0x180145244 (-_Tidy@-$deque@_KV-$allocator@_K@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Tidy_guard<std::deque<unsigned __int64>>::~_Tidy_guard<std::deque<unsigned __int64>>(
        _QWORD **a1)
{
  _QWORD *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return std::deque<unsigned __int64>::_Tidy(v1);
  return result;
}
