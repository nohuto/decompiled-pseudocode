/*
 * XREFs of ??$_Move_backward_unchecked@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@0@V10@00@Z @ 0x1805B29F4
 * Callers:
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@0@V10@00@Z @ 0x1805B2AC0 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UApplicationViewHistory.c)
 * Callees:
 *     ?_Tidy@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@AEAAXXZ @ 0x180120818 (-_Tidy@-$deque@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@.c)
 *     ?_Take_contents@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@AEAAXAEAV12@@Z @ 0x180121758 (-_Take_contents@-$deque@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJG.c)
 */

_OWORD *__fastcall std::_Move_backward_unchecked<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>>(
        _OWORD *a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 v4; // r15
  __int64 v6; // rsi
  __int64 v9; // rax
  _QWORD *v10; // rdx
  struct std::_Container_base12 *v11; // r12
  _QWORD *v12; // r8
  std::_Container_base12 *v13; // rbp
  _OWORD *result; // rax

  v4 = *(_QWORD *)(a2 + 8);
  v6 = a3[1];
  while ( v4 != v6 )
  {
    v9 = *a3;
    --v6;
    --a4[1];
    a3[1] = v6;
    v10 = *(_QWORD **)(*(_QWORD *)(v9 + 8) + 8 * (v6 & (*(_QWORD *)(v9 + 16) - 1LL)));
    v11 = (struct std::_Container_base12 *)(v10 + 2);
    v12 = *(_QWORD **)(*(_QWORD *)(*a4 + 8LL) + 8 * (a4[1] & (*(_QWORD *)(*a4 + 16LL) - 1LL)));
    *v12 = *v10;
    v13 = (std::_Container_base12 *)(v12 + 2);
    v12[1] = v10[1];
    if ( v12 + 2 != v10 + 2 )
    {
      std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::_Tidy(v12 + 2);
      std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::_Take_contents(
        v13,
        v11);
    }
  }
  result = a1;
  *a1 = *(_OWORD *)a4;
  return result;
}
