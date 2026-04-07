/*
 * XREFs of ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x18010DF6C
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800CD00C (ModuleFailFastForHRESULT.c)
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x18010DD1C (-DoStackCapture@@YAXJIPEAX@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x18010DEB0 (-IsOOM@@YA_NJ@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x18010E18C (-MilInstrumentationBreak@@YAXK_N@Z.c)
 */

void __fastcall MilInstrumentationHandleFailure_MaybeFailFast(int a1, unsigned int a2, int a3, void *a4)
{
  int v4; // r10d

  v4 = a3;
  if ( a1 == -2003303421 || a1 == -2003302654 || (a2 & 0x10) != 0 && IsOOM(a1) )
    ModuleFailFastForHRESULT(a1, a4);
  if ( (a2 & 4) != 0 )
    DoStackCapture(a1, v4, a4);
  if ( (a2 & 1) != 0 )
    MilInstrumentationBreak(a2, a2);
}
