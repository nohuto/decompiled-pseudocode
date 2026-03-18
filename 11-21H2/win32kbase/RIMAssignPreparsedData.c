/*
 * XREFs of RIMAssignPreparsedData @ 0x1C018F944
 * Callers:
 *     RIMReleasePointerDeviceInfo @ 0x1C0194C38 (RIMReleasePointerDeviceInfo.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAssignPreparsedData(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r14d
  unsigned int v6; // eax
  PVOID v7; // rbp
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 Pool2; // rbx
  char v12; // r15
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF

  v5 = -1073741801;
  if ( *(_QWORD *)(a3 + 928) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !*(_QWORD *)(a1 + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v6 = *(_DWORD *)(a1 + 104);
  if ( !v6 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v6 = *(_DWORD *)(a1 + 104);
  }
  v7 = gpLeakTrackingAllocator;
  v8 = v6;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x63707352) != 0x63707352
    || (v9 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_11:
    Pool2 = ExAllocatePool2(260LL, v8);
    goto LABEL_12;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v9) != 1668313938 )
  {
    if ( ++v9 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_11;
  }
  v12 = 0;
  if ( v8 < 0x1000 || (v8 & 0xFFF) != 0 )
  {
    v12 = 1;
    v8 += 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, v8);
  if ( !Pool2 )
    goto LABEL_19;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( !v12 || (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
           (__int64)v7,
           Pool2,
           (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      *(_QWORD *)(a3 + 928) = Pool2;
      goto LABEL_13;
    }
LABEL_26:
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_19:
    *(_QWORD *)(a3 + 928) = 0LL;
    return v5;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
          (__int64)v7,
          (const void *)Pool2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
    goto LABEL_26;
  Pool2 += 16LL;
LABEL_12:
  *(_QWORD *)(a3 + 928) = Pool2;
  if ( Pool2 )
  {
LABEL_13:
    memmove((void *)Pool2, *(const void **)(a1 + 16), *(unsigned int *)(a1 + 104));
    return 0;
  }
  return v5;
}
