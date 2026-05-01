/*
 * XREFs of ?_Swap_proxy_and_iterators@_Container_base12@std@@QEAAXAEAU12@@Z @ 0x1801217A0
 * Callers:
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x18001B964 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 *     ?_Take_contents@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@AEAAXAEAV12@@Z @ 0x180121758 (-_Take_contents@-$deque@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJG.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Container_base12::_Swap_proxy_and_iterators(
        std::_Container_base12 *this,
        struct std::_Container_base12 *a2)
{
  _QWORD *v2; // r8

  v2 = *(_QWORD **)this;
  *(_QWORD *)this = *(_QWORD *)a2;
  *(_QWORD *)a2 = v2;
  if ( *(_QWORD *)this )
  {
    **(_QWORD **)this = this;
    v2 = *(_QWORD **)a2;
  }
  if ( v2 )
    *v2 = a2;
}
