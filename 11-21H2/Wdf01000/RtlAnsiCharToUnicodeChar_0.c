/*
 * XREFs of RtlAnsiCharToUnicodeChar_0 @ 0x1C0036642
 * Callers:
 *     mbtowc @ 0x1C00364A8 (mbtowc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __stdcall RtlAnsiCharToUnicodeChar_0(PUCHAR *SourceCharacter)
{
  return RtlAnsiCharToUnicodeChar(SourceCharacter);
}
