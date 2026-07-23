/*
 * XREFs of ExtEnvCriticalFailure @ 0x14051FA28
 * Callers:
 *     HalpVpptInitializePhysicalTimer @ 0x14050A394 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x14050A750 (HalpVpptUpdatePhysicalTimer.c)
 *     IvtFreeDomain @ 0x14052CC30 (IvtFreeDomain.c)
 *     HsaFreeRemappingTableEntry @ 0x140530360 (HsaFreeRemappingTableEntry.c)
 *     HsaGetDeviceAperture @ 0x140530560 (HsaGetDeviceAperture.c)
 *     HsaUpdateRemappingTableEntry @ 0x1405317C0 (HsaUpdateRemappingTableEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn ExtEnvCriticalFailure(
        __int64 a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x5Cu, a2, a3, a4, BugCheckParameter4);
}
