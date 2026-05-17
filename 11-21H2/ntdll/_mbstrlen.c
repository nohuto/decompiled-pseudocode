/*
 * XREFs of _mbstrlen @ 0x18009CE18
 * Callers:
 *     mbstowcs @ 0x180097A00 (mbstowcs.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x18005F8E0 (RtlAnsiCharToUnicodeChar.c)
 */

size_t __cdecl mbstrlen(const char *String)
{
  char *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = (char *)String;
  while ( (unsigned __int16)RtlAnsiCharToUnicodeChar(&v3) )
    ;
  return v3 - String - 1;
}
