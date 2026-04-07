/*
 * XREFs of ??$_Emplace_back_internal@I@?$deque@IV?$allocator@I@std@@@std@@AEAAX$$QEAI@Z @ 0x1800EF32C
 * Callers:
 *     ??0JSONOutputArchive@cereal@@QEAA@AEAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AEBVOptions@01@@Z @ 0x1800F0CE4 (--0JSONOutputArchive@cereal@@QEAA@AEAV-$basic_ostream@DU-$char_traits@D@std@@@std@@AEBVOptions@0.c)
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800F3DF0 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001BD70 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x1800F28DC (-_Growmap@-$deque@IV-$allocator@I@std@@@std@@AEAAX_K@Z.c)
 */

__int64 __fastcall std::deque<unsigned int>::_Emplace_back_internal<unsigned int>(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 32);
  if ( ((*(_BYTE *)(a1 + 24) + (_BYTE)v4) & 3) == 0 && *(_QWORD *)(a1 + 16) <= (unsigned __int64)(v4 + 4) >> 2 )
    std::deque<unsigned int>::_Growmap(a1);
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
