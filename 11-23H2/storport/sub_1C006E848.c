/*
 * XREFs of sub_1C006E848 @ 0x1C006E848
 * Callers:
 *     sub_1C006C8A0 @ 0x1C006C8A0 (sub_1C006C8A0.c)
 *     sub_1C006E848 @ 0x1C006E848 (sub_1C006E848.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C006E67C @ 0x1C006E67C (sub_1C006E67C.c)
 *     sub_1C006E848 @ 0x1C006E848 (sub_1C006E848.c)
 */

int __fastcall sub_1C006E848(__int64 a1, const WCHAR *a2, char a3, char a4)
{
  char v7; // r12
  int result; // eax
  const char *v9; // rdx
  ULONG Length; // r14d
  __int64 v11; // rbx
  ULONG i; // esi
  NTSTATUS v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // r9
  const WCHAR *v16; // rax
  WCHAR *v17; // rsi
  __int64 v18; // r9
  __int64 v19; // r9
  const WCHAR *v20; // rax
  WCHAR *v21; // rsi
  ULONG ResultLength; // [rsp+34h] [rbp-85h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+38h] [rbp-81h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-69h] BYREF
  UNICODE_STRING Source; // [rsp+60h] [rbp-59h] BYREF
  struct _STRING v28; // [rsp+70h] [rbp-49h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-39h] BYREF
  WCHAR SourceString[8]; // [rsp+B0h] [rbp-9h] BYREF
  __int128 v31; // [rsp+C0h] [rbp+7h]
  __int16 v32; // [rsp+D0h] [rbp+17h]

  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  v7 = 0;
  v28 = 0LL;
  v32 = 0;
  DestinationString = 0LL;
  Destination = 0LL;
  Source = 0LL;
  *(_OWORD *)SourceString = 0LL;
  v31 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&Destination, SourceString);
    Destination.MaximumLength = 34;
    if ( a3 )
    {
      v9 = (const char *)(a1 + 169);
    }
    else
    {
      if ( !a4 )
        return ZwClose(KeyHandle);
      v9 = (const char *)(*(_QWORD *)(a1 + 152) + 90LL);
    }
    RtlInitAnsiString(&v28, v9);
    RtlAnsiStringToUnicodeString(&Destination, &v28, 0);
    Length = 16;
    v11 = sub_1C0007CF4(256LL, 16LL, 1700028754LL, *(_QWORD *)(a1 + 8));
    if ( v11 )
    {
      for ( i = 0; ; ++i )
      {
        while ( 1 )
        {
          v13 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, (PVOID)v11, Length, &ResultLength);
          if ( v13 >= 0 )
            break;
          if ( v13 == -2147483622 )
            goto LABEL_21;
          if ( v13 != -2147483643 && v13 != -1073741789 )
            goto LABEL_25;
          Length = ResultLength;
          ExFreePoolWithTag((PVOID)v11, 0x65546152u);
          v11 = sub_1C0007CF4(256LL, Length, 1700028754LL, *(_QWORD *)(a1 + 8));
          if ( !v11 )
            return ZwClose(KeyHandle);
        }
        v14 = *(_DWORD *)(v11 + 12);
        if ( v14 <= Destination.Length
          && !_wcsnicmp((const wchar_t *)(v11 + 16), Destination.Buffer, (unsigned __int64)v14 >> 1) )
        {
          break;
        }
      }
      v15 = *(_QWORD *)(a1 + 8);
      ResultLength = DestinationString.Length + 6 + *(_DWORD *)(v11 + 12);
      v16 = (const WCHAR *)sub_1C0007CF4(256LL, ResultLength, 1700028754LL, v15);
      v17 = (WCHAR *)v16;
      if ( !v16 )
        goto LABEL_25;
      RtlInitUnicodeString(&Destination, v16);
      Destination.MaximumLength = ResultLength;
      RtlAppendUnicodeToString(&Destination, DestinationString.Buffer);
      RtlAppendUnicodeToString(&Destination, &::Source);
      Source.Buffer = (PWSTR)(v11 + 16);
      Source.Length = *(_WORD *)(v11 + 12);
      Source.MaximumLength = Source.Length + 2;
      RtlAppendUnicodeStringToString(&Destination, &Source);
      if ( a3 )
      {
        LOBYTE(v18) = 1;
        sub_1C006E848(a1, Destination.Buffer, 0LL, v18);
      }
      else
      {
        sub_1C006E67C(a1, Destination.Buffer);
      }
      v7 = 1;
      ExFreePoolWithTag(v17, 0x65546152u);
LABEL_21:
      if ( a4 && !v7 )
      {
        v19 = *(_QWORD *)(a1 + 8);
        ResultLength = DestinationString.Length + 22;
        v20 = (const WCHAR *)sub_1C0007CF4(256LL, ResultLength, 1700028754LL, v19);
        v21 = (WCHAR *)v20;
        if ( v20 )
        {
          RtlInitUnicodeString(&Destination, v20);
          Destination.MaximumLength = ResultLength;
          RtlAppendUnicodeToString(&Destination, DestinationString.Buffer);
          RtlAppendUnicodeToString(&Destination, &::Source);
          RtlAppendUnicodeToString(&Destination, L"Default");
          sub_1C006E67C(a1, Destination.Buffer);
          ExFreePoolWithTag(v21, 0x65546152u);
        }
      }
LABEL_25:
      ExFreePoolWithTag((PVOID)v11, 0x65546152u);
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
