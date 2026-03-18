/*
 * XREFs of KeReservePrivilegedPages @ 0x1403D6A90
 * Callers:
 *     MiReservePrivilegedPtes @ 0x140696B28 (MiReservePrivilegedPtes.c)
 *     MiReleasePrivilegedPtes @ 0x1406971C4 (MiReleasePrivilegedPtes.c)
 *     MiFreeInitializationCode @ 0x140703BAC (MiFreeInitializationCode.c)
 *     MiUnlockDriverPages @ 0x140875FFC (MiUnlockDriverPages.c)
 * Callees:
 *     VslReserveProtectedPages @ 0x140886034 (VslReserveProtectedPages.c)
 */

__int64 KeReservePrivilegedPages()
{
  return VslReserveProtectedPages();
}
