/*
 * XREFs of KeFlushProcessTb @ 0x140292C60
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1402915B4 (MiDeleteFinalPageTables.c)
 *     MiDeleteProcessShadow @ 0x14029172C (MiDeleteProcessShadow.c)
 *     MmOutSwapProcess @ 0x14034CFF8 (MmOutSwapProcess.c)
 *     KeSwapDirectoryTableBase @ 0x1403D7C34 (KeSwapDirectoryTableBase.c)
 * Callees:
 *     KiFlushAddressSpaceTb @ 0x1403CC050 (KiFlushAddressSpaceTb.c)
 */

__int64 __fastcall KeFlushProcessTb(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 1) != 0 )
    return KiFlushAddressSpaceTb(a1 & 0xFFFFFFFFFFFFF000uLL, 0LL, 0LL, 0LL);
  return result;
}
