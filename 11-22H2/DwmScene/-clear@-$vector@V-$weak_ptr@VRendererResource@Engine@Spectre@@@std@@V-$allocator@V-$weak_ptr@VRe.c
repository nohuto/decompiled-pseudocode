/*
 * XREFs of ?clear@?$vector@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@2@@std@@QEAAXXZ @ 0x180038618
 * Callers:
 *     ?ProcessNewResources@Engine@1Spectre@@IEAAXXZ @ 0x180035AA8 (-ProcessNewResources@Engine@1Spectre@@IEAAXXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@std@@@std@@YAXPEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@0@QEAV10@AEAV?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@0@@Z @ 0x1800109B0 (--$_Destroy_range@V-$allocator@V-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@std@@@std@@Y.c)
 */

__int64 __fastcall std::vector<std::weak_ptr<Spectre::Engine::RendererResource>>::clear(__int64 *a1)
{
  __int64 result; // rax

  std::_Destroy_range<std::allocator<std::weak_ptr<Spectre::Engine::RendererResource>>>(*a1, a1[1]);
  result = *a1;
  a1[1] = *a1;
  return result;
}
