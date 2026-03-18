/*
 * XREFs of rimFindOrCreateHoldingFrame @ 0x1C01A6E08
 * Callers:
 *     RIMStartPointerDeviceFrame @ 0x1C01A6AF4 (RIMStartPointerDeviceFrame.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     rimFindHoldingFrame @ 0x1C01A6DDC (rimFindHoldingFrame.c)
 */

_QWORD *__fastcall rimFindOrCreateHoldingFrame(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  PVOID v5; // rdi
  __int64 v6; // rax
  __int64 Pool2; // rbx
  __int64 *v8; // rax
  __int64 v9; // rcx
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  result = rimFindHoldingFrame(a1, a2);
  if ( !result )
  {
    v5 = gpLeakTrackingAllocator;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x66687352) == 0x66687352
      && (v6 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
      while ( *((_DWORD *)gpLeakTrackingAllocator + v6) != 1718121298 )
      {
        if ( ++v6 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_6;
      }
      Pool2 = ExAllocatePool2(260LL, 104LL);
      if ( !Pool2 )
        return 0LL;
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
      {
        if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                (__int64)v5,
                Pool2,
                (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
LABEL_14:
          ExFreePoolWithTag((PVOID)Pool2, 0);
          return 0LL;
        }
LABEL_8:
        v8 = (__int64 *)(a1 + 760);
        *(_QWORD *)(Pool2 + 24) = *(_QWORD *)(a2 + 16);
        v9 = *(_QWORD *)(a1 + 760);
        if ( *(_QWORD *)(v9 + 8) != a1 + 760 )
          __fastfail(3u);
        *(_QWORD *)Pool2 = v9;
        *(_QWORD *)(Pool2 + 8) = v8;
        *(_QWORD *)(v9 + 8) = Pool2;
        *v8 = Pool2;
        return (_QWORD *)Pool2;
      }
      if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
              (__int64)v5,
              (const void *)Pool2,
              (struct NSInstrumentation::CBackTrace *)BackTrace) )
        goto LABEL_14;
      Pool2 += 16LL;
    }
    else
    {
LABEL_6:
      Pool2 = ExAllocatePool2(260LL, 88LL);
    }
    if ( !Pool2 )
      return (_QWORD *)Pool2;
    goto LABEL_8;
  }
  return result;
}
