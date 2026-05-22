/*
 * XREFs of ??0?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@G_N@std@@@1@AEBV?$allocator@U?$pair@G_N@std@@@1@@Z @ 0x18004E314
 * Callers:
 *     _dynamic_initializer_for__c_taskSwitcherLaunchSequence__ @ 0x180002090 (_dynamic_initializer_for__c_taskSwitcherLaunchSequence__.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x18004E3C4 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 */

__int128 *__fastcall std::vector<std::pair<unsigned short,bool>>::vector<std::pair<unsigned short,bool>>(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v2; // rsi
  _DWORD *v3; // rbx
  unsigned __int64 v4; // rdi
  size_t size_of; // rax
  _DWORD *v6; // rdx

  v2 = *(_DWORD **)(a2 + 8);
  v3 = *(_DWORD **)a2;
  qword_1802691D0 = 0LL;
  v4 = v2 - v3;
  xmmword_1802691C0 = 0LL;
  if ( v4 )
  {
    if ( v4 > 0x3FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    size_of = std::_Get_size_of_n<4>(v4);
    v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *(_QWORD *)&xmmword_1802691C0 = v6;
    *((_QWORD *)&xmmword_1802691C0 + 1) = v6;
    qword_1802691D0 = (__int64)&v6[v4];
    while ( v3 != v2 )
      *v6++ = *v3++;
    *((_QWORD *)&xmmword_1802691C0 + 1) = v6;
  }
  return &xmmword_1802691C0;
}
