/*
 * XREFs of ??$emplace_front@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@QEAA?A_T$$QEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@1@@Z @ 0x18069C844
 * Callers:
 *     ?HandlePinRejected@PinHistory@@QEAAXV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x1806A2A60 (-HandlePinRejected@PinHistory@@QEAAXV-$shared_ptr@VPinOperationContext@@@std@@@Z.c)
 *     ?HandlePinRequested@PinHistory@@QEAAXV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x1806A2CDC (-HandlePinRequested@PinHistory@@QEAAXV-$shared_ptr@VPinOperationContext@@@std@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800C14DC (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@AEAAX_K@Z @ 0x1806A91C4 (-_Growmap@-$deque@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_clock@.c)
 */

__int64 __fastcall std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::emplace_front<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rax
  bool v5; // zf
  __int64 v6; // rbp
  __int64 v7; // rbp
  __int64 v8; // rsi
  size_t size_of; // rax
  _QWORD *v10; // rcx

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::_Growmap();
  v4 = a1[2];
  v5 = ((v4 - 1) & a1[3]) == 0;
  a1[3] &= v4 - 1;
  v6 = a1[3];
  if ( v5 )
    v6 = v4;
  v7 = v6 - 1;
  v8 = v7 & (v4 - 1);
  if ( !*(_QWORD *)(a1[1] + 8 * v8) )
  {
    size_of = std::_Get_size_of_n<24>(1uLL);
    *(_QWORD *)(a1[1] + 8 * v8) = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  }
  v10 = *(_QWORD **)(a1[1] + 8 * v8);
  *v10 = 0LL;
  v10[1] = 0LL;
  *v10 = *a2;
  v10[1] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  v10[2] = a2[2];
  a1[3] = v7;
  ++a1[4];
  return *(_QWORD *)(a1[1] + 8 * (v7 & (a1[2] - 1LL)));
}
