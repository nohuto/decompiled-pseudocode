/*
 * XREFs of sub_1409439F8 @ 0x1409439F8
 * Callers:
 *     IoGetDeviceDirectory @ 0x140943540 (IoGetDeviceDirectory.c)
 * Callees:
 *     sub_1402D1840 @ 0x1402D1840 (sub_1402D1840.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_140769784 @ 0x140769784 (sub_140769784.c)
 *     sub_140944390 @ 0x140944390 (sub_140944390.c)
 */

__int64 __fastcall sub_1409439F8(
        PCUNICODE_STRING SourceString,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5)
{
  void *v7; // rdi
  __int64 v9; // r9
  unsigned int v10; // ecx
  int v11; // ebx
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+80h] [rbp+8h] BYREF

  UnicodeString = 0LL;
  v7 = 0LL;
  v14 = 0LL;
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v9 = -1LL;
  do
    ++v9;
  while ( *(_WORD *)(a3 + 2 * v9) );
  v10 = *a2 + SourceString->Length + 20 + 2 * v9;
  if ( v10 <= 0xFFFE )
  {
    v11 = sub_140769784((__int64)&UnicodeString, v10);
    if ( v11 >= 0 )
    {
      v11 = sub_1402D1840((__int64)&UnicodeString, 0LL, 2048, L"%wZ\\%ws\\%wZ\\%ws", SourceString, L"Devices", a2, a3);
      if ( v11 >= 0 )
      {
        v11 = sub_140944390(SourceString, &UnicodeString, (__int64)&v14);
        if ( v11 < 0 )
          v7 = (void *)v14;
        else
          *a5 = v14;
      }
    }
  }
  else
  {
    v11 = -2147483643;
  }
  RtlFreeUnicodeString(&UnicodeString);
  if ( v7 )
    ZwClose(v7);
  return (unsigned int)v11;
}
