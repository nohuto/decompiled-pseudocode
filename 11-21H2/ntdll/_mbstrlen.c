/*
 * XREFs of _mbstrlen @ 0x18009CE18
 * Callers:
 *     mbstowcs @ 0x180097A00 (mbstowcs.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x18005F8E0 (RtlAnsiCharToUnicodeChar.c)
 */

size_t __cdecl mbstrlen(const char *String)
{
  PUCHAR SourceCharacter; // [rsp+30h] [rbp+8h] BYREF

  SourceCharacter = (PUCHAR)String;
  while ( RtlAnsiCharToUnicodeChar(&SourceCharacter) )
    ;
  return SourceCharacter - (PUCHAR)String - 1;
}
