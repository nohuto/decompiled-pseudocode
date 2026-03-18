/*
 * XREFs of rimUserMemAllocNodeAlloc @ 0x1C01897E0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall rimUserMemAllocNodeAlloc(struct _RTL_AVL_TABLE *Table, __int64 ByteSize)
{
  PVOID v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rax
  char v6; // bp
  __int64 Pool2; // rdi
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = gpLeakTrackingAllocator;
  ByteSize = (unsigned int)ByteSize;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x656D7552) != 0x656D7552 )
    return ExAllocatePool2(260LL, (unsigned int)ByteSize);
  v3 = 0LL;
  v4 = 0LL;
  if ( !*((_DWORD *)gpLeakTrackingAllocator + 11) )
    return ExAllocatePool2(260LL, (unsigned int)ByteSize);
  while ( *((_DWORD *)gpLeakTrackingAllocator + v4) != 1701672274 )
  {
    if ( ++v4 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      return ExAllocatePool2(260LL, (unsigned int)ByteSize);
  }
  v6 = 0;
  if ( (unsigned int)ByteSize < 0x1000uLL || (ByteSize & 0xFFF) != 0 )
  {
    v6 = 1;
    ByteSize = (unsigned int)ByteSize + 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, ByteSize);
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
