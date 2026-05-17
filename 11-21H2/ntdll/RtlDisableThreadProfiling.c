/*
 * XREFs of RtlDisableThreadProfiling @ 0x1800D6E60
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     NtSetInformationThread @ 0x1800A4210 (NtSetInformationThread.c)
 */

__int64 __fastcall RtlDisableThreadProfiling(__int64 a1)
{
  int v2; // ebx

  v2 = NtSetInformationThread();
  if ( v2 >= 0 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return (unsigned int)v2;
}
