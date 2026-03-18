/*
 * XREFs of SymCryptCpuFeaturesNeverPresent @ 0x14036868C
 * Callers:
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1403F3418 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptSha256AppendBlocks @ 0x1403F35D0 (SymCryptSha256AppendBlocks.c)
 *     SymCryptParallelSha256Process @ 0x1403F5B70 (SymCryptParallelSha256Process.c)
 *     SymCryptFdefRawMul @ 0x140403B9C (SymCryptFdefRawMul.c)
 *     SymCryptFdefRawSquare @ 0x140403CE8 (SymCryptFdefRawSquare.c)
 *     SymCryptFdefDecideModulusType @ 0x140403D90 (SymCryptFdefDecideModulusType.c)
 *     SymCryptFdefMontgomeryReduce @ 0x140405444 (SymCryptFdefMontgomeryReduce.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x140293450 (PdcCreateWatchdogAroundClientCall.c)
 */

__int64 SymCryptCpuFeaturesNeverPresent()
{
  return PdcCreateWatchdogAroundClientCall();
}
