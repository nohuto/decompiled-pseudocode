/*
 * XREFs of sub_140833A64 @ 0x140833A64
 * Callers:
 *     CmRegisterMachineHiveLoadedNotification @ 0x1408335F0 (CmRegisterMachineHiveLoadedNotification.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     sub_140833B08 @ 0x140833B08 (sub_140833B08.c)
 */

__int64 __fastcall sub_140833A64(PCUNICODE_STRING String2, unsigned int *a2)
{
  unsigned int v2; // edi
  unsigned int v4; // ebx
  UNICODE_STRING String1; // [rsp+20h] [rbp-B8h] BYREF
  char v8; // [rsp+30h] [rbp-A8h] BYREF

  v2 = 0;
  v4 = 0;
  while ( 1 )
  {
    *(_QWORD *)&String1.Length = 0x800000LL;
    String1.Buffer = (wchar_t *)&v8;
    sub_140833B08(v4, &String1);
    if ( RtlEqualUnicodeString(&String1, String2, 1u) )
      break;
    if ( ++v4 >= 7 )
      return (unsigned int)-1073741766;
  }
  *a2 = v4;
  return v2;
}
