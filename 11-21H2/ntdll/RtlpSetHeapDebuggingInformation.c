/*
 * XREFs of RtlpSetHeapDebuggingInformation @ 0x1800FFFC0
 * Callers:
 *     RtlSetHeapDebuggingInformation @ 0x1800FE010 (RtlSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlpActivateLowFragmentationHeap @ 0x180053710 (RtlpActivateLowFragmentationHeap.c)
 *     RtlpCallInterceptRoutine @ 0x1800FEA3C (RtlpCallInterceptRoutine.c)
 *     RtlpGetHeapInterceptorIndex @ 0x180114E08 (RtlpGetHeapInterceptorIndex.c)
 *     RtlSetLFHDebuggingInformation @ 0x180118610 (RtlSetLFHDebuggingInformation.c)
 */

__int64 __fastcall RtlpSetHeapDebuggingInformation(_DWORD *HeapHandle, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // ecx
  __int64 (__fastcall *v6)(); // rcx
  __int64 v7; // rcx

  v2 = 6LL;
  if ( HeapHandle[4] != -571548178 )
    v2 = 36LL;
  if ( *(_DWORD *)(a2 + 16) )
  {
    v5 = HeapHandle[v2];
    if ( v5 )
      RtlpCallInterceptRoutine(v5, (__int64)HeapHandle, 0LL, 7u, 0LL);
    v6 = RtlpStackTraceDatabaseLogPrefix;
  }
  else
  {
    v6 = *(__int64 (__fastcall **)())a2;
    if ( !*(_QWORD *)a2 )
      goto LABEL_9;
  }
  HeapHandle[v2] = (unsigned __int16)RtlpGetHeapInterceptorIndex(v6);
LABEL_9:
  if ( HeapHandle[4] != -571548178 && *(_DWORD *)(a2 + 12) )
  {
    if ( *((_BYTE *)HeapHandle + 418) == 2 && (v7 = *((_QWORD *)HeapHandle + 51)) != 0
      || (RtlpActivateLowFragmentationHeap((PRTL_CRITICAL_SECTION *)HeapHandle), *((_BYTE *)HeapHandle + 418) == 2)
      && (v7 = *((_QWORD *)HeapHandle + 51)) != 0 )
    {
      RtlSetLFHDebuggingInformation(v7, a2);
    }
  }
  return 0LL;
}
