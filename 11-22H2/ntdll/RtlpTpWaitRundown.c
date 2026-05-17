/*
 * XREFs of RtlpTpWaitRundown @ 0x18004FCCC
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18004C9D0 (RtlDeregisterWaitEx.c)
 *     RtlpTpWaitFinalizationCallback @ 0x180050300 (RtlpTpWaitFinalizationCallback.c)
 * Callees:
 *     ZwSetEvent @ 0x18009EFB0 (ZwSetEvent.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 */

__int64 __fastcall RtlpTpWaitRundown(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  if ( *(_QWORD *)a1 )
    NtClose(*(HANDLE *)a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
