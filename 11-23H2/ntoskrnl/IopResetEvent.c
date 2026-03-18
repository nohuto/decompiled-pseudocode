/*
 * XREFs of IopResetEvent @ 0x1402AF910
 * Callers:
 *     IopAllocateAndPopulateWriteIrp @ 0x140224220 (IopAllocateAndPopulateWriteIrp.c)
 *     IopCloseFile @ 0x140730000 (IopCloseFile.c)
 * Callees:
 *     KeResetEvent @ 0x1402AF940 (KeResetEvent.c)
 */

LONG __fastcall IopResetEvent(__int64 a1)
{
  LONG result; // eax

  if ( (*(_DWORD *)(a1 + 80) & 0x4000000) == 0 )
    return KeResetEvent((PRKEVENT)(a1 + 152));
  return result;
}
