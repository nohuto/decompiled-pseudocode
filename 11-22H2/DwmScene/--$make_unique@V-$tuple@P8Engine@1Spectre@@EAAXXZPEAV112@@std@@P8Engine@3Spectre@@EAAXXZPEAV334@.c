/*
 * XREFs of ??$make_unique@V?$tuple@P8Engine@1Spectre@@EAAXXZPEAV112@@std@@P8Engine@3Spectre@@EAAXXZPEAV334@$0A@@std@@YA?AV?$unique_ptr@V?$tuple@P8Engine@1Spectre@@EAAXXZPEAV112@@std@@U?$default_delete@V?$tuple@P8Engine@1Spectre@@EAAXXZPEAV112@@std@@@2@@0@$$QEAP8Engine@2Spectre@@EAAXXZ$$QEAPEAV223@@Z @ 0x1800308AC
 * Callers:
 *     ?StartPerformanceThread@Engine@1Spectre@@IEAAXXZ @ 0x180036F10 (-StartPerformanceThread@Engine@1Spectre@@IEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<std::tuple<void (Spectre::Engine::Engine::*)(void),Spectre::Engine::Engine *>,void (Spectre::Engine::Engine::*)(void),Spectre::Engine::Engine *,0>(
        _QWORD *a1,
        _OWORD *a2,
        _QWORD *a3)
{
  char *v6; // rax

  v6 = (char *)operator new(0x18uLL);
  if ( v6 )
  {
    *(_QWORD *)v6 = *a3;
    *(_OWORD *)(v6 + 8) = *a2;
  }
  *a1 = v6;
  return a1;
}
