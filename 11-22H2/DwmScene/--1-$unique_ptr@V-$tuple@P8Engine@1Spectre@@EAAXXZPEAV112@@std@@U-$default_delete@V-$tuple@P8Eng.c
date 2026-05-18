/*
 * XREFs of ??1?$unique_ptr@V?$tuple@P8Engine@1Spectre@@EAAXXZPEAV112@@std@@U?$default_delete@V?$tuple@P8Engine@1Spectre@@EAAXXZPEAV112@@std@@@2@@std@@QEAA@XZ @ 0x180031B7C
 * Callers:
 *     ??$_Invoke@V?$tuple@P8Engine@1Spectre@@EAAXXZPEAV112@@std@@$0A@$00@thread@std@@CAIPEAX@Z @ 0x18002F5C0 (--$_Invoke@V-$tuple@P8Engine@1Spectre@@EAAXXZPEAV112@@std@@$0A@$00@thread@std@@CAIPEAX@Z.c)
 *     ?StartPerformanceThread@Engine@1Spectre@@IEAAXXZ @ 0x180036F10 (-StartPerformanceThread@Engine@1Spectre@@IEAAXXZ.c)
 *     _Spectre::StartPerformanceThread::Engine::StartPerformanceThread_::_1_::dtor$1 @ 0x1800E6036 (_Spectre--StartPerformanceThread--Engine--StartPerformanceThread_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<std::tuple<void (Spectre::Engine::Engine::*)(void),Spectre::Engine::Engine *>>::~unique_ptr<std::tuple<void (Spectre::Engine::Engine::*)(void),Spectre::Engine::Engine *>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
