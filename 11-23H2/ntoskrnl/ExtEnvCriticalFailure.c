/*
 * XREFs of ExtEnvCriticalFailure @ 0x14051F4D8
 * Callers:
 *     HalpVpptInitializePhysicalTimer @ 0x140509E44 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x14050A200 (HalpVpptUpdatePhysicalTimer.c)
 *     IvtFreeDomain @ 0x14052C6E0 (IvtFreeDomain.c)
 *     HsaFreeRemappingTableEntry @ 0x14052FE10 (HsaFreeRemappingTableEntry.c)
 *     HsaGetDeviceAperture @ 0x140530010 (HsaGetDeviceAperture.c)
 *     HsaUpdateRemappingTableEntry @ 0x140531270 (HsaUpdateRemappingTableEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
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
