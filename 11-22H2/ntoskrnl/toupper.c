/*
 * XREFs of toupper @ 0x1403DB0D0
 * Callers:
 *     AslStringPatternMatchExA @ 0x1407AF300 (AslStringPatternMatchExA.c)
 * Callees:
 *     RtlUpcaseUnicodeToMultiByteN @ 0x1406D9E30 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlAnsiCharToUnicodeChar @ 0x1406DA4B0 (RtlAnsiCharToUnicodeChar.c)
 */

int __cdecl toupper(int C)
{
  int result; // eax
  PUCHAR SourceCharacter; // [rsp+30h] [rbp-10h] BYREF
  int v3; // [rsp+50h] [rbp+10h] BYREF
  CHAR MultiByteString; // [rsp+58h] [rbp+18h] BYREF
  unsigned __int8 v5; // [rsp+59h] [rbp+19h]
  WCHAR UnicodeString; // [rsp+60h] [rbp+20h] BYREF
  ULONG BytesInMultiByteString; // [rsp+68h] [rbp+28h] BYREF

  v3 = C;
  BytesInMultiByteString = 0;
  SourceCharacter = (PUCHAR)&v3;
  UnicodeString = RtlAnsiCharToUnicodeChar(&SourceCharacter);
  if ( RtlUpcaseUnicodeToMultiByteN(&MultiByteString, 2u, &BytesInMultiByteString, &UnicodeString, 2u) < 0 )
    return v3;
  result = (unsigned __int8)MultiByteString;
  if ( BytesInMultiByteString != 1 )
    return v5 | ((unsigned __int8)MultiByteString << 8);
  return result;
}
