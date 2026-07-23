/*
 * XREFs of sub_1409E5A54 @ 0x1409E5A54
 * Callers:
 *     Function @ 0x1409E5BF0 (Function.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1409E5A54(__int64 a1)
{
  void *Pool2; // rbx
  void *v3; // rcx
  ULONG Length; // eax
  NTSTATUS v5; // eax
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp+8h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  ResultLength = 0;
  Pool2 = 0LL;
  v3 = *(void **)a1;
  ValueName = *(UNICODE_STRING *)*(_QWORD *)(a1 + 8);
  if ( ObOpenObjectByPointer(v3, 0x200u, 0LL, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, 0, &KeyHandle) >= 0 )
  {
    do
    {
      Length = ResultLength;
      if ( ResultLength )
      {
        if ( Pool2 )
        {
          ExFreePoolWithTag(Pool2, 0);
          Length = ResultLength;
        }
        Pool2 = (void *)ExAllocatePool2(256LL, Length, 829912133LL);
        if ( !Pool2 )
          goto LABEL_13;
        Length = ResultLength;
      }
      v5 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Pool2, Length, &ResultLength);
    }
    while ( v5 == -2147483643 || v5 == -1073741789 );
    if ( v5 < 0 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      *(_QWORD *)(a1 + 40) = Pool2;
    }
  }
LABEL_13:
  if ( KeyHandle )
    ZwClose(KeyHandle);
}
