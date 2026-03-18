/*
 * XREFs of KeQueryActiveProcessorAffinity2 @ 0x140393770
 * Callers:
 *     PpmCheckInitProcessors @ 0x14082E2C4 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x14082E54C (PpmRegisterPerfStates.c)
 *     KeConfigureHeteroProcessors @ 0x1409728E8 (KeConfigureHeteroProcessors.c)
 *     PpmInstallPlatformIdleStates @ 0x140982410 (PpmInstallPlatformIdleStates.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1409E4134 (EtwpGetMicroarchitecturalPmcAffinity.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x1402545C0 (KiCopyAffinityEx.c)
 */

__int64 __fastcall KeQueryActiveProcessorAffinity2(__int64 a1)
{
  KiCopyAffinityEx(a1, *(_WORD *)(a1 + 2), (unsigned __int16 *)KeActiveProcessors);
  return (unsigned int)KeNumberProcessors_0;
}
