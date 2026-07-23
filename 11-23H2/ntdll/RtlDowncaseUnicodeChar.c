/*
 * XREFs of RtlDowncaseUnicodeChar @ 0x1800B0280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WCHAR __cdecl RtlDowncaseUnicodeChar(WCHAR SourceCharacter)
{
  return NLS_DOWNCASE(qword_180184810, SourceCharacter);
}
