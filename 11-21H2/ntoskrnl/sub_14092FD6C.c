/*
 * XREFs of sub_14092FD6C @ 0x14092FD6C
 * Callers:
 *     FsRtlHeatInit @ 0x14092F8A0 (FsRtlHeatInit.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall sub_14092FD6C(UNICODE_STRING *a1, UNICODE_STRING *a2, ULONG *a3, PVOID *a4, _BYTE *a5)
{
  NTSTATUS result; // eax
  ULONG Length; // edi
  PVOID Pool2; // rbx
  _BYTE *i; // r15
  NTSTATUS v12; // eax
  int v13; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp+30h] BYREF

  KeyHandle = 0LL;
  ResultLength = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.Attributes = 576;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( a2 )
    {
      Length = *a3;
      Pool2 = *a4;
      for ( i = a5; ; *i = 1 )
      {
        v12 = ZwQueryValueKey(KeyHandle, a2, KeyValueFullInformation, Pool2, Length, &ResultLength);
        v13 = v12;
        if ( v12 != -1073741789 && v12 != -2147483643 )
          break;
        if ( Length != *a3 )
          break;
        Length = ResultLength;
        Pool2 = (PVOID)ExAllocatePool2(256LL, ResultLength, 1752453958LL);
        if ( !Pool2 )
        {
          v13 = -1073741670;
          break;
        }
        if ( *i )
          ExFreePoolWithTag(*a4, 0);
        *a4 = Pool2;
        *a3 = Length;
      }
      ZwClose(KeyHandle);
      if ( v13 >= 0 && !*((_DWORD *)*a4 + 3) )
        return -1073741772;
      return v13;
    }
    else
    {
      ZwClose(KeyHandle);
      return 0;
    }
  }
  return result;
}
