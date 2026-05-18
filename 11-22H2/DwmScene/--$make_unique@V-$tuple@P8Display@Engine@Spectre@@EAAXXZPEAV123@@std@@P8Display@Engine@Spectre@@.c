/*
 * XREFs of ??$make_unique@V?$tuple@P8Display@Engine@Spectre@@EAAXXZPEAV123@@std@@P8Display@Engine@Spectre@@EAAXXZPEAV345@$0A@@std@@YA?AV?$unique_ptr@V?$tuple@P8Display@Engine@Spectre@@EAAXXZPEAV123@@std@@U?$default_delete@V?$tuple@P8Display@Engine@Spectre@@EAAXXZPEAV123@@std@@@2@@0@$$QEAP8Display@Engine@Spectre@@EAAXXZ$$QEAPEAV234@@Z @ 0x180057004
 * Callers:
 *     ?CreateRenderThread@Display@Engine@Spectre@@AEAAXXZ @ 0x1800577F0 (-CreateRenderThread@Display@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<std::tuple<void (Spectre::Engine::Display::*)(void),Spectre::Engine::Display *>,void (Spectre::Engine::Display::*)(void),Spectre::Engine::Display *,0>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v6; // rax

  v6 = operator new(0x10uLL);
  if ( v6 )
  {
    *v6 = *a3;
    v6[1] = *a2;
  }
  *a1 = v6;
  return a1;
}
