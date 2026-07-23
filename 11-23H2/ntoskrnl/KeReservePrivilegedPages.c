/*
 * XREFs of KeReservePrivilegedPages @ 0x1403D72D0
 * Callers:
 *     MiReservePrivilegedPtes @ 0x140696B28 (MiReservePrivilegedPtes.c)
 *     MiReleasePrivilegedPtes @ 0x1406971C4 (MiReleasePrivilegedPtes.c)
 *     MiFreeInitializationCode @ 0x140703D0C (MiFreeInitializationCode.c)
 *     MiUnlockDriverPages @ 0x140875D6C (MiUnlockDriverPages.c)
 * Callees:
 *     VslReserveProtectedPages @ 0x140885DA4 (VslReserveProtectedPages.c)
 */

__int64 KeReservePrivilegedPages()
{
  return VslReserveProtectedPages();
}
