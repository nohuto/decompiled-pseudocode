/*
 * XREFs of DrvInitConsole @ 0x1C0068750
 * Callers:
 *     InitVideo @ 0x1C0068398 (InitVideo.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C006ADB0 (DrvUpdateGraphicsDeviceList.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 DrvInitConsole()
{
  int v0; // esi
  _DWORD *v1; // rax
  _DWORD *v2; // rbx
  void *v3; // rdi
  unsigned int v4; // eax
  unsigned __int64 i; // rdx
  __int64 v6; // rcx
  PVOID v7; // rdi
  unsigned __int64 v8; // rdx
  __int64 Pool2; // rbx
  PVOID v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v14; // rax
  char v15; // si
  __int64 v16; // rax
  char v17; // si
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  PVOID BackTrace[20]; // [rsp+70h] [rbp-90h] BYREF
  PVOID v21[26]; // [rsp+110h] [rbp+10h] BYREF
  ULONG ResultLength; // [rsp+1F0h] [rbp+F0h] BYREF
  void *KeyHandle; // [rsp+1F8h] [rbp+F8h] BYREF

  DestinationString = 0LL;
  KeyHandle = 0LL;
  v0 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( !gProtocolType )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      ResultLength = 0;
      RtlInitUnicodeString(&DestinationString, L"SystemStartOptions");
      if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength) == -1073741789
        && ResultLength >= 0x11 )
      {
        v1 = (_DWORD *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                         (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                         260LL,
                         ResultLength,
                         1886221383);
        v2 = v1;
        if ( v1 )
        {
          v3 = v1;
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &DestinationString,
                 KeyValuePartialInformation,
                 v1,
                 ResultLength,
                 &ResultLength) >= 0 )
          {
            v4 = v2[2];
            if ( v4 >= 0x12 )
            {
              for ( i = (unsigned __int64)(v2 + 3); i <= (unsigned __int64)v2 + v4 - 6; i += 2LL )
              {
                v6 = *(_QWORD *)i - 0x45005300410042LL;
                if ( *(_QWORD *)i == 0x45005300410042LL )
                {
                  v6 = *(_QWORD *)(i + 8) - 0x45004400490056LL;
                  if ( *(_QWORD *)(i + 8) == 0x45004400490056LL )
                    v6 = *(unsigned __int16 *)(i + 16) - 79LL;
                }
                if ( !v6 )
                {
                  v0 = 1;
                  break;
                }
              }
            }
          }
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            v3);
        }
      }
      ZwClose(KeyHandle);
    }
  }
  WdLogSingleEntry0(5LL);
  gbBaseVideo = v0;
  gcMaximumAdapterCount = ((__int64 (*)(void))qword_1C02966B0)();
  if ( 8 * gcMaximumAdapterCount )
  {
    v7 = gpLeakTrackingAllocator;
    v8 = 8 * gcMaximumAdapterCount;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x616C6147) != 0x616C6147
      || (v14 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
LABEL_19:
      Pool2 = ExAllocatePool2(260LL, v8);
      goto LABEL_20;
    }
    while ( *((_DWORD *)gpLeakTrackingAllocator + v14) != 1634492743 )
    {
      if ( ++v14 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_19;
    }
    v15 = 0;
    if ( v8 < 0x1000 || ((8 * (_WORD)gcMaximumAdapterCount) & 0xFFF) != 0 )
    {
      v15 = 1;
      v8 += 16LL;
    }
    Pool2 = ExAllocatePool2(260LL, v8);
    if ( Pool2 )
    {
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( v15 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v7,
                                Pool2,
                                BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_20;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v7,
                                   Pool2,
                                   BackTrace) )
      {
        goto LABEL_20;
      }
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
  }
  Pool2 = 0LL;
LABEL_20:
  gpAdapterLuids = (PVOID)Pool2;
  if ( !gcMaximumAdapterCount )
  {
LABEL_26:
    v12 = 0LL;
    goto LABEL_23;
  }
  v10 = gpLeakTrackingAllocator;
  v11 = gcMaximumAdapterCount;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x616C6147) == 0x616C6147 )
  {
    v16 = 0LL;
    if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
    {
      while ( *((_DWORD *)gpLeakTrackingAllocator + v16) != 1634492743 )
      {
        if ( ++v16 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_22;
      }
      v17 = 0;
      if ( gcMaximumAdapterCount < 0x1000uLL || (gcMaximumAdapterCount & 0xFFF) != 0 )
      {
        v17 = 1;
        v11 = gcMaximumAdapterCount + 16LL;
      }
      v12 = ExAllocatePool2(260LL, v11);
      if ( v12 )
      {
        memset(v21, 0, 0xA0uLL);
        RtlCaptureStackBackTrace(0, 0x14u, v21, 0LL);
        if ( v17 && (unsigned __int64)(v12 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v10,
                                  v12,
                                  v21) )
          {
            v12 += 16LL;
            goto LABEL_23;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v10,
                                     v12,
                                     v21) )
        {
          goto LABEL_23;
        }
        ExFreePoolWithTag((PVOID)v12, 0);
      }
      goto LABEL_26;
    }
  }
LABEL_22:
  v12 = ExAllocatePool2(260LL, gcMaximumAdapterCount);
LABEL_23:
  gpDevicesPerLuid = (PVOID)v12;
  if ( !gpAdapterLuids || !v12 )
    return 3221225495LL;
  DrvUpdateGraphicsDeviceList(1LL);
  return 0LL;
}
