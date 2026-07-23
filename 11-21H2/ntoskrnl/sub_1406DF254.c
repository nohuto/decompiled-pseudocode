/*
 * XREFs of sub_1406DF254 @ 0x1406DF254
 * Callers:
 *     sub_1406DF14C @ 0x1406DF14C (sub_1406DF14C.c)
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 * Callees:
 *     sub_1402D1840 @ 0x1402D1840 (sub_1402D1840.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     sub_1406DF520 @ 0x1406DF520 (sub_1406DF520.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_140769784 @ 0x140769784 (sub_140769784.c)
 *     sub_140943E3C @ 0x140943E3C (sub_140943E3C.c)
 *     sub_140949AF8 @ 0x140949AF8 (sub_140949AF8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406DF254(UNICODE_STRING *CreateOptions, __int64 a2, _QWORD *a3)
{
  void *v4; // rsi
  void *v5; // rdi
  int v7; // ebx
  unsigned int v9; // ecx
  unsigned int v10; // edx
  NTSTATUS v11; // eax
  int v12; // eax
  int v13; // eax
  HANDLE v14; // rax
  void *v15; // [rsp+40h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-21h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp+67h] BYREF
  void *v20; // [rsp+E8h] [rbp+7Fh]

  Handle = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v15 = 0LL;
  v20 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  UnicodeString = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  if ( !CreateOptions || !CreateOptions->Buffer || CreateOptions->Length < 2u || !a3 )
  {
    v7 = -1073741811;
    goto LABEL_6;
  }
  v7 = sub_1406DF520(L"DriverStatePath", 0LL, LocationTypeRegistry, &DestinationString);
  if ( v7 < 0 )
    goto LABEL_6;
  v9 = CreateOptions->Length + 2;
  v10 = v9 + DestinationString.Length;
  if ( v10 < v9 )
  {
    v7 = -1073741675;
  }
  else
  {
    if ( v10 > 0xFFFE )
    {
      v7 = -2147483643;
      goto LABEL_6;
    }
    v7 = sub_140769784(&UnicodeString);
    if ( v7 >= 0 )
    {
      v7 = sub_1402D1840((__int64)&UnicodeString, 0LL, 2048, L"%wZ\\%wZ", &DestinationString, CreateOptions);
      if ( v7 >= 0 )
      {
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &UnicodeString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v11 = ZwOpenKey(&Handle, 4u, &ObjectAttributes);
        v7 = v11;
        if ( v11 != -1073741772 )
          goto LABEL_25;
        v12 = sub_140949AF8(0LL, &v15);
        v4 = v15;
        v7 = v12;
        if ( v12 < 0 )
          goto LABEL_6;
        v13 = sub_140943E3C(&DestinationString);
        v5 = v20;
        v7 = v13;
        if ( v13 == -1073741772 )
          goto LABEL_24;
        if ( v13 < 0 )
          goto LABEL_6;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = v20;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = CreateOptions;
        ObjectAttributes.SecurityDescriptor = v4;
        v11 = ZwCreateKey(&Handle, 4u, &ObjectAttributes, 0, 0LL, 0, 0LL);
        v7 = v11;
        if ( v11 == -1073741772 )
        {
LABEL_24:
          v7 = -1073741595;
        }
        else
        {
LABEL_25:
          if ( v11 >= 0 )
          {
            v14 = Handle;
            Handle = 0LL;
            *a3 = v14;
          }
        }
      }
    }
  }
LABEL_6:
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&UnicodeString);
  if ( Handle )
    ZwClose(Handle);
  if ( v5 )
    ZwClose(v5);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v7;
}
