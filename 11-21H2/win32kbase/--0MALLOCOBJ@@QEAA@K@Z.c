/*
 * XREFs of ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C01784D0
 * Callers:
 *     EtwTraceTrappedAppContainerRender @ 0x1C01788C0 (EtwTraceTrappedAppContainerRender.c)
 * Callees:
 *     EngSetLastError @ 0x1C008B610 (EngSetLastError.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

MALLOCOBJ *__fastcall MALLOCOBJ::MALLOCOBJ(MALLOCOBJ *this)
{
  PVOID v1; // rsi
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 Pool2; // rdi
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  *(_QWORD *)this = 0LL;
  v1 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x706D7447) == 0x706D7447
    && (v3 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v3) != 1886221383 )
    {
      if ( ++v3 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_5;
    }
    Pool2 = ExAllocatePool2(260LL, 272LL);
    if ( !Pool2 )
      goto LABEL_10;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                              v1,
                              Pool2,
                              BackTrace) )
      {
        *(_QWORD *)this = Pool2;
        return this;
      }
      goto LABEL_16;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v1,
                             Pool2,
                             BackTrace) )
    {
LABEL_16:
      ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_10:
      *(_QWORD *)this = 0LL;
      goto LABEL_7;
    }
    v4 = Pool2 + 16;
  }
  else
  {
LABEL_5:
    v4 = ExAllocatePool2(260LL, 256LL);
  }
  *(_QWORD *)this = v4;
  if ( !v4 )
LABEL_7:
    EngSetLastError(8u);
  return this;
}
