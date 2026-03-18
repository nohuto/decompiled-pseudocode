/*
 * XREFs of MiReservePrivilegedPtes @ 0x140761C34
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140761A2C (MiGetSystemAddressForImage.c)
 *     MiMapSystemImageWithLargePage @ 0x14098325C (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x1403A147C (KeReservePrivilegedPages.c)
 */

__int64 MiReservePrivilegedPtes()
{
  if ( (MiFlags & 0x4000) != 0 )
    return KeReservePrivilegedPages();
  else
    return 0LL;
}
