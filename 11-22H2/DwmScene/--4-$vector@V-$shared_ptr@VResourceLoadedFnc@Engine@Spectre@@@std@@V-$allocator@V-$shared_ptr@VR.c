/*
 * XREFs of ??4?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800975E4
 * Callers:
 *     ?SetResource@ResourceData@Engine@Spectre@@QEAAXV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@@Z @ 0x180097728 (-SetResource@ResourceData@Engine@Spectre@@QEAAXV-$shared_ptr@VRendererResource@Engine@Spectre@@@.c)
 * Callees:
 *     ??$_Assign_range@PEAV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@AEAAXPEAV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@1@0Uforward_iterator_tag@1@@Z @ 0x18009705C (--$_Assign_range@PEAV-$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@-$vector@V-$shared_p.c)
 */

__int64 *__fastcall std::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  if ( a1 != a2 )
    std::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>::_Assign_range<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc> *>(
      a1,
      *a2,
      a2[1]);
  return a1;
}
