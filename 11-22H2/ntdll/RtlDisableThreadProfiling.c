/*
 * XREFs of RtlDisableThreadProfiling @ 0x1800D6ED0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     NtSetInformationThread @ 0x18009EF90 (NtSetInformationThread.c)
 */

__int64 __fastcall RtlDisableThreadProfiling(__int64 a1)
{
  int v2; // ebx

  v2 = NtSetInformationThread();
  if ( v2 >= 0 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return (unsigned int)v2;
}
