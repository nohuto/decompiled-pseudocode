/*
 * XREFs of RtlDowncaseUnicodeChar @ 0x1800F5EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WCHAR __cdecl RtlDowncaseUnicodeChar(WCHAR SourceCharacter)
{
  return NLS_DOWNCASE(qword_180177700, SourceCharacter);
}
