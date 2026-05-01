/*
 * XREFs of ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@0@V10@00@Z @ 0x18002068C
 * Callers:
 *     ?erase@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@2@0@Z @ 0x1800204A8 (-erase@-$deque@UApplicationViewHistory@SnapEducationHandler@@V-$allocator@UApplicationViewHistor.c)
 * Callees:
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x18002071C (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@UApplicationViewHistory@SnapEduc.c)
 *     ?_Tidy@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@AEAAXXZ @ 0x180120818 (-_Tidy@-$deque@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@.c)
 *     ?_Take_contents@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@AEAAXAEAV12@@Z @ 0x180121758 (-_Take_contents@-$deque@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJG.c)
 */

__int64 __fastcall std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>>(
        __int64 a1,
        __int64 **a2,
        __int64 a3,
        __int64 **a4)
{
  __int64 v4; // rbx
  __int64 *v5; // rsi
  __int64 v8; // r15
  __int64 *v9; // r13
  __int64 *v10; // rbp
  _QWORD *v12; // rdx
  _QWORD *v13; // r8
  _QWORD *v14; // r12
  _QWORD *v15; // [rsp+50h] [rbp+8h]

  v4 = 0LL;
  v5 = a2[2];
  if ( *a2 )
    v8 = **a2;
  else
    v8 = 0LL;
  v9 = *(__int64 **)(a3 + 16);
  v10 = a4[2];
  if ( *a4 )
    v4 = **a4;
  while ( v5 != v9 )
  {
    v12 = *(_QWORD **)(*(_QWORD *)(v8 + 8) + 8 * ((unsigned __int64)v5 & (*(_QWORD *)(v8 + 16) - 1LL)));
    v13 = *(_QWORD **)(*(_QWORD *)(v4 + 8) + 8 * ((unsigned __int64)v10 & (*(_QWORD *)(v4 + 16) - 1LL)));
    *v13 = *v12;
    v14 = v13 + 2;
    v13[1] = v12[1];
    v15 = v12 + 2;
    if ( v13 + 2 != v12 + 2 )
    {
      std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::_Tidy(v13 + 2);
      std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::_Take_contents(
        v14,
        v15);
    }
    v10 = (__int64 *)((char *)v10 + 1);
    v5 = (__int64 *)((char *)v5 + 1);
  }
  a4[2] = v10;
  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>(
    a1,
    a4);
  return a1;
}
