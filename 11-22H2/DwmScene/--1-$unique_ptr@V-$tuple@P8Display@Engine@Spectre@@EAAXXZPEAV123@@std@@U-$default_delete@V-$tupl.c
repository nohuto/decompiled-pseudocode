/*
 * XREFs of ??1?$unique_ptr@V?$tuple@P8Display@Engine@Spectre@@EAAXXZPEAV123@@std@@U?$default_delete@V?$tuple@P8Display@Engine@Spectre@@EAAXXZPEAV123@@std@@@2@@std@@QEAA@XZ @ 0x1800572A0
 * Callers:
 *     ??$_Invoke@V?$tuple@P8Display@Engine@Spectre@@EAAXXZPEAV123@@std@@$0A@$00@thread@std@@CAIPEAX@Z @ 0x180056EF0 (--$_Invoke@V-$tuple@P8Display@Engine@Spectre@@EAAXXZPEAV123@@std@@$0A@$00@thread@std@@CAIPEAX@Z.c)
 *     ?CreateRenderThread@Display@Engine@Spectre@@AEAAXXZ @ 0x1800577F0 (-CreateRenderThread@Display@Engine@Spectre@@AEAAXXZ.c)
 *     _Spectre::Engine::Display::CreateRenderThread_::_1_::dtor$1 @ 0x1800E77E5 (_Spectre--Engine--Display--CreateRenderThread_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<std::tuple<void (Spectre::Engine::Display::*)(void),Spectre::Engine::Display *>>::~unique_ptr<std::tuple<void (Spectre::Engine::Display::*)(void),Spectre::Engine::Display *>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
