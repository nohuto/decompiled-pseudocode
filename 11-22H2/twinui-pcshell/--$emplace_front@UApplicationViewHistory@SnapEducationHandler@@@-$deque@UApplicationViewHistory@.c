/*
 * XREFs of ??$emplace_front@UApplicationViewHistory@SnapEducationHandler@@@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@QEAA?A_T$$QEAUApplicationViewHistory@SnapEducationHandler@@@Z @ 0x18003240C
 * Callers:
 *     ?WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z @ 0x180031F18 (-WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?_Take_contents@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@AEAAXAEAV12@@Z @ 0x180032508 (-_Take_contents@-$deque@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJG.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x180680774 (-_Growmap@-$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V-$allo.c)
 */

__int64 __fastcall std::deque<SnapEducationHandler::ApplicationViewHistory>::emplace_front<SnapEducationHandler::ApplicationViewHistory>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rax

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::_Growmap();
  v4 = a1[2];
  v5 = a1[3] & (v4 - 1);
  a1[3] = v5;
  if ( !v5 )
    v5 = v4;
  v6 = v5 - 1;
  v7 = v6 & (v4 - 1);
  if ( !*(_QWORD *)(a1[1] + 8 * v7) )
    *(_QWORD *)(a1[1] + 8 * v7) = operator new(0x38uLL);
  v8 = *(_QWORD **)(a1[1] + 8 * v7);
  *v8 = *a2;
  v9 = v8 + 2;
  v8[1] = a2[1];
  v8[2] = 0LL;
  v8[3] = 0LL;
  v8[4] = 0LL;
  v8[5] = 0LL;
  v8[6] = 0LL;
  v10 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(16LL);
  v10[1] = 0LL;
  *v9 = v10;
  *v10 = v9;
  std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::_Take_contents(
    v9,
    a2 + 2);
  a1[3] = v6;
  ++a1[4];
  return *(_QWORD *)(a1[1] + 8 * (v6 & (a1[2] - 1LL)));
}
