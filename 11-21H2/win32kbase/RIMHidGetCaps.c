/*
 * XREFs of RIMHidGetCaps @ 0x1C018B524
 * Callers:
 *     RIMCreateHidDesc @ 0x1C0056014 (RIMCreateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMHidGetCaps(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4)
{
  PVOID v4; // rbx
  int v8; // eax
  __int64 v9; // rax
  int v10; // edx
  __int64 Pool2; // rdi
  int v12; // r8d
  PVOID v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rbx
  NTSTATUS v16; // ebx
  PIRP v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  IRP *v22; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _IO_STACK_LOCATION *v24; // rbx
  ULONG_PTR v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 (__fastcall *v29)(__int64, __int64); // rax
  struct _KEVENT Event; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD IoStatusBlock[8]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID BackTrace[20]; // [rsp+88h] [rbp-80h] BYREF
  PVOID v33[20]; // [rsp+128h] [rbp+20h] BYREF

  v4 = gpLeakTrackingAllocator;
  memset(IoStatusBlock, 0, 24);
  v8 = *((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70707352;
  Event.Header.WaitListHead = 0LL;
  if ( v8 == 1886417746 && (v9 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v9) != 1886417746 )
    {
      if ( ++v9 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_5;
    }
    Pool2 = ExAllocatePool2(68LL, 56LL);
    if ( !Pool2 )
      goto LABEL_7;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
             (__int64)v4,
             Pool2,
             (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
LABEL_14:
        *(_DWORD *)Pool2 = 65576;
        if ( *(_QWORD *)(a1 + 416) )
        {
LABEL_36:
          KeInitializeEvent((PRKEVENT)&Event.Header.WaitListHead, SynchronizationEvent, 0);
          v18 = IoBuildSynchronousFsdRequest(
                  0x1Bu,
                  a2,
                  0LL,
                  0,
                  0LL,
                  (PKEVENT)&Event.Header.WaitListHead,
                  (PIO_STATUS_BLOCK)&IoStatusBlock[2]);
          v22 = v18;
          if ( v18 )
          {
            CurrentStackLocation = v18->Tail.Overlay.CurrentStackLocation;
            v18->RequestorMode = 0;
            v18->IoStatus.Status = -1073741637;
            v24 = CurrentStackLocation - 1;
            if ( !v24 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
            v24->MinorFunction = 8;
            v25 = *(_QWORD *)(a1 + 416);
            v24->Parameters.CreatePipe.Parameters = 0LL;
            v24->Parameters.WMI.ProviderId = v25;
            v24->Parameters.Create.Options = 65576;
            v24->Parameters.Read.ByteOffset.QuadPart = Pool2;
            v16 = IofCallDriver(a2, v22);
            if ( v16 == 259 )
            {
              KeWaitForSingleObject(&Event.Header.WaitListHead, Executive, 0, 0, 0LL);
              v16 = IoStatusBlock[2];
            }
            if ( v16 < 0 )
            {
              LOBYTE(v26) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
              if ( (_BYTE)v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_q(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v26,
                  v28,
                  (_DWORD)gRimLog,
                  3,
                  1,
                  40,
                  (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
                  (char)a2);
              }
            }
            else
            {
              v29 = *(__int64 (__fastcall **)(__int64, __int64))(Pool2 + 32);
              if ( !v29 )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
                v29 = *(__int64 (__fastcall **)(__int64, __int64))(Pool2 + 32);
              }
              v16 = v29(a3, a4);
            }
            goto LABEL_64;
          }
          LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v19,
              v21,
              (_DWORD)gRimLog,
              3,
              1,
              39,
              (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids);
          }
LABEL_21:
          v16 = -1073741670;
LABEL_64:
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            (char *)Pool2);
          return (unsigned int)v16;
        }
        v13 = gpLeakTrackingAllocator;
        if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70707352) == 0x70707352
          && (v14 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
        {
          while ( *((_DWORD *)gpLeakTrackingAllocator + v14) != 1886417746 )
          {
            if ( ++v14 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
              goto LABEL_19;
          }
          v15 = ExAllocatePool2(68LL, 32LL);
          if ( !v15 )
            goto LABEL_31;
          memset(v33, 0, sizeof(v33));
          RtlCaptureStackBackTrace(0, 0x14u, v33, 0LL);
          if ( (unsigned __int64)(v15 & 0xFFF) + 16 >= 0x1000 )
          {
            if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                   (__int64)v13,
                   v15,
                   (struct NSInstrumentation::CBackTrace *)v33) )
            {
              *(_QWORD *)(a1 + 416) = v15;
LABEL_35:
              *(GUID *)v15 = GUID_HID_INTERFACE_HIDPARSE;
              goto LABEL_36;
            }
LABEL_43:
            ExFreePoolWithTag((PVOID)v15, 0);
LABEL_31:
            *(_QWORD *)(a1 + 416) = 0LL;
            goto LABEL_21;
          }
          if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                  (__int64)v13,
                  (const void *)v15,
                  (struct NSInstrumentation::CBackTrace *)v33) )
            goto LABEL_43;
          v15 += 16LL;
        }
        else
        {
LABEL_19:
          v15 = ExAllocatePool2(68LL, 16LL);
        }
        *(_QWORD *)(a1 + 416) = v15;
        if ( !v15 )
          goto LABEL_21;
        goto LABEL_35;
      }
      goto LABEL_24;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v4,
            (const void *)Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
LABEL_24:
      ExFreePoolWithTag((PVOID)Pool2, 0);
      goto LABEL_7;
    }
    Pool2 += 16LL;
  }
  else
  {
LABEL_5:
    Pool2 = ExAllocatePool2(68LL, 40LL);
  }
  if ( Pool2 )
    goto LABEL_14;
LABEL_7:
  LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
  if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v12,
      (_DWORD)gRimLog,
      3,
      1,
      38,
      (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids);
  }
  return 3221225626LL;
}
