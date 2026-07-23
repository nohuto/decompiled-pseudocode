/*
 * XREFs of HalAllocateAdapterChannel @ 0x140456840
 * Callers:
 *     sub_140221330 @ 0x140221330 (sub_140221330.c)
 *     sub_140458150 @ 0x140458150 (sub_140458150.c)
 * Callees:
 *     sub_14023A8D0 @ 0x14023A8D0 (sub_14023A8D0.c)
 *     sub_140457ED8 @ 0x140457ED8 (sub_140457ED8.c)
 *     sub_140517630 @ 0x140517630 (sub_140517630.c)
 */

__int64 __fastcall HalAllocateAdapterChannel(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r10
  struct _DMA_ADAPTER *v6; // r11

  if ( (unsigned int)sub_14023A8D0(a1) == 2 )
    return sub_140457ED8(v6, (PKDEVICE_QUEUE_ENTRY)v5);
  *(_DWORD *)(v5 + 20) &= ~2u;
  return sub_140517630(v6, 0, a4);
}
