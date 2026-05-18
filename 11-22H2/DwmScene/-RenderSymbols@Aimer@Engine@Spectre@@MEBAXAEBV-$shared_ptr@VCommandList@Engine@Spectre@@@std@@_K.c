/*
 * XREFs of ?RenderSymbols@Aimer@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x1800969C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSymbolManager@Engine@1Spectre@@QEAAAEAVISymbolManager@12@XZ @ 0x180034800 (-GetSymbolManager@Engine@1Spectre@@QEAAAEAVISymbolManager@12@XZ.c)
 *     ?GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ @ 0x18008139C (-GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ.c)
 */

__int64 __fastcall Spectre::Engine::Aimer::RenderSymbols(
        Spectre::Engine::Component *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 result; // rax
  int v5; // edx
  Spectre::Engine::Engine *v6; // rcx

  result = *a4;
  v5 = *(_DWORD *)(*a4 + 440);
  if ( (v5 & 0x10000) != 0 && (v5 & 0x8000000) != 0 )
  {
    Spectre::Engine::Component::GetEngine(a1);
    Spectre::Engine::Engine::GetSymbolManager(v6);
  }
  return result;
}
