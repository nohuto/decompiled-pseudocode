/*
 * XREFs of ?push_front@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@QEAAXAEBV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@2@@Z @ 0x1800226C8
 * Callers:
 *     ?WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z @ 0x18012041C (-WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?_Growmap@?$deque@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x18001CE48 (-_Growmap@-$deque@_KV-$allocator@_K@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::push_front(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // r8
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 result; // rax

  v2 = a1[3];
  if ( (v2 & 1) == 0 && a1[2] <= (unsigned __int64)(a1[4] + 2LL) >> 1 )
  {
    std::deque<unsigned __int64>::_Growmap(a1);
    v2 = a1[3];
  }
  v5 = a1[2];
  v6 = 2 * v5;
  v7 = v2 & (2 * v5 - 1);
  v8 = v5 - 1;
  a1[3] = v7;
  v9 = a1[1];
  if ( !v7 )
    v7 = v6;
  v10 = v7 - 1;
  v11 = (v10 >> 1) & v8;
  if ( !*(_QWORD *)(v9 + 8 * v11) )
  {
    *(_QWORD *)(a1[1] + 8 * v11) = std::_Allocate<16,std::_Default_allocate_traits,0>(16LL);
    v9 = a1[1];
  }
  result = *a2;
  *(_QWORD *)(*(_QWORD *)(v9 + 8 * v11) + 8 * (v10 & 1)) = *a2;
  a1[3] = v10;
  ++a1[4];
  return result;
}
