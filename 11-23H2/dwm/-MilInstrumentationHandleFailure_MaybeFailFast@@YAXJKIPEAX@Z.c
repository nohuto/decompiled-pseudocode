/*
 * XREFs of ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x14000F5FC
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400033CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x140003474 (-IsOOM@@YA_NJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x14000D190 (ModuleFailFastForHRESULT.c)
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x14000F47C (-DoStackCapture@@YAXJIPEAX@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x14000F7EC (-MilInstrumentationBreak@@YAXK_N@Z.c)
 */

void __fastcall MilInstrumentationHandleFailure_MaybeFailFast(DWORD a1, unsigned int a2, int a3, void *a4)
{
  if ( a1 == -2003303421
    || a1 == -2003302654
    || a1 == -2147024890
    || (a2 & 0x10) != 0 && IsOOM(a1)
    || g_dwFailFastForThreadId
    && g_dwFailFastForThreadId == GetCurrentThreadId()
    && (g_hrFailFastExpectedError >= 0 || a1 == g_hrFailFastExpectedError) )
  {
    ModuleFailFastForHRESULT(a1, a4);
    JUMPOUT(0x14000F6ABLL);
  }
  if ( (a2 & 4) != 0 )
    DoStackCapture(a1, a3, a4);
  if ( (a2 & 1) != 0 )
    MilInstrumentationBreak(a2, a2);
}
