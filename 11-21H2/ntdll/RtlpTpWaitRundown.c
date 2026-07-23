/*
 * XREFs of RtlpTpWaitRundown @ 0x180070BD4
 * Callers:
 *     RtlpTpWaitFinalizationCallback @ 0x18006FB60 (RtlpTpWaitFinalizationCallback.c)
 *     RtlDeregisterWaitEx @ 0x180070010 (RtlDeregisterWaitEx.c)
 * Callees:
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 */

LOGICAL __fastcall RtlpTpWaitRundown(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 80);
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  if ( *(_QWORD *)a1 )
    NtClose(*(HANDLE *)a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
}
