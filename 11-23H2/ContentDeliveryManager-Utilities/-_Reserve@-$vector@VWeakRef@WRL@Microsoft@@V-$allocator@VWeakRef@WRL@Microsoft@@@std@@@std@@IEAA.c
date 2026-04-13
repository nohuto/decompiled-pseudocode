/*
 * XREFs of ?_Reserve@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x18006B760
 * Callers:
 *     ?push_back@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAVWeakRef@WRL@Microsoft@@@Z @ 0x18006BDAC (-push_back@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEA.c)
 *     ?push_back@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x18006BE48 (-push_back@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@s_ea_18006BE48.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1800049B4 (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Reallocate@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x18006B64C (-_Reallocate@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@I.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::WeakRef>::_Reserve(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  result = (*(_QWORD *)(a1 + 16) - v2) >> 3;
  if ( !result )
  {
    v4 = (v2 - *(_QWORD *)a1) >> 3;
    if ( v4 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v5 = v4 + 1;
    v6 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
    v7 = 0LL;
    if ( 0x1FFFFFFFFFFFFFFFLL - (v6 >> 1) >= v6 )
      v7 = v6 + (v6 >> 1);
    if ( v7 >= v5 )
      v5 = v7;
    return (__int64)std::vector<Microsoft::WRL::WeakRef>::_Reallocate((__int64 **)a1, v5);
  }
  return result;
}
