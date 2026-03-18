/*
 * XREFs of RIMIsDeviceExcluded @ 0x1C019441C
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0190190 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0196000 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall RIMIsDeviceExcluded(__int16 a1, struct _UNICODE_STRING *a2)
{
  unsigned int v2; // ebx
  PVOID v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 Pool2; // rdi
  char v9; // r14
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  PVOID BackTrace[20]; // [rsp+70h] [rbp-90h] BYREF
  ULONG ResultLength; // [rsp+140h] [rbp+40h] BYREF
  void *KeyHandle; // [rsp+150h] [rbp+50h] BYREF

  v2 = 0;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  if ( a1 == 1 )
  {
    ResultLength = 0;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Wisp\\ExcludedDEvices");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      if ( ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, 0LL, 0, &ResultLength) == -1073741772
        || !ResultLength )
      {
        goto LABEL_16;
      }
      v4 = gpLeakTrackingAllocator;
      v5 = ResultLength;
      if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x78657352) == 0x78657352 )
      {
        v6 = 0LL;
        if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
        {
          while ( *((_DWORD *)gpLeakTrackingAllocator + v6) != 2019914578 )
          {
            if ( ++v6 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
              goto LABEL_9;
          }
          v9 = 0;
          if ( ResultLength < 0x1000uLL || (ResultLength & 0xFFF) != 0 )
          {
            v9 = 1;
            v5 = ResultLength + 16LL;
          }
          Pool2 = ExAllocatePool2(260LL, v5);
          if ( !Pool2 )
            goto LABEL_16;
          memset(BackTrace, 0, sizeof(BackTrace));
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( v9 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                   (__int64)v4,
                   (const void *)Pool2,
                   (struct NSInstrumentation::CBackTrace *)BackTrace) )
            {
              Pool2 += 16LL;
LABEL_10:
              if ( Pool2 )
                goto LABEL_11;
LABEL_16:
              ZwClose(KeyHandle);
              return v2;
            }
          }
          else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                      (__int64)v4,
                      Pool2,
                      (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
LABEL_11:
            if ( ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, (PVOID)Pool2, ResultLength, &ResultLength) >= 0
              && *(_DWORD *)(Pool2 + 4) == 4
              && (_DWORD)Pool2 == -11 )
            {
              v2 = 1;
            }
            NSInstrumentation::CLeakTrackingAllocator::Free(
              (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
              (char *)Pool2);
            goto LABEL_16;
          }
          ExFreePoolWithTag((PVOID)Pool2, 0);
          goto LABEL_16;
        }
      }
LABEL_9:
      Pool2 = ExAllocatePool2(260LL, ResultLength);
      goto LABEL_10;
    }
  }
  return v2;
}
