/*
 * XREFs of RIMGetKbdExId @ 0x1C009EF24
 * Callers:
 *     RIMQueryDev @ 0x1C009EDA4 (RIMQueryDev.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C0046ABC (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall RIMGetKbdExId(HANDLE FileHandle, _QWORD *a2)
{
  NTSTATUS v4; // edi
  int v5; // edx
  int v6; // r8d
  PVOID v7; // rsi
  __int64 v8; // rdx
  __int64 Pool2; // rbx
  __int64 v11; // rax
  char v12; // r14
  struct _UNICODE_STRING InstanceName; // [rsp+50h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+60h] [rbp-69h] BYREF
  ULONG InOutBufferSize; // [rsp+140h] [rbp+77h] BYREF
  PVOID DataBlockObject; // [rsp+148h] [rbp+7Fh] BYREF

  InOutBufferSize = 0;
  DataBlockObject = 0LL;
  InstanceName = 0LL;
  v4 = IoWMIOpenBlock(&MSKeyboard_ExtendedID_GUID, 1u, &DataBlockObject);
  if ( v4 >= 0 )
  {
    v4 = IoWMIHandleToInstanceName(DataBlockObject, FileHandle, &InstanceName);
    if ( v4 < 0 )
    {
LABEL_16:
      ObfDereferenceObject(DataBlockObject);
      return (unsigned int)v4;
    }
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_S(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v6,
        (_DWORD)gRimLog,
        4,
        1,
        20,
        (__int64)&WPP_8fed67cf671c3c35dd73f9843ee5fb4d_Traceguids,
        (__int64)InstanceName.Buffer);
    }
    IoWMIQuerySingleInstance(DataBlockObject, &InstanceName, &InOutBufferSize, 0LL);
    v7 = gpLeakTrackingAllocator;
    InOutBufferSize += 8;
    v8 = InOutBufferSize;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x656B7352) == 0x656B7352 )
    {
      v11 = 0LL;
      if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
      {
        while ( *((_DWORD *)gpLeakTrackingAllocator + v11) != 1701540690 )
        {
          if ( ++v11 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_10;
        }
        v12 = 0;
        if ( InOutBufferSize < 0x1000uLL || (InOutBufferSize & 0xFFF) != 0 )
        {
          v12 = 1;
          v8 = InOutBufferSize + 16LL;
        }
        Pool2 = ExAllocatePool2(68LL, v8);
        if ( !Pool2 )
          goto LABEL_15;
        memset(BackTrace, 0, 0xA0uLL);
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v12 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v7,
                                  Pool2,
                                  BackTrace) )
          {
            Pool2 += 16LL;
LABEL_11:
            if ( Pool2 )
            {
LABEL_12:
              v4 = IoWMIQuerySingleInstance(DataBlockObject, &InstanceName, &InOutBufferSize, (PVOID)Pool2);
              if ( v4 >= 0 )
                *a2 = *(_QWORD *)(*(unsigned int *)(Pool2 + 56) + Pool2);
              NSInstrumentation::CLeakTrackingAllocator::Free(
                (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                (char *)Pool2);
            }
LABEL_15:
            RtlFreeUnicodeString(&InstanceName);
            goto LABEL_16;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v7,
                                     Pool2,
                                     BackTrace) )
        {
          goto LABEL_12;
        }
        ExFreePoolWithTag((PVOID)Pool2, 0);
        goto LABEL_15;
      }
    }
LABEL_10:
    Pool2 = ExAllocatePool2(68LL, InOutBufferSize);
    goto LABEL_11;
  }
  return (unsigned int)v4;
}
