/*
 * XREFs of DxgkInitialize @ 0x140836CC8
 * Callers:
 *     sub_140836AA4 @ 0x140836AA4 (sub_140836AA4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x14041BDA0 (ZwEnumerateKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140836EAC @ 0x140836EAC (sub_140836EAC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall DxgkInitialize(
        PDRIVER_OBJECT DriverObject,
        PUNICODE_STRING RegistryPath,
        PDRIVER_INITIALIZATION_DATA DriverInitializationData)
{
  void *v3; // r9
  void *v6; // rdi
  NTSTATUS result; // eax
  int v8; // ebx
  ULONG i; // r15d
  NTSTATUS v10; // eax
  PVOID PoolWithTag; // rax
  void *v12; // rdi
  unsigned int v13; // eax
  int v14; // eax
  __int64 j; // rdi
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v18; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD KeyInformation[64]; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING *v21; // [rsp+1F0h] [rbp+F0h]
  unsigned int v22; // [rsp+1F8h] [rbp+F8h]

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  ResultLength = 0;
  v18 = 0LL;
  v6 = v3;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  *(_DWORD *)&RegistryPath->Length = 0;
  ObjectAttributes.RootDirectory = v6;
  ObjectAttributes.ObjectName = v21;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
  v8 = result;
  if ( result >= 0 )
  {
    for ( i = 0; ; ++i )
    {
      v13 = *(_DWORD *)&RegistryPath->Length;
      if ( *(_DWORD *)&RegistryPath->Length >= 0x10u )
        goto LABEL_12;
      v10 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, KeyInformation, 0xFEu, &ResultLength);
      v8 = v10;
      if ( v10 == -2147483622 )
      {
        v13 = *(_DWORD *)&RegistryPath->Length;
        v8 = 0;
LABEL_12:
        qsort(DriverObject, v13, 8uLL, sub_140862A70);
        goto LABEL_13;
      }
      if ( v10 < 0 )
        goto LABEL_13;
      *((_WORD *)&KeyInformation[4] + ((unsigned __int64)KeyInformation[3] >> 1)) = 0;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x328uLL, 0x64764D43u);
      v12 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      memset(PoolWithTag, 0, 0x328uLL);
      LOWORD(v18) = KeyInformation[3];
      WORD1(v18) = LOWORD(KeyInformation[3]) + 2;
      *((_QWORD *)&v18 + 1) = &KeyInformation[4];
      v8 = sub_140836EAC(v12, KeyHandle, &v18, v22);
      if ( v8 < 0 )
        ExFreePoolWithTag(v12, 0x64764D43u);
      else
        *((_QWORD *)&DriverObject->Type + (unsigned int)(*(_DWORD *)&RegistryPath->Length)++) = v12;
    }
    v8 = -1073741670;
LABEL_13:
    ZwClose(KeyHandle);
    if ( *(_DWORD *)&RegistryPath->Length )
    {
      if ( v8 < 0 )
      {
        v14 = *(_DWORD *)&RegistryPath->Length - 1;
        for ( j = v14; j >= 0; *((_QWORD *)&DriverObject->Type + j--) = 0LL )
          ExFreePoolWithTag(*((PVOID *)&DriverObject->Type + j), 0x64764D43u);
        *(_DWORD *)&RegistryPath->Length = 0;
      }
      return v8;
    }
    else
    {
      return -2147483614;
    }
  }
  return result;
}
