/*
 * XREFs of RtlDowncaseUnicodeChar @ 0x1800AE1B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WCHAR __cdecl RtlDowncaseUnicodeChar(WCHAR SourceCharacter)
{
  return NLS_DOWNCASE(qword_1801817C0, SourceCharacter);
}
