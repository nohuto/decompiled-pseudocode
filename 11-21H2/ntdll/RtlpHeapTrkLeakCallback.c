/*
 * XREFs of RtlpHeapTrkLeakCallback @ 0x18010B200
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     ZwMapViewOfSection @ 0x1800A4570 (ZwMapViewOfSection.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x18010AC5C (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlpHeapTrkDumpStacks @ 0x18010ADCC (RtlpHeapTrkDumpStacks.c)
 *     RtlpHeapTrkFindStack @ 0x18010AF20 (RtlpHeapTrkFindStack.c)
 *     RtlpHeapTrkReportResult @ 0x18010B400 (RtlpHeapTrkReportResult.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x18010B4F4 (RtlpHeapTrkSyncWithDiagnoser.c)
 */

__int64 __fastcall RtlpHeapTrkLeakCallback(__int64 a1, __int64 a2, unsigned __int64 a3, const void *a4)
{
  __int64 Stack; // rbx
  ULONG_PTR v8; // [rsp+50h] [rbp-18h] BYREF
  LARGE_INTEGER v9; // [rsp+58h] [rbp-10h] BYREF
  const void *Src; // [rsp+80h] [rbp+18h] BYREF

  Src = (const void *)a3;
  v8 = 0x10000LL;
  v9.QuadPart = 0LL;
  if ( !byte_18017B6F0 )
  {
    if ( byte_180177ED9 )
    {
      byte_180177ED9 = 0;
      _InterlockedExchange(&dword_18017B6F4, 1);
      if ( ZwMapViewOfSection(
             SectionHandle,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &TrkContext,
             0LL,
             0LL,
             &v9,
             &v8,
             ViewShare,
             0,
             4u) < 0 )
        return 0LL;
      if ( !TrkContext )
        return 0LL;
      *((_DWORD *)TrkContext + 12) = NtCurrentTeb()->ClientId.UniqueProcess;
      if ( !RtlpHeapTrkDumpStacks() )
        return 0LL;
      a3 = (unsigned __int64)Src;
    }
    if ( TrkContext )
    {
      if ( !a2 )
      {
        RtlpHeapTrkDumpOutstandingAllocs();
        if ( *((_DWORD *)TrkContext + 15) )
        {
          if ( !(unsigned __int8)RtlpHeapTrkSyncWithDiagnoser() )
            return 0LL;
          *((_DWORD *)TrkContext + 15) = 0;
          dword_180177EDC = 0;
        }
        RtlpHeapTrkSyncWithDiagnoser();
        return 0LL;
      }
      Stack = RtlpHeapTrkFindStack((a3 >> 3) | 0xE000000000000000uLL);
      if ( (unsigned __int8)RtlpHeapTrkReportResult(0x20uLL, &Src, 8uLL) && Stack )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint(
          " Leaked Block 0x%p size 0x%p (stack %p depth %u)\n",
          Src,
          a4,
          (const void *)(Stack + 24),
          *(unsigned __int16 *)(Stack + 16));
      }
    }
  }
  return 0LL;
}
