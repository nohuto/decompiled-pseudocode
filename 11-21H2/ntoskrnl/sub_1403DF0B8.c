/*
 * XREFs of sub_1403DF0B8 @ 0x1403DF0B8
 * Callers:
 *     sub_14055EBF8 @ 0x14055EBF8 (sub_14055EBF8.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_14055E880 @ 0x14055E880 (sub_14055E880.c)
 */

__int64 sub_1403DF0B8()
{
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( !dword_140C4EFD0 )
    return 3221225860LL;
  if ( !byte_140D01504 || byte_140D00A88 || !DWORD1(xmmword_140C4EFD8) || (_DWORD)xmmword_140C4EFD8 || !byte_140C0C6B9 )
    return 3221225473LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\system32\\ntdumpkey.p7b");
  result = sub_14055E880(
             (unsigned int)&DestinationString,
             (unsigned int)&xmmword_140C4EFD8 + 8,
             (unsigned int)&xmmword_140C4EFE8,
             (unsigned int)&xmmword_140C4EFE8 + 8,
             (__int64)&xmmword_140C4EFE8 + 4);
  if ( (int)result < 0 )
  {
    if ( dword_140C4EFD0 == 1 )
      byte_140D018F0 = 1;
    dword_140C4EFD0 = 3;
    byte_140C4EFD4 = 0;
  }
  return result;
}
