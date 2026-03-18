/*
 * XREFs of KeReservePrivilegedPages @ 0x1403D70F0
 * Callers:
 *     MiReservePrivilegedPtes @ 0x140696B28 (MiReservePrivilegedPtes.c)
 *     MiReleasePrivilegedPtes @ 0x1406971C4 (MiReleasePrivilegedPtes.c)
 *     MiFreeInitializationCode @ 0x140703AFC (MiFreeInitializationCode.c)
 *     MiUnlockDriverPages @ 0x140875B2C (MiUnlockDriverPages.c)
 * Callees:
 *     VslReserveProtectedPages @ 0x140885B64 (VslReserveProtectedPages.c)
 */

__int64 KeReservePrivilegedPages()
{
  return VslReserveProtectedPages();
}
