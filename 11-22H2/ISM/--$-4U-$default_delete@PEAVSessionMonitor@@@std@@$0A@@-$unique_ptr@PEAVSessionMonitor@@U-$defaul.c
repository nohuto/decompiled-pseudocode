/*
 * XREFs of ??$?4U?$default_delete@PEAVSessionMonitor@@@std@@$0A@@?$unique_ptr@PEAVSessionMonitor@@U?$default_delete@PEAVSessionMonitor@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800595F4
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18004E45C (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 */

void **__fastcall std::unique_ptr<SessionMonitor *>::operator=<std::default_delete<SessionMonitor *>,0>(
        void **a1,
        void **a2)
{
  void *v3; // rax
  void *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      operator delete(v4);
  }
  return a1;
}
