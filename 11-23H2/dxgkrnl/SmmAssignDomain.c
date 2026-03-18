/*
 * XREFs of SmmAssignDomain @ 0x1C006E9C4
 * Callers:
 *     SmmIommuSwitchToGpuVaIoMmu @ 0x1C03D5A00 (SmmIommuSwitchToGpuVaIoMmu.c)
 *     ?SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C03D5C28 (-SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmIommuSwitchToTranslation @ 0x1C03D5CE4 (SmmIommuSwitchToTranslation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmmAssignDomain(__int64 a1, __int64 a2, int a3)
{
  KIRQL v6; // al

  ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  *(_QWORD *)(a1 + 112) = a2;
  *(_DWORD *)(a1 + 104) = a3;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v6);
  return ExReleasePushLockExclusiveEx(a1 + 80, 0LL);
}
