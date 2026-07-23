/*
 * XREFs of MmMapViewOfSectionEx @ 0x14032A5EC
 * Callers:
 *     MiMapSecurePureReserveView @ 0x1407A31A0 (MiMapSecurePureReserveView.c)
 *     MiMapProcessExecutable @ 0x1407A3280 (MiMapProcessExecutable.c)
 *     PspMapSystemDll @ 0x1407A34D0 (PspMapSystemDll.c)
 *     MiMapImageForEnclaveUse @ 0x140A3E9F8 (MiMapImageForEnclaveUse.c)
 * Callees:
 *     MiMapViewOfSectionExCommon @ 0x1407A36E0 (MiMapViewOfSectionExCommon.c)
 */

__int64 __fastcall MmMapViewOfSectionEx(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        volatile void *a8,
        int a9,
        int a10,
        __int64 a11,
        __int64 a12,
        int a13)
{
  ULONGLONG ullMultiplicand; // [rsp+48h] [rbp-30h]

  LODWORD(ullMultiplicand) = a9;
  return MiMapViewOfSectionExCommon(a1, a2, 1, a3, a4, a5, a6, a7, a8, ullMultiplicand, a10, a11, 0, a13);
}
