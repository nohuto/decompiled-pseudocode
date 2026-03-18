/*
 * XREFs of AllocFreeTmpBuffer @ 0x1C002FCF0
 * Callers:
 *     NtGdiExtCreateRegion @ 0x1C0030EC0 (NtGdiExtCreateRegion.c)
 *     NtGdiOpenDCW @ 0x1C0071250 (NtGdiOpenDCW.c)
 *     NtGdiGetRegionData @ 0x1C008B350 (NtGdiGetRegionData.c)
 *     NtGdiPolyPolyDraw @ 0x1C00949C0 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C002FE1C (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall AllocFreeTmpBuffer(unsigned int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  PVOID v4; // rbp
  unsigned __int64 v5; // r9
  __int64 Pool2; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rax
  __int64 *v9; // rdi
  char v10; // r14
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v1 = 0LL;
  if ( a1 <= 0x1000 )
  {
    v2 = _InterlockedExchange64((volatile __int64 *)gpTmpGlobalFree, 0LL);
    if ( v2 )
      return v2;
  }
  v2 = 0LL;
  if ( a1 >= 0xFFFFEFDF )
    return v2;
  v4 = gpLeakTrackingAllocator;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          0x706D5447u) )
  {
    Pool2 = ExAllocatePool2(262LL, (unsigned int)v5);
    goto LABEL_7;
  }
  v10 = 0;
  if ( v5 < 0x1000 || (v5 & 0xFFF) != 0 )
  {
    v10 = 1;
    v5 += 16LL;
  }
  Pool2 = ExAllocatePool2(262LL, v5);
  if ( Pool2 )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v10 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v4,
                              Pool2,
                              BackTrace) )
      {
        Pool2 += 16LL;
        goto LABEL_7;
      }
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v4,
                                 Pool2,
                                 BackTrace) )
    {
LABEL_7:
      if ( Pool2 )
      {
        v2 = Pool2 + 32;
        KeEnterCriticalRegion();
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( ThreadWin32Thread )
          v1 = *ThreadWin32Thread;
        *(_QWORD *)(Pool2 + 16) = v2;
        *(_QWORD *)(Pool2 + 24) = FreeThreadBufferWithTag;
        if ( v1 )
        {
          v8 = *(_QWORD *)(v1 + 88);
          v9 = (__int64 *)(v1 + 88);
          if ( *(__int64 **)(v8 + 8) != v9 )
            __fastfail(3u);
          *(_QWORD *)Pool2 = v8;
          *(_QWORD *)(Pool2 + 8) = v9;
          *(_QWORD *)(v8 + 8) = Pool2;
          *v9 = Pool2;
        }
        else
        {
          *(_QWORD *)(Pool2 + 8) = Pool2;
          *(_QWORD *)Pool2 = Pool2;
        }
        KeLeaveCriticalRegion();
      }
      return v2;
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
  return v2;
}
