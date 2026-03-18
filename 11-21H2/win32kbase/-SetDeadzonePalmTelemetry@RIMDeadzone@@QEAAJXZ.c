/*
 * XREFs of ?SetDeadzonePalmTelemetry@RIMDeadzone@@QEAAJXZ @ 0x1C01A2980
 * Callers:
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1C01A1FA4 (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall RIMDeadzone::SetDeadzonePalmTelemetry(RIMDeadzone *this)
{
  unsigned int v1; // edi
  PVOID v3; // rbx
  __int64 v4; // rax
  __int64 Pool2; // rsi
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v1 = 0;
  if ( !*((_QWORD *)this + 7) )
  {
    v3 = gpLeakTrackingAllocator;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x7A645052) == 0x7A645052
      && (v4 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
      while ( *((_DWORD *)gpLeakTrackingAllocator + v4) != 2053394514 )
      {
        if ( ++v4 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_6;
      }
      Pool2 = ExAllocatePool2(260LL, 12316LL);
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
      {
        if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                (__int64)v3,
                Pool2,
                (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
LABEL_12:
          ExFreePoolWithTag((PVOID)Pool2, 0);
          return (unsigned int)-1073741801;
        }
        goto LABEL_8;
      }
      if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
              (__int64)v3,
              (const void *)Pool2,
              (struct NSInstrumentation::CBackTrace *)BackTrace) )
        goto LABEL_12;
      Pool2 += 16LL;
    }
    else
    {
LABEL_6:
      Pool2 = ExAllocatePool2(260LL, 12300LL);
    }
    if ( !Pool2 )
      return (unsigned int)-1073741801;
LABEL_8:
    *(_QWORD *)(Pool2 + 4) = 0LL;
    *(_DWORD *)Pool2 = 0;
    memset((void *)(Pool2 + 2060), 0, 0x2800uLL);
    memset((void *)(Pool2 + 12), 0, 0x800uLL);
    *(_BYTE *)(Pool2 + 12) = 0;
    *((_QWORD *)this + 7) = Pool2;
  }
  return v1;
}
