/*
 * XREFs of KeQueryActiveProcessorAffinity2 @ 0x140393950
 * Callers:
 *     PpmCheckInitProcessors @ 0x14082E5C4 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x14082E84C (PpmRegisterPerfStates.c)
 *     KeConfigureHeteroProcessors @ 0x140972AE8 (KeConfigureHeteroProcessors.c)
 *     PpmInstallPlatformIdleStates @ 0x140982610 (PpmInstallPlatformIdleStates.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1409E43C4 (EtwpGetMicroarchitecturalPmcAffinity.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x140254680 (KiCopyAffinityEx.c)
 */

__int64 __fastcall KeQueryActiveProcessorAffinity2(__int64 a1)
{
  KiCopyAffinityEx(a1, *(_WORD *)(a1 + 2), (unsigned __int16 *)KeActiveProcessors);
  return (unsigned int)KeNumberProcessors_0;
}
