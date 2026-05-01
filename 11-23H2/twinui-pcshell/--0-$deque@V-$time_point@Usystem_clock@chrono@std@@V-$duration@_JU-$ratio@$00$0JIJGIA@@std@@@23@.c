/*
 * XREFs of ??0?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@QEAA@AEBV01@@Z @ 0x18003221C
 * Callers:
 *     ?WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z @ 0x180031F18 (-WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ??0?$_Container_proxy_ptr12@V?$allocator@U_Container_proxy@std@@@std@@@std@@QEAA@AEAV?$allocator@U_Container_proxy@std@@@1@AEAU_Container_base12@1@@Z @ 0x1800322D4 (--0-$_Container_proxy_ptr12@V-$allocator@U_Container_proxy@std@@@std@@@std@@QEAA@AEAV-$allocator.c)
 *     ??$_Emplace_back_internal@AEBV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@AEAAXAEBV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@1@@Z @ 0x180032694 (--$_Emplace_back_internal@AEBV-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>(
        _QWORD *a1,
        _QWORD *a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbp
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF
  char v9; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+68h] [rbp+10h]

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  std::_Container_proxy_ptr12<std::allocator<std::_Container_proxy>>::_Container_proxy_ptr12<std::allocator<std::_Container_proxy>>(
    v8,
    &v9,
    a1);
  v4 = a2[3];
  v5 = v4 + a2[4];
  v10 = a1;
  while ( 1 )
  {
    v6 = v4;
    if ( v4 == v5 )
      break;
    std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::_Emplace_back_internal<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>> const &>(
      a1,
      *(_QWORD *)(a2[1] + 8 * ((a2[2] - 1LL) & (v4 >> 1))) + 8 * (v4 & 1));
    v4 = v6 + 1;
  }
  return a1;
}
