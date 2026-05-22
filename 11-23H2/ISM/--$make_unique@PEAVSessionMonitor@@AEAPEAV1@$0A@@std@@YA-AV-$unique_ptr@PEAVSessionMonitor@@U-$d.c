/*
 * XREFs of ??$make_unique@PEAVSessionMonitor@@AEAPEAV1@$0A@@std@@YA?AV?$unique_ptr@PEAVSessionMonitor@@U?$default_delete@PEAVSessionMonitor@@@std@@@0@AEAPEAVSessionMonitor@@@Z @ 0x180058224
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18004DBFC (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<SessionMonitor *,SessionMonitor * &,0>(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rax

  v4 = operator new(8uLL);
  *v4 = *a2;
  *a1 = v4;
  return a1;
}
