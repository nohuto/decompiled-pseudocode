/*
 * XREFs of ??1?$_Container_proxy_ptr12@V?$allocator@U_Container_proxy@std@@@std@@@std@@QEAA@XZ @ 0x180577AF0
 * Callers:
 *     _std::deque_unsigned___int64_std::allocator_unsigned___int64___::deque_unsigned___int64_std::allocator_unsigned___int64____::_1_::dtor$0 @ 0x18021457F (_std--deque_unsigned___int64_std--allocator_unsigned___int64___--deque_unsigned___int64_std--all.c)
 *     _std::deque_std::chrono::time_point_std::chrono::system_clock_std::chrono::duration___int64_std::ratio_1_10000000______std::allocator_std::chrono::time_point_std::chrono::system_clock_std::chrono::duration___int64_std::ratio_1_10000000_________::deque_std::chrono::time_point_std::chrono::system_clock_std::chrono::duration___int64_std::ratio_1_10000000______std::allocator_std::chrono::time_point_std::chrono::system_clock_std::chrono::duration___int64_std::ratio_1_10000000__________::_1_::dtor$0 @ 0x18022011B (_std--deque_std--chrono--time_point_std--chrono--system_clock_std--chrono--duration___int64_std-.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Container_proxy_ptr12<std::allocator<std::_Container_proxy>>::~_Container_proxy_ptr12<std::allocator<std::_Container_proxy>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x10uLL);
}
