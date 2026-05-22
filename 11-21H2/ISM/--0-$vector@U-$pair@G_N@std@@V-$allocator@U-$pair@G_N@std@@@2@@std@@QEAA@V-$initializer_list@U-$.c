/*
 * XREFs of ??0?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@G_N@std@@@1@AEBV?$allocator@U?$pair@G_N@std@@@1@@Z @ 0x180043BB4
 * Callers:
 *     _dynamic_initializer_for__c_taskSwitcherLaunchSequence__ @ 0x1800016E0 (_dynamic_initializer_for__c_taskSwitcherLaunchSequence__.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int128 *__fastcall std::vector<std::pair<unsigned short,bool>>::vector<std::pair<unsigned short,bool>>(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v2; // rsi
  _DWORD *v3; // rdi
  unsigned __int64 v4; // rbx
  size_t v5; // rbx
  _DWORD *v6; // rax

  v2 = *(_DWORD **)(a2 + 8);
  v3 = *(_DWORD **)a2;
  qword_180243090 = 0LL;
  v4 = v2 - v3;
  xmmword_180243080 = 0LL;
  if ( v4 )
  {
    if ( v4 > 0x3FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    v5 = v4;
    v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(v5 * 4);
    *(_QWORD *)&xmmword_180243080 = v6;
    *((_QWORD *)&xmmword_180243080 + 1) = v6;
    qword_180243090 = (__int64)&v6[v5];
    while ( v3 != v2 )
      *v6++ = *v3++;
    *((_QWORD *)&xmmword_180243080 + 1) = v6;
  }
  return &xmmword_180243080;
}
