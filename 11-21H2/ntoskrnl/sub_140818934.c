/*
 * XREFs of sub_140818934 @ 0x140818934
 * Callers:
 *     sub_14081881C @ 0x14081881C (sub_14081881C.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1402DEF50 (RtlInsertElementGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x14041BDA0 (ZwEnumerateKey.c)
 *     RtlNtStatusToDosError @ 0x14069E070 (RtlNtStatusToDosError.c)
 *     RtlWriteRegistryValue @ 0x1406D76C0 (RtlWriteRegistryValue.c)
 *     sub_1408226C0 @ 0x1408226C0 (sub_1408226C0.c)
 */

int __fastcall sub_140818934(
        __int64 a1,
        unsigned int a2,
        const WCHAR *a3,
        const WCHAR *a4,
        unsigned int *KeyInformation,
        BOOLEAN NewElement,
        PRTL_AVL_TABLE Table,
        int a8)
{
  int result; // eax
  ULONG v11; // edi
  int v12; // r13d
  int v13; // ebx
  unsigned __int64 v14; // rax
  _RTL_AVL_TABLE *v15; // rcx
  const WCHAR *v16; // rdx
  __int64 ValueData; // [rsp+30h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ValueData = 0LL;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  NewElement = 0;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  RtlInitUnicodeString(&DestinationString, a3);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v11 = 0;
    v12 = a8;
    while ( 1 )
    {
      v13 = ZwEnumerateKey(KeyHandle, v11, KeyBasicInformation, KeyInformation, 0x11Eu, (PULONG)&ValueData + 1);
      v14 = KeyInformation[3];
      if ( v14 >= 0x108 )
        break;
      if ( v13 < 0 )
      {
        if ( v13 != -2147483622 )
          goto LABEL_13;
      }
      else
      {
        v15 = Table;
        *((_WORD *)KeyInformation + (v14 >> 1) + 8) = 0;
        RtlInsertElementGenericTableAvl(v15, KeyInformation + 4, KeyInformation[3] + 2, &NewElement);
        if ( NewElement )
          sub_1408226C0(a1, a2, KeyInformation + 4, a3, a4, v12, ValueData);
      }
      ++v11;
      if ( v13 < 0 )
        return ZwClose(KeyHandle);
    }
    v13 = -2147483643;
LABEL_13:
    LODWORD(ValueData) = RtlNtStatusToDosError(v13);
    v16 = a4;
    if ( !a4 )
      v16 = a3;
    RtlWriteRegistryValue(0, v16, L"EnableStatus", 4u, &ValueData, 4u);
    return ZwClose(KeyHandle);
  }
  return result;
}
