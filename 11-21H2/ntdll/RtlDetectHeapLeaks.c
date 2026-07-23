/*
 * XREFs of RtlDetectHeapLeaks @ 0x180054B20
 * Callers:
 *     LdrShutdownProcess @ 0x180054420 (LdrShutdownProcess.c)
 * Callees:
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     RtlCreateHeap @ 0x18002F7E0 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1800570A0 (RtlDestroyHeap.c)
 *     RtlpInitializeLeakDetection @ 0x1801037F4 (RtlpInitializeLeakDetection.c)
 *     RtlpReadProcessHeaps @ 0x180103BD0 (RtlpReadProcessHeaps.c)
 *     RtlpScanProcessVirtualMemory @ 0x180103EA4 (RtlpScanProcessVirtualMemory.c)
 */

void RtlDetectHeapLeaks(void)
{
  struct _PEB *v0; // rbx
  struct _PEB *v1; // rax

  if ( (NtCurrentPeb()->NtGlobalFlag & 0x100) == 0
    && (NtCurrentPeb()->NtGlobalFlag & 0x2000000) == 0
    && (*((_QWORD *)&xmmword_180178E40 + 1) || (RtlpShutdownProcessFlags & 3) != 0) )
  {
    RtlpLeaksCount = 0;
    RtlpLeakHeap = RtlCreateHeap(3u, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( RtlpLeakHeap )
    {
      v0 = NtCurrentPeb();
      if ( v0->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Inspecting leaks at process shutdown ...\n");
      if ( (unsigned __int8)RtlpInitializeLeakDetection() )
      {
        RtlpLeakHeapAddress = (__int64)v0->ProcessHeaps[v0->NumberOfHeaps - 1];
        RtlpReadProcessHeaps();
        RtlpScanProcessVirtualMemory();
        RtlDestroyHeap(RtlpLeakHeap);
        RtlpLeakHeap = 0LL;
        v1 = NtCurrentPeb();
        if ( RtlpLeaksCount )
        {
          if ( v1->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("%ld leaks detected.\n", RtlpLeaksCount);
          if ( (RtlpShutdownProcessFlags & 2) != 0 )
            __debugbreak();
        }
        else
        {
          if ( v1->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("No leaks detected.\n");
        }
      }
      else
      {
        RtlDestroyHeap(RtlpLeakHeap);
      }
    }
  }
}
