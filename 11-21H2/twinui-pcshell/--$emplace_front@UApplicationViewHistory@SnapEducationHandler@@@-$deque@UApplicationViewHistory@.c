/*
 * XREFs of ??$emplace_front@UApplicationViewHistory@SnapEducationHandler@@@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@QEAAAEAUApplicationViewHistory@SnapEducationHandler@@$$QEAU23@@Z @ 0x180120964
 * Callers:
 *     ?WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z @ 0x18012041C (-WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Take_contents@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@AEAAXAEAV12@@Z @ 0x180121758 (-_Take_contents@-$deque@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJG.c)
 *     ?_Growmap@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@AEAAX_K@Z @ 0x180187490 (-_Growmap@-$deque@UApplicationViewHistory@SnapEducationHandler@@V-$allocator@UApplicationViewHis.c)
 */

__int64 __fastcall std::deque<SnapEducationHandler::ApplicationViewHistory>::emplace_front<SnapEducationHandler::ApplicationViewHistory>(
        _QWORD *a1,
        _QWORD *a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  bool v6; // zf
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  _QWORD *v11; // rcx
  _QWORD *v12; // rbx
  _QWORD *v13; // rax

  v4 = a1[2];
  if ( v4 <= a1[4] + 1LL )
  {
    std::deque<SnapEducationHandler::ApplicationViewHistory>::_Growmap(a1);
    v4 = a1[2];
  }
  v5 = v4 - 1;
  v6 = ((v4 - 1) & a1[3]) == 0;
  a1[3] &= v4 - 1;
  v7 = a1[3];
  if ( v6 )
    v7 = v4;
  v8 = a1[1];
  v9 = v7 - 1;
  v10 = v9 & v5;
  if ( !*(_QWORD *)(v8 + 8 * v10) )
  {
    *(_QWORD *)(a1[1] + 8 * v10) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
    v8 = a1[1];
  }
  v11 = *(_QWORD **)(v8 + 8 * v10);
  *v11 = *a2;
  v12 = v11 + 2;
  v11[1] = a2[1];
  v11[2] = 0LL;
  v11[3] = 0LL;
  v11[4] = 0LL;
  v11[5] = 0LL;
  v11[6] = 0LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  v13[1] = 0LL;
  *v12 = v13;
  *v13 = v12;
  std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::_Take_contents(
    v12,
    a2 + 2);
  a1[3] = v9;
  ++a1[4];
  return *(_QWORD *)(a1[1] + 8 * (v9 & (a1[2] - 1LL)));
}
