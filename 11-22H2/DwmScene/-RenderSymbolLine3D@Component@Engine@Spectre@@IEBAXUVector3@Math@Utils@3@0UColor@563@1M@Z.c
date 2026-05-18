/*
 * XREFs of ?RenderSymbolLine3D@Component@Engine@Spectre@@IEBAXUVector3@Math@Utils@3@0UColor@563@1M@Z @ 0x1800814B8
 * Callers:
 *     ?RenderSymbols@Bounds@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18004A4B0 (-RenderSymbols@Bounds@Engine@Spectre@@MEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_.c)
 *     ?RenderSymbols@MeshInstance@Engine@Spectre@@EEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18004C850 (-RenderSymbols@MeshInstance@Engine@Spectre@@EEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@.c)
 *     ?RenderSymbols@Camera@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18005CA50 (-RenderSymbols@Camera@Engine@Spectre@@MEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_.c)
 * Callees:
 *     ?GetSymbolManager@Engine@1Spectre@@QEAAAEAVISymbolManager@12@XZ @ 0x180034800 (-GetSymbolManager@Engine@1Spectre@@QEAAAEAVISymbolManager@12@XZ.c)
 *     ?GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ @ 0x18008139C (-GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ.c)
 */

void __fastcall __noreturn Spectre::Engine::Component::RenderSymbolLine3D(Spectre::Engine::Component *a1)
{
  Spectre::Engine::Engine *v1; // rcx

  Spectre::Engine::Component::GetEngine(a1);
  Spectre::Engine::Engine::GetSymbolManager(v1);
}
