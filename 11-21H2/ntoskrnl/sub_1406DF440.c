/*
 * XREFs of sub_1406DF440 @ 0x1406DF440
 * Callers:
 *     sub_1406DF35C @ 0x1406DF35C (sub_1406DF35C.c)
 * Callees:
 *     sub_1402D1840 @ 0x1402D1840 (sub_1402D1840.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     sub_1406DF520 @ 0x1406DF520 (sub_1406DF520.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_140769784 @ 0x140769784 (sub_140769784.c)
 */

__int64 __fastcall sub_1406DF440(unsigned __int16 *a1, __int64 a2, _QWORD *a3)
{
  int v5; // ebx
  unsigned int v7; // ecx
  unsigned int v8; // edx
  NTSTATUS v9; // eax
  HANDLE v10; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+20h] BYREF

  Handle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  UnicodeString = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  if ( a1 && *((_QWORD *)a1 + 1) && *a1 >= 2u && a3 )
  {
    v5 = sub_1406DF520(L"DriverStatePath", 0LL, LocationTypeRegistry, &DestinationString);
    if ( v5 >= 0 )
    {
      v7 = *a1 + 2;
      v8 = v7 + DestinationString.Length;
      if ( v8 < v7 )
      {
        v5 = -1073741675;
      }
      else if ( v8 <= 0xFFFE )
      {
        v5 = sub_140769784(&UnicodeString);
        if ( v5 >= 0 )
        {
          v5 = sub_1402D1840((__int64)&UnicodeString, 0LL, 2048, L"%wZ\\%wZ", &DestinationString, a1);
          if ( v5 >= 0 )
          {
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.ObjectName = &UnicodeString;
            ObjectAttributes.Length = 48;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v9 = ZwOpenKey(&Handle, 0x30006u, &ObjectAttributes);
            v5 = v9;
            if ( v9 == -1073741772 )
            {
              v5 = -1073741275;
            }
            else if ( v9 >= 0 )
            {
              v10 = Handle;
              Handle = 0LL;
              *a3 = v10;
            }
          }
        }
      }
      else
      {
        v5 = -2147483643;
      }
    }
  }
  else
  {
    v5 = -1073741811;
  }
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&UnicodeString);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v5;
}
