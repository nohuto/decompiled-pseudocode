/*
 * XREFs of RtlpSetHeapDebuggingInformation @ 0x1801010A0
 * Callers:
 *     RtlSetHeapDebuggingInformation @ 0x1800FF15C (RtlSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlpActivateLowFragmentationHeap @ 0x18004997C (RtlpActivateLowFragmentationHeap.c)
 *     RtlpCallInterceptRoutine @ 0x1800B085E (RtlpCallInterceptRoutine.c)
 *     RtlpGetHeapInterceptorIndex @ 0x1801166E8 (RtlpGetHeapInterceptorIndex.c)
 *     RtlSetLFHDebuggingInformation @ 0x180119E8C (RtlSetLFHDebuggingInformation.c)
 */

__int64 __fastcall RtlpSetHeapDebuggingInformation(_DWORD *HeapHandle, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // ecx
  __int64 (__fastcall *v6)(); // rcx
  __int64 *v7; // rsi
  __int64 v8; // rcx

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
    if ( (v7 = (__int64 *)(HeapHandle + 102), *((_BYTE *)HeapHandle + 418) == 2) && (v8 = *v7) != 0
      || (RtlpActivateLowFragmentationHeap((PRTL_CRITICAL_SECTION *)HeapHandle), *((_BYTE *)HeapHandle + 418) == 2)
      && (v8 = *v7) != 0 )
    {
      RtlSetLFHDebuggingInformation(v8, a2);
    }
  }
  return 0LL;
}
