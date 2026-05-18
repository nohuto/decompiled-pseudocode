/*
 * XREFs of ?shrink_to_fit@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x180050CB4
 * Callers:
 *     ?Release@ShaderManager@Engine@Spectre@@QEAAXXZ @ 0x1800504D0 (-Release@ShaderManager@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     memcpy_0 @ 0x18000CA61 (memcpy_0.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Become_small@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180037ED4 (-_Become_small@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 */

void __fastcall std::string::shrink_to_fit(__int64 a1)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rsi
  void *v4; // rbx

  if ( *(_QWORD *)(a1 + 24) >= 0x10uLL )
  {
    v2 = *(_QWORD *)(a1 + 16);
    if ( v2 >= 0x10 )
    {
      v3 = v2 | 0xF;
      if ( v3 > 0x7FFFFFFFFFFFFFFFLL )
        v3 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v3 < *(_QWORD *)(a1 + 24) )
      {
        v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(v3 + 1);
        memcpy_0(v4, *(const void **)a1, *(_QWORD *)(a1 + 16) + 1LL);
        std::_Deallocate<16,0>(*(void **)a1, *(_QWORD *)(a1 + 24) + 1LL);
        *(_QWORD *)a1 = v4;
        *(_QWORD *)(a1 + 24) = v3;
      }
    }
    else
    {
      std::string::_Become_small((void **)a1);
    }
  }
}
