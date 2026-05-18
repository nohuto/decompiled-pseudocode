/*
 * XREFs of ??0?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@QEAA@_KAEBV?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@1@@Z @ 0x180097334
 * Callers:
 *     ??0ResourceData@Engine@Spectre@@QEAA@XZ @ 0x1800973E0 (--0ResourceData@Engine@Spectre@@QEAA@XZ.c)
 *     ??0ResourceData@Engine@Spectre@@QEAA@_KV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@@Z @ 0x180097454 (--0ResourceData@Engine@Spectre@@QEAA@_KV-$shared_ptr@VRendererResource@Engine@Spectre@@@std@@@Z.c)
 *     ??0ResourceData@Engine@Spectre@@QEAA@_KV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@Z @ 0x1800974F0 (--0ResourceData@Engine@Spectre@@QEAA@_KV-$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ??$_Construct_n@$$V@?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@AEAAX_K@Z @ 0x180097124 (--$_Construct_n@$$V@-$vector@V-$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V-$allocator.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  std::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>::_Construct_n<>(a1, a2);
  return a1;
}
