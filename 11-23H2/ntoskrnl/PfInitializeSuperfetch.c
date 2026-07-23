/*
 * XREFs of PfInitializeSuperfetch @ 0x140B617C0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 * Callees:
 *     ExRundownCompleted @ 0x140208880 (ExRundownCompleted.c)
 *     ExInitializePushLock @ 0x140223590 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x14030A5D0 (ExWaitForRundownProtectionRelease.c)
 *     ZwNotifyChangeKey @ 0x14041D510 (ZwNotifyChangeKey.c)
 *     PfpScenCtxStart @ 0x140846560 (PfpScenCtxStart.c)
 *     PfpScenCtxInitialize @ 0x1408471A4 (PfpScenCtxInitialize.c)
 *     PfTInitialize @ 0x14084722C (PfTInitialize.c)
 *     PfSnInitializePrefetcher @ 0x140B618C0 (PfSnInitializePrefetcher.c)
 *     PfpParametersInitialize @ 0x140B61A40 (PfpParametersInitialize.c)
 *     PfpRpInitialize @ 0x140B61BE0 (PfpRpInitialize.c)
 */

__int64 PfInitializeSuperfetch()
{
  PfpParametersInitialize(&PfGlobals);
  PfpRpInitialize(&unk_140C65028);
  PfpScenCtxInitialize((__int64)&qword_140C64FB0);
  PfpScenCtxStart((__int64)&qword_140C64FB0);
  ExInitializePushLock(&stru_140C650D0);
  ExWaitForRundownProtectionRelease(&stru_140C650D0);
  ExRundownCompleted(&stru_140C650D0);
  qword_140C650D8 = 0LL;
  qword_140C650E0 = 0LL;
  dword_140C650F8 |= 1u;
  qword_140C650F0 = (__int64)&qword_140C650E8;
  qword_140C650E8 = (__int64)&qword_140C650E8;
  PfSnInitializePrefetcher();
  PfTInitialize(&PfTGlobals, (unsigned __int64 *)&PfKernelGlobals, 0);
  if ( KeyHandle )
    ZwNotifyChangeKey(KeyHandle, 0LL, ApcRoutine, (PVOID)1, &IoStatusBlock, 0x1000000Fu, 0, &unk_140C64DD0, 4u, 1u);
  return 0LL;
}
