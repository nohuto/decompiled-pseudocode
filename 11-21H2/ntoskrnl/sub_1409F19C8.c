/*
 * XREFs of sub_1409F19C8 @ 0x1409F19C8
 * Callers:
 *     sub_1409EFAE0 @ 0x1409EFAE0 (sub_1409EFAE0.c)
 *     sub_1409F1828 @ 0x1409F1828 (sub_1409F1828.c)
 *     sub_1409F2984 @ 0x1409F2984 (sub_1409F2984.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 */

void __fastcall sub_1409F19C8(__int64 *a1)
{
  __int64 v2; // rax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)(&UnicodeString.MaximumLength + 1) = 0;
  v2 = *a1;
  if ( *a1 )
  {
    if ( (v2 & 1) != 0 )
    {
      sub_14042A5E0(v2 & 0xFFFFFFFFFFFFFFF8uLL, 1LL);
    }
    else
    {
      UnicodeString.Buffer = (wchar_t *)(v2 & 0xFFFFFFFFFFFFFFF8uLL);
      *(_DWORD *)&UnicodeString.Length = 65537;
      RtlFreeUnicodeString(&UnicodeString);
    }
    *a1 = 0LL;
  }
}
