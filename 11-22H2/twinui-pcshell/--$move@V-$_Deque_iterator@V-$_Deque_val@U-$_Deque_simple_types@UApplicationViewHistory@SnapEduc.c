/*
 * XREFs of ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@0@V10@00@Z @ 0x180032568
 * Callers:
 *     ?erase@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@2@0@Z @ 0x180031D60 (-erase@-$deque@UApplicationViewHistory@SnapEducationHandler@@V-$allocator@UApplicationViewHistor.c)
 * Callees:
 *     ?_Tidy@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@AEAAXXZ @ 0x18003219C (-_Tidy@-$deque@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@.c)
 *     ?_Take_contents@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@AEAAXAEAV12@@Z @ 0x180032508 (-_Take_contents@-$deque@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJG.c)
 */

__int64 **__fastcall std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>>(
        __int64 **a1,
        __int64 **a2,
        __int64 a3,
        __int64 **a4)
{
  __int64 *v5; // rbp
  __int64 v6; // r14
  __int64 *v7; // rbx
  __int64 *v8; // rsi
  __int64 v9; // r15
  __int64 *v10; // rax
  __int64 **result; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // r13
  _QWORD *v14; // r8
  _QWORD *v15; // r12

  v5 = a2[2];
  if ( *a2 )
    v6 = **a2;
  else
    v6 = 0LL;
  v7 = *(__int64 **)(a3 + 16);
  v8 = a4[2];
  if ( *a4 )
    v9 = **a4;
  else
    v9 = 0LL;
  while ( v5 != v7 )
  {
    v12 = *(_QWORD **)(*(_QWORD *)(v6 + 8) + 8 * ((unsigned __int64)v5 & (*(_QWORD *)(v6 + 16) - 1LL)));
    v13 = v12 + 2;
    v14 = *(_QWORD **)(*(_QWORD *)(v9 + 8) + 8 * ((unsigned __int64)v8 & (*(_QWORD *)(v9 + 16) - 1LL)));
    *v14 = *v12;
    v15 = v14 + 2;
    v14[1] = v12[1];
    if ( v14 + 2 != v12 + 2 )
    {
      std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::_Tidy(v14 + 2);
      std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::_Take_contents(
        v15,
        v13);
    }
    v8 = (__int64 *)((char *)v8 + 1);
    v5 = (__int64 *)((char *)v5 + 1);
  }
  v10 = *a4;
  a1[1] = 0LL;
  *a1 = v10;
  result = a1;
  a1[2] = v8;
  a4[2] = v8;
  return result;
}
