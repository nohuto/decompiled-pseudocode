/*
 * XREFs of RtlpSetHeapDebuggingInformation @ 0x1800FFC90
 * Callers:
 *     RtlSetHeapDebuggingInformation @ 0x1800FDD4C (RtlSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlpActivateLowFragmentationHeap @ 0x180049ADC (RtlpActivateLowFragmentationHeap.c)
 *     RtlpCallInterceptRoutine @ 0x1800AE78E (RtlpCallInterceptRoutine.c)
 *     RtlpGetHeapInterceptorIndex @ 0x180115268 (RtlpGetHeapInterceptorIndex.c)
 *     RtlSetLFHDebuggingInformation @ 0x180118A0C (RtlSetLFHDebuggingInformation.c)
 */

__int64 __fastcall RtlpSetHeapDebuggingInformation(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // ecx
  __int64 (__fastcall *v6)(); // rcx
  __int64 *v7; // rsi
  __int64 v8; // rcx

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
    if ( (v7 = (__int64 *)(a1 + 408), *(_BYTE *)(a1 + 418) == 2) && (v8 = *v7) != 0
      || (RtlpActivateLowFragmentationHeap(a1), *(_BYTE *)(a1 + 418) == 2) && (v8 = *v7) != 0 )
    {
      RtlSetLFHDebuggingInformation(v8, a2);
    }
  }
  return 0LL;
}
