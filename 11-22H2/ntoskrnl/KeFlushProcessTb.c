/*
 * XREFs of KeFlushProcessTb @ 0x140292B40
 * Callers:
 *     MiDeleteFinalPageTables @ 0x140291494 (MiDeleteFinalPageTables.c)
 *     MiDeleteProcessShadow @ 0x14029160C (MiDeleteProcessShadow.c)
 *     MmOutSwapProcess @ 0x14034C9F8 (MmOutSwapProcess.c)
 *     KeSwapDirectoryTableBase @ 0x1403D75D4 (KeSwapDirectoryTableBase.c)
 * Callees:
 *     KiFlushAddressSpaceTb @ 0x1403CB9F0 (KiFlushAddressSpaceTb.c)
 */

__int64 __fastcall KeFlushProcessTb(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 1) != 0 )
    return KiFlushAddressSpaceTb(a1 & 0xFFFFFFFFFFFFF000uLL, 0LL, 0LL, 0LL);
  return result;
}
