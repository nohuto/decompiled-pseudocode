/*
 * XREFs of SymCryptCpuFeaturesNeverPresent @ 0x14036882C
 * Callers:
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1403F35F8 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptSha256AppendBlocks @ 0x1403F37B0 (SymCryptSha256AppendBlocks.c)
 *     SymCryptParallelSha256Process @ 0x1403F5D50 (SymCryptParallelSha256Process.c)
 *     SymCryptFdefRawMul @ 0x140403D7C (SymCryptFdefRawMul.c)
 *     SymCryptFdefRawSquare @ 0x140403EC8 (SymCryptFdefRawSquare.c)
 *     SymCryptFdefDecideModulusType @ 0x140403F70 (SymCryptFdefDecideModulusType.c)
 *     SymCryptFdefMontgomeryReduce @ 0x140405624 (SymCryptFdefMontgomeryReduce.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x1402936E0 (PdcCreateWatchdogAroundClientCall.c)
 */

__int64 SymCryptCpuFeaturesNeverPresent()
{
  return PdcCreateWatchdogAroundClientCall();
}
