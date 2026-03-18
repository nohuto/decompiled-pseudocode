/*
 * XREFs of KeReservePrivilegedPages @ 0x1403A147C
 * Callers:
 *     MiReleasePrivilegedPtes @ 0x1406EBA70 (MiReleasePrivilegedPtes.c)
 *     MiFreeInitializationCode @ 0x14075F23C (MiFreeInitializationCode.c)
 *     MiReservePrivilegedPtes @ 0x140761C34 (MiReservePrivilegedPtes.c)
 *     MiUnlockDriverPages @ 0x14080C400 (MiUnlockDriverPages.c)
 * Callees:
 *     VslReserveProtectedPages @ 0x14080C778 (VslReserveProtectedPages.c)
 */

__int64 KeReservePrivilegedPages()
{
  return VslReserveProtectedPages();
}
