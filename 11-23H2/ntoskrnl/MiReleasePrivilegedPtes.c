/*
 * XREFs of MiReleasePrivilegedPtes @ 0x1406971C4
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140696090 (MiGetSystemAddressForImage.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiMapSystemImageWithLargePage @ 0x140A49B64 (MiMapSystemImageWithLargePage.c)
 *     MiUnmapLargeDriver @ 0x140A49F18 (MiUnmapLargeDriver.c)
 *     MiReleaseSystemImageVa @ 0x140B9A7DC (MiReleaseSystemImageVa.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x1403D70F0 (KeReservePrivilegedPages.c)
 */

__int64 MiReleasePrivilegedPtes()
{
  __int64 result; // rax

  if ( (MiFlags & 0x4000) != 0 )
    return KeReservePrivilegedPages();
  return result;
}
