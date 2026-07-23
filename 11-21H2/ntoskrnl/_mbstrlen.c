/*
 * XREFs of _mbstrlen @ 0x1403E50F4
 * Callers:
 *     mbstowcs @ 0x1403E1C30 (mbstowcs.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x1407CD880 (RtlAnsiCharToUnicodeChar.c)
 */

size_t __cdecl mbstrlen(const char *_String)
{
  PUCHAR SourceCharacter; // [rsp+30h] [rbp+8h] BYREF

  SourceCharacter = (PUCHAR)_String;
  while ( RtlAnsiCharToUnicodeChar(&SourceCharacter) )
    ;
  return SourceCharacter - (PUCHAR)_String - 1;
}
