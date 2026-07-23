/*
 * XREFs of sub_1409AC788 @ 0x1409AC788
 * Callers:
 *     sub_1409AC998 @ 0x1409AC998 (sub_1409AC998.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_14082CDB4 @ 0x14082CDB4 (sub_14082CDB4.c)
 *     sub_1409AC5A0 @ 0x1409AC5A0 (sub_1409AC5A0.c)
 *     sub_1409AC63C @ 0x1409AC63C (sub_1409AC63C.c)
 */

__int64 __fastcall sub_1409AC788(__int64 a1)
{
  int v2; // ebx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  UnicodeString = 0LL;
  v2 = sub_1409AC63C(&UnicodeString);
  if ( v2 >= 0 )
  {
    v2 = sub_1409AC5A0(&v5);
    if ( v2 >= 0 )
      *(_DWORD *)(a1 + 20) = sub_14082CDB4((__int64)UnicodeString.Buffer, v5);
    if ( UnicodeString.Buffer )
      RtlFreeUnicodeString(&UnicodeString);
  }
  return (unsigned int)v2;
}
