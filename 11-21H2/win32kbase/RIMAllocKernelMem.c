/*
 * XREFs of RIMAllocKernelMem @ 0x1C0189440
 * Callers:
 *     rimProcessInput @ 0x1C00CA6AC (rimProcessInput.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall RIMAllocKernelMem(unsigned __int64 a1, int a2)
{
  PVOID v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rax
  char v6; // bp
  __int64 Pool2; // rdi
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = gpLeakTrackingAllocator;
  if ( (a2 & *((_DWORD *)gpLeakTrackingAllocator + 10)) != a2 )
    return ExAllocatePool2(260LL, a1);
  v3 = 0LL;
  v4 = 0LL;
  if ( !*((_DWORD *)gpLeakTrackingAllocator + 11) )
    return ExAllocatePool2(260LL, a1);
  while ( *((_DWORD *)gpLeakTrackingAllocator + v4) != a2 )
  {
    if ( ++v4 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      return ExAllocatePool2(260LL, a1);
  }
  v6 = 0;
  if ( a1 < 0x1000 || (a1 & 0xFFF) != 0 )
  {
    v6 = 1;
    a1 += 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, a1);
  if ( Pool2 )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v6 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
             (__int64)v2,
             (const void *)Pool2,
             (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        return Pool2 + 16;
      }
    }
    else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                (__int64)v2,
                Pool2,
                (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      return Pool2;
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
  return v3;
}
