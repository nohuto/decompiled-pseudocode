/*
 * XREFs of SymCryptRestoreYmm @ 0x14056D274
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1403F5510 (SymCryptParallelSha256Process.c)
 * Callees:
 *     SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1403F2DA0 (SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater.c)
 */

void __fastcall SymCryptRestoreYmm(struct _XSTATE_SAVE *a1)
{
  SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater(a1);
}
