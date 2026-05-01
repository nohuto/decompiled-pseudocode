/*
 * XREFs of ??$_Emplace_back_internal@AEBI@?$deque@IV?$allocator@I@std@@@std@@AEAAXAEBI@Z @ 0x1806F7838
 * Callers:
 *     ?OnApplicationViewChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1806FB770 (-OnApplicationViewChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ?_Growmap@?$deque@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x1800C24D4 (-_Growmap@-$deque@IV-$allocator@I@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::deque<unsigned int>::_Emplace_back_internal<unsigned int const &>(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 32);
  if ( ((*(_BYTE *)(a1 + 24) + (_BYTE)v4) & 3) == 0 && *(_QWORD *)(a1 + 16) <= (unsigned __int64)(v4 + 4) >> 2 )
    std::deque<unsigned int>::_Growmap((_QWORD *)a1);
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) &= 4 * v5 - 1;
  v6 = *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 24);
  v7 = (v6 >> 2) & (v5 - 1);
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) )
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  result = *a2;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) + 4 * (v6 & 3)) = result;
  ++*(_QWORD *)(a1 + 32);
  return result;
}
