/*
 * XREFs of ModuleFailFastForHRESULT @ 0x1800CD00C
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18003DBEC (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x18010DF6C (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 *     ?_Dwm_Xbad_function_call@std@@YAXXZ @ 0x18010E034 (-_Dwm_Xbad_function_call@std@@YAXXZ.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x18010E050 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 * Callees:
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x18010DEDC (-MilFailFastForHR@@YAXJPEBX@Z.c)
 */

void __fastcall __noreturn ModuleFailFastForHRESULT(int a1, const void *a2)
{
  MilFailFastForHR(a1, a2);
  JUMPOUT(0x1800CD015LL);
}
