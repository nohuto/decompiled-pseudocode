/*
 * XREFs of ??$_Destroy_range@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@YAXPEAVResourceData@Engine@Spectre@@QEAV123@AEAV?$allocator@VResourceData@Engine@Spectre@@@0@@Z @ 0x18006FD94
 * Callers:
 *     ??$_Construct_n@$$V@?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18006FCFC (--$_Construct_n@$$V@-$vector@VResourceData@Engine@Spectre@@V-$allocator@VResourceData@Engine@Spe.c)
 *     ??$_Emplace_reallocate@VResourceData@Engine@Spectre@@@?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@QEAAPEAVResourceData@Engine@Spectre@@QEAV234@$$QEAV234@@Z @ 0x18006FDCC (--$_Emplace_reallocate@VResourceData@Engine@Spectre@@@-$vector@VResourceData@Engine@Spectre@@V-$.c)
 *     ??$_Uninitialized_move@PEAVResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@YAPEAVResourceData@Engine@Spectre@@QEAV123@0PEAV123@AEAV?$allocator@VResourceData@Engine@Spectre@@@0@@Z @ 0x18006FF24 (--$_Uninitialized_move@PEAVResourceData@Engine@Spectre@@V-$allocator@VResourceData@Engine@Spectr.c)
 *     ??1?$_Uninitialized_backout_al@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800700A4 (--1-$_Uninitialized_backout_al@V-$allocator@VResourceData@Engine@Spectre@@@std@@@std@@QEAA@XZ.c)
 *     ?_Change_array@?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@AEAAXQEAVResourceData@Engine@Spectre@@_K1@Z @ 0x180070524 (-_Change_array@-$vector@VResourceData@Engine@Spectre@@V-$allocator@VResourceData@Engine@Spectre@.c)
 *     ?_Tidy@?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x1800705A0 (-_Tidy@-$vector@VResourceData@Engine@Spectre@@V-$allocator@VResourceData@Engine@Spectre@@@std@@@.c)
 *     ?clear@?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@QEAAXXZ @ 0x180070658 (-clear@-$vector@VResourceData@Engine@Spectre@@V-$allocator@VResourceData@Engine@Spectre@@@std@@@.c)
 * Callees:
 *     ??1ResourceData@Engine@Spectre@@QEAA@XZ @ 0x1800975A8 (--1ResourceData@Engine@Spectre@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<Spectre::Engine::ResourceData>>(
        Spectre::Engine::ResourceData *this,
        Spectre::Engine::ResourceData *a2)
{
  Spectre::Engine::ResourceData *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      Spectre::Engine::ResourceData::~ResourceData(v3);
      v3 = (Spectre::Engine::ResourceData *)((char *)v3 + 128);
    }
    while ( v3 != a2 );
  }
}
