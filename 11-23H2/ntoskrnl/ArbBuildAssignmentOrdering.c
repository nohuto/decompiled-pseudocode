/*
 * XREFs of ArbBuildAssignmentOrdering @ 0x140813D48
 * Callers:
 *     ArbInitializeArbiterInstance @ 0x140813A18 (ArbInitializeArbiterInstance.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14041B490 (ZwCreateKey.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     ArbAddOrdering @ 0x140814224 (ArbAddOrdering.c)
 *     ArbpGetRegistryValue @ 0x1408142F8 (ArbpGetRegistryValue.c)
 *     ArbInitializeOrderingList @ 0x1408143C4 (ArbInitializeOrderingList.c)
 *     ArbFreeOrderingList @ 0x140814408 (ArbFreeOrderingList.c)
 *     ArbPruneOrdering @ 0x140814444 (ArbPruneOrdering.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbBuildAssignmentOrdering(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS RegistryValue; // edi
  void *v7; // rcx
  void *v8; // rcx
  HANDLE Handle; // [rsp+48h] [rbp-81h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-79h] BYREF
  __int128 v11; // [rsp+58h] [rbp-71h] BYREF
  __int64 v12; // [rsp+68h] [rbp-61h]
  __int64 v13; // [rsp+70h] [rbp-59h]
  __int64 v14; // [rsp+78h] [rbp-51h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-49h] BYREF
  __int64 v16; // [rsp+B0h] [rbp-19h]
  __int128 v17; // [rsp+B8h] [rbp-11h]
  __int128 v18; // [rsp+C8h] [rbp-1h]

  v16 = a3;
  KeyHandle = 0LL;
  Handle = 0LL;
  v11 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v17 = 0LL;
  v18 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
  ArbFreeOrderingList(a1 + 56);
  ArbFreeOrderingList(a1 + 72);
  RegistryValue = ArbInitializeOrderingList(a1 + 56);
  if ( RegistryValue >= 0 )
  {
    RegistryValue = ArbInitializeOrderingList(a1 + 72);
    if ( RegistryValue >= 0 )
    {
      LODWORD(v11) = 7733366;
      *((_QWORD *)&v11 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v11;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      RegistryValue = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( RegistryValue >= 0 )
      {
        LODWORD(v11) = 1966110;
        *((_QWORD *)&v11 + 1) = L"AllocationOrder";
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v11;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        RegistryValue = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
        if ( RegistryValue >= 0 )
          RegistryValue = ArbpGetRegistryValue(Handle);
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  v7 = *(void **)(a1 + 64);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_DWORD *)(a1 + 56) = 0;
  }
  v8 = *(void **)(a1 + 80);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_DWORD *)(a1 + 72) = 0;
  }
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)RegistryValue;
}
