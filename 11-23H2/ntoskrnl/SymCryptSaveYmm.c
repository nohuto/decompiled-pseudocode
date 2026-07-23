/*
 * XREFs of SymCryptSaveYmm @ 0x14056D8C4
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1403F5D50 (SymCryptParallelSha256Process.c)
 * Callees:
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1403F35F8 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 */

__int64 __fastcall SymCryptSaveYmm(struct _XSTATE_SAVE *a1)
{
  return SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater(a1);
}
