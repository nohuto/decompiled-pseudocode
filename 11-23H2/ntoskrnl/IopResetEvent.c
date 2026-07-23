/*
 * XREFs of IopResetEvent @ 0x1402AFBA0
 * Callers:
 *     IopCloseFile @ 0x1407301F0 (IopCloseFile.c)
 * Callees:
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 */

LONG __fastcall IopResetEvent(__int64 a1)
{
  LONG result; // eax

  if ( (*(_DWORD *)(a1 + 80) & 0x4000000) == 0 )
    return KeResetEvent((PRKEVENT)(a1 + 152));
  return result;
}
