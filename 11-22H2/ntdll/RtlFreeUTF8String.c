/*
 * XREFs of RtlFreeUTF8String @ 0x1800F5D50
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 */

void __cdecl RtlFreeUTF8String(PUTF8_STRING Utf8String)
{
  char *Buffer; // rcx

  Buffer = Utf8String->Buffer;
  if ( Buffer )
  {
    NtdllpFreeStringRoutine(Buffer);
    *Utf8String = 0LL;
  }
}
