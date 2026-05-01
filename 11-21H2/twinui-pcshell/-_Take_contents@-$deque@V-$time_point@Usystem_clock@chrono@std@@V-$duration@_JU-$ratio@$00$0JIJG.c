/*
 * XREFs of ?_Take_contents@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@AEAAXAEAV12@@Z @ 0x180121758
 * Callers:
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@0@V10@00@Z @ 0x18002068C (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UApplicationViewHistory@SnapEduc.c)
 *     ??$emplace_front@UApplicationViewHistory@SnapEducationHandler@@@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@QEAAAEAUApplicationViewHistory@SnapEducationHandler@@$$QEAU23@@Z @ 0x180120964 (--$emplace_front@UApplicationViewHistory@SnapEducationHandler@@@-$deque@UApplicationViewHistory@.c)
 *     ??$_Move_backward_unchecked@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@0@V10@00@Z @ 0x1805B29F4 (--$_Move_backward_unchecked@V-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@UA.c)
 * Callees:
 *     ?_Swap_proxy_and_iterators@_Container_base12@std@@QEAAXAEAU12@@Z @ 0x1801217A0 (-_Swap_proxy_and_iterators@_Container_base12@std@@QEAAXAEAU12@@Z.c)
 */

__int64 __fastcall std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::_Take_contents(
        std::_Container_base12 *a1,
        struct std::_Container_base12 *a2)
{
  _QWORD *v2; // rdx
  _QWORD *v3; // rcx
  __int64 result; // rax

  std::_Container_base12::_Swap_proxy_and_iterators(a1, a2);
  v3[1] = v2[1];
  v3[2] = v2[2];
  v3[3] = v2[3];
  v3[4] = v2[4];
  result = 0LL;
  v2[1] = 0LL;
  v2[2] = 0LL;
  v2[3] = 0LL;
  v2[4] = 0LL;
  return result;
}
