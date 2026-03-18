/*
 * XREFs of IopResetEvent @ 0x1402AF8E0
 * Callers:
 *     IopCloseFile @ 0x14072FFC0 (IopCloseFile.c)
 * Callees:
 *     KeResetEvent @ 0x1402AFB70 (KeResetEvent.c)
 */

LONG __fastcall IopResetEvent(__int64 a1)
{
  LONG result; // eax

  if ( (*(_DWORD *)(a1 + 80) & 0x4000000) == 0 )
    return KeResetEvent((PRKEVENT)(a1 + 152));
  return result;
}
