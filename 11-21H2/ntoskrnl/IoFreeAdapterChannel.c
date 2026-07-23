/*
 * XREFs of IoFreeAdapterChannel @ 0x140456A00
 * Callers:
 *     sub_140457ED8 @ 0x140457ED8 (sub_140457ED8.c)
 *     sub_1404584D6 @ 0x1404584D6 (sub_1404584D6.c)
 *     sub_140511600 @ 0x140511600 (sub_140511600.c)
 *     sub_1405116C0 @ 0x1405116C0 (sub_1405116C0.c)
 *     sub_1405157F0 @ 0x1405157F0 (sub_1405157F0.c)
 *     sub_140515FD0 @ 0x140515FD0 (sub_140515FD0.c)
 *     sub_140517830 @ 0x140517830 (sub_140517830.c)
 * Callees:
 *     sub_14023A8D0 @ 0x14023A8D0 (sub_14023A8D0.c)
 *     sub_1404585B4 @ 0x1404585B4 (sub_1404585B4.c)
 *     sub_1405127BC @ 0x1405127BC (sub_1405127BC.c)
 */

void __stdcall IoFreeAdapterChannel(PDMA_ADAPTER DmaAdapter)
{
  struct _DMA_ADAPTER *v1; // r8

  if ( (unsigned int)sub_14023A8D0((__int64)DmaAdapter) == 2 )
    sub_1404585B4(v1);
  else
    sub_1405127BC(v1);
}
