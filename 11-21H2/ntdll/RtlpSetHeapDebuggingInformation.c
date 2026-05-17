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

__int64 __fastcall RtlpSetHeapDebuggingInformation(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // ecx
  __int64 (__fastcall *v6)(); // rcx
  __int64 v7; // rcx

  v2 = 24LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v2 = 144LL;
  if ( *(_DWORD *)(a2 + 16) )
  {
    v5 = *(_DWORD *)(v2 + a1);
    if ( v5 )
      RtlpCallInterceptRoutine(v5, a1, 0LL, 7u, 0LL);
    v6 = RtlpStackTraceDatabaseLogPrefix;
  }
  else
  {
    v6 = *(__int64 (__fastcall **)())a2;
    if ( !*(_QWORD *)a2 )
      goto LABEL_9;
  }
  *(_DWORD *)(v2 + a1) = (unsigned __int16)RtlpGetHeapInterceptorIndex(v6);
LABEL_9:
  if ( *(_DWORD *)(a1 + 16) != -571548178 && *(_DWORD *)(a2 + 12) )
  {
    if ( *(_BYTE *)(a1 + 418) == 2 && (v7 = *(_QWORD *)(a1 + 408)) != 0
      || (RtlpActivateLowFragmentationHeap(a1), *(_BYTE *)(a1 + 418) == 2) && (v7 = *(_QWORD *)(a1 + 408)) != 0 )
    {
      RtlSetLFHDebuggingInformation(v7, a2);
    }
  }
  return 0LL;
}
