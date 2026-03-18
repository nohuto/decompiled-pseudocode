/*
 * XREFs of RIMCheckPressureDefaultSetting @ 0x1C005EC04
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C005E080 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

int __fastcall RIMCheckPressureDefaultSetting(__int64 a1)
{
  int result; // eax
  PVOID v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 Pool2; // rbx
  char v7; // si
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BackTrace[20]; // [rsp+80h] [rbp-80h] BYREF
  ULONG ResultLength; // [rsp+140h] [rbp+40h] BYREF
  void *KeyHandle; // [rsp+148h] [rbp+48h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_BYTE *)(a1 + 1073) = 1;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\DefaultPressure");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    ValueName = 0LL;
    RtlInitUnicodeString(&ValueName, L"Disable");
    ResultLength = 0;
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength) == -1073741772
      || !ResultLength )
    {
      return ZwClose(KeyHandle);
    }
    v3 = gpLeakTrackingAllocator;
    v4 = ResultLength;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x63707352) == 0x63707352 )
    {
      v5 = 0LL;
      if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
      {
        while ( *((_DWORD *)gpLeakTrackingAllocator + v5) != 1668313938 )
        {
          if ( ++v5 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_8;
        }
        v7 = 0;
        if ( ResultLength < 0x1000uLL || (ResultLength & 0xFFF) != 0 )
        {
          v7 = 1;
          v4 = ResultLength + 16LL;
        }
        Pool2 = ExAllocatePool2(260LL, v4);
        if ( !Pool2 )
          return ZwClose(KeyHandle);
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v7 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v3,
                                  Pool2,
                                  BackTrace) )
          {
            Pool2 += 16LL;
LABEL_9:
            if ( Pool2 )
              goto LABEL_10;
            return ZwClose(KeyHandle);
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v3,
                                     Pool2,
                                     BackTrace) )
        {
LABEL_10:
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &ValueName,
                 KeyValuePartialInformation,
                 (PVOID)Pool2,
                 ResultLength,
                 &ResultLength) >= 0
            && *(_DWORD *)(Pool2 + 4) == 4
            && *(_BYTE *)(Pool2 + 12) == 1 )
          {
            *(_BYTE *)(a1 + 1073) = 0;
          }
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            (void *)Pool2);
          return ZwClose(KeyHandle);
        }
        ExFreePoolWithTag((PVOID)Pool2, 0);
        return ZwClose(KeyHandle);
      }
    }
LABEL_8:
    Pool2 = ExAllocatePool2(260LL, ResultLength);
    goto LABEL_9;
  }
  return result;
}
