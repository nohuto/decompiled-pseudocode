/*
 * XREFs of ?_Change_array@?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@AEAAXQEAVResourceData@Engine@Spectre@@_K1@Z @ 0x180070524
 * Callers:
 *     ??$_Emplace_reallocate@VResourceData@Engine@Spectre@@@?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@QEAAPEAVResourceData@Engine@Spectre@@QEAV234@$$QEAV234@@Z @ 0x18006FDCC (--$_Emplace_reallocate@VResourceData@Engine@Spectre@@@-$vector@VResourceData@Engine@Spectre@@V-$.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@YAXPEAVResourceData@Engine@Spectre@@QEAV123@AEAV?$allocator@VResourceData@Engine@Spectre@@@0@@Z @ 0x18006FD94 (--$_Destroy_range@V-$allocator@VResourceData@Engine@Spectre@@@std@@@std@@YAXPEAVResourceData@Eng.c)
 */

void __fastcall std::vector<Spectre::Engine::ResourceData>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  Spectre::Engine::ResourceData *v6; // rcx

  v6 = *(Spectre::Engine::ResourceData **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<Spectre::Engine::ResourceData>>(v6, *(Spectre::Engine::ResourceData **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFF80uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + (a3 << 7);
  *(_QWORD *)(a1 + 16) = a2 + (a4 << 7);
}
