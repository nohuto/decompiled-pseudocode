/*
 * XREFs of EtwpCapturePreviousRegistryData @ 0x1409F45B4
 * Callers:
 *     EtwpRegTraceCallback @ 0x1408AADC0 (EtwpRegTraceCallback.c)
 * Callees:
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14041B3D0 (ZwQueryValueKey.c)
 *     ObOpenObjectByPointer @ 0x1407376C0 (ObOpenObjectByPointer.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void __fastcall EtwpCapturePreviousRegistryData(__int64 a1)
{
  void *v2; // rcx
  void *Pool2; // rbx
  ULONG Length; // eax
  NTSTATUS v5; // eax
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+18h] BYREF

  KeyHandle = 0LL;
  ResultLength = 0;
  v2 = *(void **)a1;
  Pool2 = 0LL;
  ValueName = 0LL;
  ValueName = *(UNICODE_STRING *)*(_QWORD *)(a1 + 8);
  if ( ObOpenObjectByPointer(v2, 0x200u, 0LL, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, 0, &KeyHandle) >= 0 )
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
