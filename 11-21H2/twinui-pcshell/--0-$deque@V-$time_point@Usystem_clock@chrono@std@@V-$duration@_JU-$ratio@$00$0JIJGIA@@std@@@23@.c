/*
 * XREFs of ??0?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@QEAA@AEBV01@@Z @ 0x18012089C
 * Callers:
 *     ?WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z @ 0x18012041C (-WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ??$emplace_back@AEBV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@QEAAAEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@1@AEBV231@@Z @ 0x180022788 (--$emplace_back@AEBV-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJGIA@@s.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  _QWORD *v9; // [rsp+30h] [rbp-28h]

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  *v9 = a1;
  v9[1] = 0LL;
  *a1 = v9;
  v4 = *(_QWORD *)(a2 + 24);
  v5 = v4 + *(_QWORD *)(a2 + 32);
  v6 = a2;
  v7 = v4;
  while ( v4 != v5 )
  {
    std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::emplace_back<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>> const &>(
      a1,
      (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 8 * ((v7 >> 1) & (*(_QWORD *)(v6 + 16) - 1LL))) + 8 * (v7 & 1)));
    v4 = ++v7;
  }
  return a1;
}
