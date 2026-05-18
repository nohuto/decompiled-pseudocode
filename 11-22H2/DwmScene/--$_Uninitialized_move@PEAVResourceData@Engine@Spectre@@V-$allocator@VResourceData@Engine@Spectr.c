/*
 * XREFs of ??$_Uninitialized_move@PEAVResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@YAPEAVResourceData@Engine@Spectre@@QEAV123@0PEAV123@AEAV?$allocator@VResourceData@Engine@Spectre@@@0@@Z @ 0x18006FF24
 * Callers:
 *     ??$_Emplace_reallocate@VResourceData@Engine@Spectre@@@?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@QEAAPEAVResourceData@Engine@Spectre@@QEAV234@$$QEAV234@@Z @ 0x18006FDCC (--$_Emplace_reallocate@VResourceData@Engine@Spectre@@@-$vector@VResourceData@Engine@Spectre@@V-$.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@YAXPEAVResourceData@Engine@Spectre@@QEAV123@AEAV?$allocator@VResourceData@Engine@Spectre@@@0@@Z @ 0x18006FD94 (--$_Destroy_range@V-$allocator@VResourceData@Engine@Spectre@@@std@@@std@@YAXPEAVResourceData@Eng.c)
 *     ??0ResourceData@Engine@Spectre@@QEAA@AEBV012@@Z @ 0x180097360 (--0ResourceData@Engine@Spectre@@QEAA@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=1
Spectre::Engine::ResourceData *__fastcall std::_Uninitialized_move<Spectre::Engine::ResourceData *>(
        struct Spectre::Engine::ResourceData *a1,
        const struct Spectre::Engine::ResourceData *a2,
        Spectre::Engine::ResourceData *a3)
{
  const struct Spectre::Engine::ResourceData *i; // rdi

  for ( i = a1; i != a2; i = (const struct Spectre::Engine::ResourceData *)((char *)i + 128) )
  {
    Spectre::Engine::ResourceData::ResourceData(a3, i);
    a3 = (Spectre::Engine::ResourceData *)((char *)a3 + 128);
  }
  std::_Destroy_range<std::allocator<Spectre::Engine::ResourceData>>(a3, a3);
  return a3;
}
