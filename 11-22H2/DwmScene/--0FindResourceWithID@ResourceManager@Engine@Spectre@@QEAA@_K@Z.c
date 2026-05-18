/*
 * XREFs of ??0FindResourceWithID@ResourceManager@Engine@Spectre@@QEAA@_K@Z @ 0x18006FFEC
 * Callers:
 *     ?Add@ResourceManager@Engine@Spectre@@QEAAXV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@_K@Z @ 0x180070160 (-Add@ResourceManager@Engine@Spectre@@QEAAXV-$shared_ptr@VRendererResource@Engine@Spectre@@@std@@.c)
 *     ?Request@ResourceManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@_KV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@5@@Z @ 0x18007040C (-Request@ResourceManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spect.c)
 * Callees:
 *     <none>
 */

Spectre::Engine::ResourceManager::FindResourceWithID *__fastcall Spectre::Engine::ResourceManager::FindResourceWithID::FindResourceWithID(
        Spectre::Engine::ResourceManager::FindResourceWithID *this,
        __int64 a2)
{
  *(_QWORD *)this = a2;
  return this;
}
