/*
 * XREFs of RtlpTpWaitRundown @ 0x18004FB6C
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18004C870 (RtlDeregisterWaitEx.c)
 *     RtlpTpWaitFinalizationCallback @ 0x1800501A0 (RtlpTpWaitFinalizationCallback.c)
 * Callees:
 *     ZwSetEvent @ 0x1800A1070 (ZwSetEvent.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
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
