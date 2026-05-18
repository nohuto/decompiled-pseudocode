/*
 * XREFs of ?clear@?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@QEAAXXZ @ 0x180070658
 * Callers:
 *     ??0ResourceManager@Engine@Spectre@@QEAA@XZ @ 0x18006FFFC (--0ResourceManager@Engine@Spectre@@QEAA@XZ.c)
 *     ?Release@ResourceManager@Engine@Spectre@@QEAAXXZ @ 0x180070388 (-Release@ResourceManager@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@YAXPEAVResourceData@Engine@Spectre@@QEAV123@AEAV?$allocator@VResourceData@Engine@Spectre@@@0@@Z @ 0x18006FD94 (--$_Destroy_range@V-$allocator@VResourceData@Engine@Spectre@@@std@@@std@@YAXPEAVResourceData@Eng.c)
 */

Spectre::Engine::ResourceData *__fastcall std::vector<Spectre::Engine::ResourceData>::clear(
        Spectre::Engine::ResourceData **a1)
{
  Spectre::Engine::ResourceData *result; // rax

  std::_Destroy_range<std::allocator<Spectre::Engine::ResourceData>>(*a1, a1[1]);
  result = *a1;
  a1[1] = *a1;
  return result;
}
