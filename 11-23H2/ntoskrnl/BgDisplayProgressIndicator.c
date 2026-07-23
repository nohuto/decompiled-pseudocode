/*
 * XREFs of BgDisplayProgressIndicator @ 0x140AEC040
 * Callers:
 *     PopDecompressHiberBlocks @ 0x140AA21A4 (PopDecompressHiberBlocks.c)
 *     BgkDestroy @ 0x140AEEA68 (BgkDestroy.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140385840 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140385890 (BgpFwAcquireLock.c)
 *     AnFwDisplayProgressIndicator @ 0x140AED598 (AnFwDisplayProgressIndicator.c)
 */

__int64 __fastcall BgDisplayProgressIndicator(char a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx

  BgpFwAcquireLock();
  if ( (dword_140C0E4B0 & 1) != 0 )
  {
    LOBYTE(v2) = a1;
    v3 = AnFwDisplayProgressIndicator(v2);
  }
  else
  {
    v3 = -1073741823;
  }
  BgpFwReleaseLock();
  return v3;
}
