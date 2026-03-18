/*
 * XREFs of RIMSendLatencyMgtDeviceRequest @ 0x1C018C954
 * Callers:
 *     RIMUpdateDeviceForInputMode @ 0x1C00A2104 (RIMUpdateDeviceForInputMode.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00A1D50 (RIMGetDeviceObjectPointer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C00E6322 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDDd @ 0x1C018E5EC (WPP_RECORDER_AND_TRACE_SF_qDDd.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C018E844 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_SetUsages @ 0x1C018E9B8 (rimHidP_SetUsages.c)
 */

__int64 __fastcall RIMSendLatencyMgtDeviceRequest(struct _UNICODE_STRING *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  PWSTR Buffer; // rdi
  __int64 v7; // r9
  int v8; // edx
  int SpecificButtonCaps; // ebx
  int v10; // r8d
  size_t v11; // r13
  PVOID v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 Pool2; // rdi
  PIRP v16; // rax
  int v17; // r8d
  int v18; // edx
  char v19; // si
  int OutputBuffer; // [rsp+28h] [rbp-E0h]
  int OutputBufferLength; // [rsp+30h] [rbp-D8h]
  __int16 v23; // [rsp+68h] [rbp-A0h] BYREF
  int v24; // [rsp+6Ch] [rbp-9Ch] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+70h] [rbp-98h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-90h] BYREF
  PVOID Object; // [rsp+80h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  ULONG v29[2]; // [rsp+90h] [rbp-78h]
  struct _KEVENT Event; // [rsp+98h] [rbp-70h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-58h] BYREF
  PVOID BackTrace[20]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v33[80]; // [rsp+168h] [rbp+60h] BYREF

  Object = 0LL;
  DeviceObject = 0LL;
  Handle = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  memset(v33, 0, 0x48uLL);
  Buffer = a1[28].Buffer;
  v23 = 1;
  if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 256LL) )
  {
    Timeout.QuadPart = (LONGLONG)a1;
    v24 = a2 != 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C028EE70,
      byte_1C025D5F1,
      v5,
      v7,
      (__int64)&Timeout,
      (__int64)&v24);
  }
  LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qDDd(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v5,
      Buffer[21],
      OutputBuffer,
      OutputBufferLength);
  SpecificButtonCaps = RIMGetDeviceObjectPointer(a1 + 13, v4, v5, &Handle, &Object, &DeviceObject);
  if ( SpecificButtonCaps >= 0 )
  {
    v11 = Buffer[24];
    *(_QWORD *)v29 = *((_QWORD *)Buffer + 2);
    SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(2, 13, 0, 96, (__int64)v33, (__int64)&v23, *(__int64 *)v29);
    if ( SpecificButtonCaps < 0 )
    {
LABEL_38:
      ObfDereferenceObject(Object);
      ZwClose(Handle);
      goto LABEL_39;
    }
    v12 = gpLeakTrackingAllocator;
    v13 = (unsigned int)v11;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x69667352) == 0x69667352 )
    {
      v14 = 0LL;
      if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
      {
        while ( *((_DWORD *)gpLeakTrackingAllocator + v14) != 1768321874 )
        {
          if ( ++v14 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_18;
        }
        v19 = 0;
        if ( (unsigned int)v11 < 0x1000uLL || (v11 & 0xFFF) != 0 )
        {
          v19 = 1;
          v13 = (unsigned int)v11 + 16LL;
        }
        Pool2 = ExAllocatePool2(68LL, v13);
        if ( Pool2 )
        {
          memset(BackTrace, 0, sizeof(BackTrace));
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( v19 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                   (__int64)v12,
                   (const void *)Pool2,
                   (struct NSInstrumentation::CBackTrace *)BackTrace) )
            {
              Pool2 += 16LL;
LABEL_19:
              if ( Pool2 )
                goto LABEL_20;
              goto LABEL_37;
            }
          }
          else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                      (__int64)v12,
                      Pool2,
                      (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
LABEL_20:
            memset((void *)Pool2, 0, v11);
            *(_BYTE *)Pool2 = v33[2];
            if ( !a2
              || (LOWORD(v24) = 96,
                  Timeout.LowPart = 1,
                  SpecificButtonCaps = rimHidP_SetUsages(
                                         2,
                                         13,
                                         0,
                                         (unsigned int)&v24,
                                         (__int64)&Timeout,
                                         *(__int64 *)v29,
                                         Pool2,
                                         v11),
                  SpecificButtonCaps >= 0) )
            {
              KeInitializeEvent(&Event, NotificationEvent, 0);
              v16 = IoBuildDeviceIoControlRequest(
                      0xB0191u,
                      DeviceObject,
                      (PVOID)Pool2,
                      v11,
                      0LL,
                      0,
                      0,
                      &Event,
                      &IoStatusBlock);
              v18 = (int)v16;
              if ( v16 )
              {
                v16->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)Object;
                SpecificButtonCaps = IofCallDriver(DeviceObject, v16);
                if ( SpecificButtonCaps == 259 )
                {
                  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                  SpecificButtonCaps = IoStatusBlock.Status;
                }
              }
              else
              {
                LOBYTE(v18) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
                if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  WPP_RECORDER_AND_TRACE_SF_(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v18,
                    v17,
                    (_DWORD)gRimLog,
                    3,
                    1,
                    68,
                    (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids);
                }
                SpecificButtonCaps = -1073741668;
              }
            }
            NSInstrumentation::CLeakTrackingAllocator::Free(
              (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
              (char *)Pool2);
            goto LABEL_38;
          }
          ExFreePoolWithTag((PVOID)Pool2, 0);
        }
LABEL_37:
        SpecificButtonCaps = -1073741670;
        goto LABEL_38;
      }
    }
LABEL_18:
    Pool2 = ExAllocatePool2(68LL, (unsigned int)v11);
    goto LABEL_19;
  }
LABEL_39:
  LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v10,
      (_DWORD)gRimLog,
      2,
      1,
      69,
      (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
      SpecificButtonCaps);
  }
  return (unsigned int)SpecificButtonCaps;
}
