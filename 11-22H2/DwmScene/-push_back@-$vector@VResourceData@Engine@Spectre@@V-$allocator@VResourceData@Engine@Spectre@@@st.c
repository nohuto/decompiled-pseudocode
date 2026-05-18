/*
 * XREFs of ?push_back@?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@QEAAX$$QEAVResourceData@Engine@Spectre@@@Z @ 0x1800706D4
 * Callers:
 *     ?Add@ResourceManager@Engine@Spectre@@QEAAXV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@_K@Z @ 0x180070160 (-Add@ResourceManager@Engine@Spectre@@QEAAXV-$shared_ptr@VRendererResource@Engine@Spectre@@@std@@.c)
 *     ?Request@ResourceManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@_KV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@5@@Z @ 0x18007040C (-Request@ResourceManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spect.c)
 * Callees:
 *     ??0ResourceData@Engine@Spectre@@QEAA@AEBV012@@Z @ 0x180097360 (--0ResourceData@Engine@Spectre@@QEAA@AEBV012@@Z.c)
 */

Spectre::Engine::ResourceData *__fastcall std::vector<Spectre::Engine::ResourceData>::push_back(
        __int64 a1,
        const struct Spectre::Engine::ResourceData *a2)
{
  Spectre::Engine::ResourceData *result; // rax

  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a1 + 16) )
    return std::vector<Spectre::Engine::ResourceData>::_Emplace_reallocate<Spectre::Engine::ResourceData>(
             a1,
             *(struct Spectre::Engine::ResourceData **)(a1 + 8),
             a2);
  result = (Spectre::Engine::ResourceData *)Spectre::Engine::ResourceData::ResourceData(
                                              *(Spectre::Engine::ResourceData **)(a1 + 8),
                                              a2);
  *(_QWORD *)(a1 + 8) += 128LL;
  return result;
}
