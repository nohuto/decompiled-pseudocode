/*
 * XREFs of ??$assign@V?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@std@@@std@@@std@@$0A@@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@QEAAXV?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@std@@@std@@@1@0@Z @ 0x18002261C
 * Callers:
 *     ?WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z @ 0x18012041C (-WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ??$emplace_back@AEBV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@QEAAAEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@1@AEBV231@@Z @ 0x180022788 (--$emplace_back@AEBV-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJGIA@@s.c)
 */

__int64 __fastcall std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::assign<std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>>>,0>(
        _QWORD *a1,
        __int64 *a2,
        __int128 *a3)
{
  unsigned __int64 v3; // rsi
  __int64 v5; // rbp
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rdi
  unsigned __int64 i; // r11
  __int64 result; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // rdx
  __int128 v13; // [rsp+30h] [rbp-18h]

  v3 = a1[3];
  v5 = *a2;
  v6 = v3 + a1[4];
  v7 = a2[1];
  v13 = *a3;
  while ( v7 != *((_QWORD *)&v13 + 1) )
  {
    if ( v3 == v6 )
    {
      do
      {
        result = std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::emplace_back<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>> const &>(
                   a1,
                   *(_QWORD *)(*(_QWORD *)(v5 + 8) + 8 * ((*(_QWORD *)(v5 + 16) - 1LL) & (v7 >> 1))) + 8 * (v7 & 1));
        ++v7;
      }
      while ( v7 != *((_QWORD *)&v13 + 1) );
      return result;
    }
    v10 = v3 >> 1;
    v11 = v3++ & 1;
    result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 8 * ((v7 >> 1) & (*(_QWORD *)(v5 + 16) - 1LL))) + 8 * (v7 & 1));
    ++v7;
    *(_QWORD *)(*(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & v10)) + 8 * v11) = result;
  }
  for ( i = v6 - v3; i; --i )
  {
    if ( a1[4]-- == 1LL )
      a1[3] = 0LL;
  }
  return result;
}
