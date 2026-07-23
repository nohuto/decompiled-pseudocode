/*
 * XREFs of sub_14095CC40 @ 0x14095CC40
 * Callers:
 *     sub_14095C12C @ 0x14095C12C (sub_14095C12C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406BE560 @ 0x1406BE560 (sub_1406BE560.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_14077FC64 @ 0x14077FC64 (sub_14077FC64.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14095CC40(__int64 a1, UNICODE_STRING *a2)
{
  int v4; // ebx
  wchar_t *Buffer; // rdi
  unsigned __int16 MaximumLength; // si
  int v7; // eax
  ULONG v8; // edx
  SIZE_T v9; // rbx
  HANDLE Handle; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  int v13; // [rsp+A0h] [rbp+50h] BYREF
  SIZE_T NumberOfBytes; // [rsp+A8h] [rbp+58h] BYREF

  Handle = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v13 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v4 = sub_14077FFEC(
         0LL,
         2147483650LL,
         (__int64)L"SYSTEM\\CurrentControlSet\\Control\\HiveList",
         0,
         1u,
         (__int64)&Handle);
  if ( v4 >= 0 )
  {
    Buffer = DestinationString.Buffer;
    MaximumLength = DestinationString.MaximumLength;
    while ( 1 )
    {
      v7 = sub_14077FC64(Handle, *(const WCHAR **)(a1 + 8), &v13, Buffer, (unsigned int *)&NumberOfBytes);
      v4 = v7;
      if ( v7 != -1073741789 )
        break;
      if ( v13 != 1 )
        goto LABEL_17;
      v9 = (unsigned int)NumberOfBytes;
      if ( (unsigned int)NumberOfBytes < 2
        || (unsigned int)NumberOfBytes < MaximumLength
        || (unsigned int)NumberOfBytes > 0xFFFE )
      {
        goto LABEL_17;
      }
      if ( Buffer )
        ExFreePoolWithTag(Buffer, v8);
      DestinationString.MaximumLength = v9;
      MaximumLength = v9;
      DestinationString.Buffer = (wchar_t *)sub_1406BE560(v9);
      Buffer = DestinationString.Buffer;
      if ( !DestinationString.Buffer )
      {
        v4 = -1073741801;
        goto LABEL_18;
      }
    }
    if ( v7 < 0 )
      goto LABEL_18;
    if ( v13 == 1
      && (unsigned int)(NumberOfBytes - 2) <= 0xFFFC
      && !Buffer[((unsigned __int64)(unsigned int)NumberOfBytes >> 1) - 1] )
    {
      DestinationString.MaximumLength = NumberOfBytes;
      DestinationString.Length = NumberOfBytes - 2;
      *a2 = DestinationString;
      RtlInitUnicodeString(&DestinationString, 0LL);
      goto LABEL_18;
    }
LABEL_17:
    v4 = -1073741823;
  }
LABEL_18:
  RtlFreeUnicodeString(&DestinationString);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v4;
}
