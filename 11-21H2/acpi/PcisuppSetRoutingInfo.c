/*
 * XREFs of PcisuppSetRoutingInfo @ 0x1C009CD80
 * Callers:
 *     LinkNodeCrackPrt @ 0x1C00192F8 (LinkNodeCrackPrt.c)
 * Callees:
 *     ACPIAmliBuildObjectPathname @ 0x1C0006528 (ACPIAmliBuildObjectPathname.c)
 *     IrqPolicyGetSubKey @ 0x1C009B108 (IrqPolicyGetSubKey.c)
 */

NTSTATUS __fastcall PcisuppSetRoutingInfo(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  NTSTATUS result; // eax
  int v4; // ebx
  __int64 DataSize; // rax
  __int64 v6; // rcx
  _BYTE *Data; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+20h] BYREF
  _BYTE *v10; // [rsp+68h] [rbp+28h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  result = IrqPolicyGetSubKey(a1, L"Routing Info", 1u, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Flags");
    v4 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, (PVOID)(a2 + 12), 1u);
    if ( v4 >= 0 )
    {
      if ( *(_QWORD *)a2 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)a2 + 600LL);
        v10 = 0LL;
        v4 = ACPIAmliBuildObjectPathname(v6, (PVOID *)&v10, 0);
        if ( v4 >= 0 )
        {
          Data = v10;
          RtlInitUnicodeString(&DestinationString, L"LinkNode");
          DataSize = -1LL;
          do
            ++DataSize;
          while ( Data[DataSize] );
          v4 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, Data, DataSize);
          if ( Data )
            ExFreePoolWithTag(Data, 0);
        }
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, L"StaticVector");
        v4 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, (PVOID)(a2 + 8), 4u);
      }
    }
    ZwClose(KeyHandle);
    return v4;
  }
  return result;
}
