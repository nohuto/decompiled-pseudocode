/*
 * XREFs of PfSnInitializePrefetcher @ 0x140B618C0
 * Callers:
 *     PfInitializeSuperfetch @ 0x140B617C0 (PfInitializeSuperfetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     KiSetTimerEx @ 0x1402528E0 (KiSetTimerEx.c)
 *     PfpCreateEvent @ 0x140846FB4 (PfpCreateEvent.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x1408471D8 (PfSnPrefetchCacheCtxInitialize.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 PfSnInitializePrefetcher()
{
  __int64 Pool2; // rax
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  FastMutex.Count = 1;
  qword_140C6A610 = 0LL;
  qword_140C6A608 = (__int64)&PfSnGlobals;
  PfSnGlobals = (__int64)&PfSnGlobals;
  FastMutex.Owner = 0LL;
  qword_140C6A620 = &qword_140C6A618;
  qword_140C6A618 = &qword_140C6A618;
  FastMutex.Event.Header.WaitListHead.Blink = &FastMutex.Event.Header.WaitListHead;
  FastMutex.Event.Header.WaitListHead.Flink = &FastMutex.Event.Header.WaitListHead;
  DestinationString = 0LL;
  FastMutex.Contention = 0;
  LOWORD(FastMutex.Event.Header.Lock) = 1;
  FastMutex.Event.Header.Size = 6;
  FastMutex.Event.Header.SignalState = 0;
  dword_140C6A664 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\PrefetchTracesReady");
  PfpCreateEvent(&DestinationString, SynchronizationEvent, (PVOID *)&qword_140C6A668);
  PfSnPrefetchCacheCtxInitialize((__int64)&unk_140C6A678);
  qword_140C6A708 = 0LL;
  Pool2 = ExAllocatePool2(64LL, 0xA0uLL, 0x66506343u);
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = 0LL;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 8;
    *(_QWORD *)(Pool2 + 8) = Pool2 + 8;
    *(_BYTE *)Pool2 = 8;
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_DWORD *)(Pool2 + 60) = 0;
    *(_WORD *)(Pool2 + 56) = 0;
    *(_QWORD *)(Pool2 + 88) = PfSnTracingStateDpcRoutine;
    *(_DWORD *)(Pool2 + 64) = 275;
    *(_QWORD *)(Pool2 + 96) = Pool2;
    *(_QWORD *)(Pool2 + 120) = 0LL;
    *(_QWORD *)(Pool2 + 80) = 0LL;
    *(_QWORD *)(Pool2 + 144) = PfSnTracingStateExWorkerRoutine;
    *(_QWORD *)(Pool2 + 152) = Pool2;
    *(_QWORD *)(Pool2 + 128) = 0LL;
    KiSetTimerEx(Pool2, -6000000000LL, 0, 0, Pool2 + 64);
  }
  Parent.Root = 0LL;
  *(_OWORD *)&Parent.0 = 0LL;
  result = 0LL;
  Tree.Min = 0LL;
  qword_140C6A738 = 0LL;
  return result;
}
