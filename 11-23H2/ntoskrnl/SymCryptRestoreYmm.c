/*
 * XREFs of SymCryptRestoreYmm @ 0x14056D894
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1403F5D50 (SymCryptParallelSha256Process.c)
 * Callees:
 *     SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1403F35E0 (SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater.c)
 */

void __fastcall SymCryptRestoreYmm(struct _XSTATE_SAVE *a1)
{
  SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater(a1);
}
