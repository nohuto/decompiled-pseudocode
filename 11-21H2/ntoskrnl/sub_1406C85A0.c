/*
 * XREFs of sub_1406C85A0 @ 0x1406C85A0
 * Callers:
 *     SeConvertSidToStringSid @ 0x1405F5ED0 (SeConvertSidToStringSid.c)
 *     sub_140676AC0 @ 0x140676AC0 (sub_140676AC0.c)
 *     sub_140676B80 @ 0x140676B80 (sub_140676B80.c)
 * Callees:
 *     sub_140248A04 @ 0x140248A04 (sub_140248A04.c)
 *     RtlConvertSidToUnicodeString @ 0x140669DD0 (RtlConvertSidToUnicodeString.c)
 *     sub_14067757C @ 0x14067757C (sub_14067757C.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 */

int __fastcall sub_1406C85A0(PSID Sid, _QWORD *a2)
{
  int result; // eax
  __int64 Length; // rdi
  _WORD *v5; // rax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  UnicodeString = 0LL;
  if ( !Sid || !a2 )
    return -1073741811;
  result = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
  if ( result >= 0 )
  {
    Length = UnicodeString.Length;
    v5 = sub_14067757C(UnicodeString.Length + 2LL);
    *a2 = v5;
    if ( v5 )
    {
      result = sub_140248A04(v5, Length + 2, (__int64)UnicodeString.Buffer, (unsigned int)Length);
      if ( result >= 0 )
      {
        RtlFreeUnicodeString(&UnicodeString);
        return 0;
      }
    }
    else
    {
      RtlFreeUnicodeString(&UnicodeString);
      return -1073741801;
    }
  }
  return result;
}
