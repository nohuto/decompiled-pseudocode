/*
 * XREFs of KeFlushProcessTb @ 0x140292EF0
 * Callers:
 *     MiDeleteFinalPageTables @ 0x140291844 (MiDeleteFinalPageTables.c)
 *     MiDeleteProcessShadow @ 0x1402919BC (MiDeleteProcessShadow.c)
 *     MmOutSwapProcess @ 0x14034D198 (MmOutSwapProcess.c)
 *     KeSwapDirectoryTableBase @ 0x1403D7E14 (KeSwapDirectoryTableBase.c)
 * Callees:
 *     KiFlushAddressSpaceTb @ 0x1403CC230 (KiFlushAddressSpaceTb.c)
 */

__int64 __fastcall KeFlushProcessTb(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 1) != 0 )
    return KiFlushAddressSpaceTb(a1 & 0xFFFFFFFFFFFFF000uLL, 0LL, 0LL, 0LL);
  return result;
}
