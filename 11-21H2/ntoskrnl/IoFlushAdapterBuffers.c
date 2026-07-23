/*
 * XREFs of IoFlushAdapterBuffers @ 0x140393E00
 * Callers:
 *     sub_140230618 @ 0x140230618 (sub_140230618.c)
 * Callees:
 *     sub_14023A8D0 @ 0x14023A8D0 (sub_14023A8D0.c)
 *     sub_140393E40 @ 0x140393E40 (sub_140393E40.c)
 *     sub_140517BAC @ 0x140517BAC (sub_140517BAC.c)
 */

BOOLEAN __stdcall IoFlushAdapterBuffers(
        PDMA_ADAPTER DmaAdapter,
        PMDL Mdl,
        PVOID MapRegisterBase,
        PVOID CurrentVa,
        ULONG Length,
        BOOLEAN WriteToDevice)
{
  int v6; // r8d
  int v7; // r9d
  int v8; // r10d
  int v9; // r11d

  if ( (unsigned int)sub_14023A8D0((__int64)DmaAdapter) == 2 )
    return sub_140393E40(v8, v9, v6, v7, Length, WriteToDevice);
  else
    return sub_140517BAC(v8, v9, v6, v7, Length, WriteToDevice);
}
