/*
 * XREFs of ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x18000468C
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 * Callees:
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x1800046EC (-DoStackCapture@@YAXJIPEAX@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180004834 (-IsOOM@@YA_NJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C87A0 (ModuleFailFastForHRESULT.c)
 */

void __fastcall MilInstrumentationHandleFailure_MaybeFailFast(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  unsigned int v4; // r10d

  v4 = a3;
  if ( (_DWORD)a1 == -2003303421 || (_DWORD)a1 == -2003302654 || (a2 & 0x10) != 0 && IsOOM(a1) )
    ModuleFailFastForHRESULT(a1, a4);
  if ( (a2 & 4) != 0 )
    DoStackCapture(a1, v4, a4);
  if ( (a2 & 1) != 0 )
    MilInstrumentationBreak(a2, a2);
}
