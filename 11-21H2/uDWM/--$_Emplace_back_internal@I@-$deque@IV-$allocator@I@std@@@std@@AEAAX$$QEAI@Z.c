/*
 * XREFs of ??$_Emplace_back_internal@I@?$deque@IV?$allocator@I@std@@@std@@AEAAX$$QEAI@Z @ 0x180043AE0
 * Callers:
 *     ??0JSONOutputArchive@cereal@@QEAA@AEAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AEBVOptions@01@@Z @ 0x180042D88 (--0JSONOutputArchive@cereal@@QEAA@AEAV-$basic_ostream@DU-$char_traits@D@std@@@std@@AEBVOptions@0.c)
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800439D4 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180037FCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x1800440D4 (-_Growmap@-$deque@IV-$allocator@I@std@@@std@@AEAAX_K@Z.c)
 */

__int64 __fastcall std::deque<unsigned int>::_Emplace_back_internal<unsigned int>(_QWORD *a1, unsigned int *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  char v11; // di
  unsigned __int64 v12; // rsi
  __int64 result; // rax

  v4 = a1[4];
  v5 = v4;
  v6 = a1[3];
  if ( (((_BYTE)v4 + (_BYTE)v6) & 3) == 0 && a1[2] <= (unsigned __int64)(v4 + 4) >> 2 )
  {
    std::deque<unsigned int>::_Growmap(a1, a2, v6, v4);
    v6 = a1[3];
    v5 = a1[4];
  }
  v7 = a1[2];
  v8 = v6 & (4 * v7 - 1);
  v9 = v7 - 1;
  a1[3] = v8;
  v10 = a1[1];
  v11 = v8 + v5;
  v12 = ((unsigned __int64)(v8 + v5) >> 2) & v9;
  if ( !*(_QWORD *)(v10 + 8 * v12) )
  {
    *(_QWORD *)(a1[1] + 8 * v12) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    v10 = a1[1];
  }
  result = *a2;
  *(_DWORD *)(*(_QWORD *)(v10 + 8 * v12) + 4LL * (v11 & 3)) = result;
  ++a1[4];
  return result;
}
