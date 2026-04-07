/*
 * XREFs of ModuleFailFastForHRESULT @ 0x1800C87A0
 * Callers:
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x18000468C (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 *     ?_Dwm_Xbad_function_call@std@@YAXXZ @ 0x1801079F8 (-_Dwm_Xbad_function_call@std@@YAXXZ.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180107A14 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 * Callees:
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x1801078FC (-MilFailFastForHR@@YAXJPEBX@Z.c)
 */

void __fastcall __noreturn ModuleFailFastForHRESULT(int a1, const void *a2)
{
  MilFailFastForHR(a1, a2);
  JUMPOUT(0x1800C87A9LL);
}
