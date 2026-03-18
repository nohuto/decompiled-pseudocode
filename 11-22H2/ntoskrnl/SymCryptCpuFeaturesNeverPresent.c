/*
 * XREFs of SymCryptCpuFeaturesNeverPresent @ 0x14036803C
 * Callers:
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1403F2DB8 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptSha256AppendBlocks @ 0x1403F2F70 (SymCryptSha256AppendBlocks.c)
 *     SymCryptParallelSha256Process @ 0x1403F5510 (SymCryptParallelSha256Process.c)
 *     SymCryptFdefRawMul @ 0x14040353C (SymCryptFdefRawMul.c)
 *     SymCryptFdefRawSquare @ 0x140403688 (SymCryptFdefRawSquare.c)
 *     SymCryptFdefDecideModulusType @ 0x140403730 (SymCryptFdefDecideModulusType.c)
 *     SymCryptFdefMontgomeryReduce @ 0x140404DE4 (SymCryptFdefMontgomeryReduce.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x140293330 (PdcCreateWatchdogAroundClientCall.c)
 */

__int64 SymCryptCpuFeaturesNeverPresent()
{
  return PdcCreateWatchdogAroundClientCall();
}
