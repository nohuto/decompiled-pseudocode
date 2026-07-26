/*
 * XREFs of NdisMDeregisterScatterGatherDma @ 0x1C00CE410
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x1C005D9B4 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 */

void __stdcall NdisMDeregisterScatterGatherDma(NDIS_HANDLE NdisMiniportDmaHandle)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)NdisMiniportDmaHandle + 1);
  if ( v1 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x2Du,
        (struct _GUID *)&WPP_9631851058cb35c6ce0e43959fab5e67_Traceguids,
        v1);
    ndisDereferenceDmaAdapter((struct _NDIS_SG_DMA_BLOCK *)NdisMiniportDmaHandle);
    *(_DWORD *)(v1 + 120) &= ~0x200u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x2Eu,
        (struct _GUID *)&WPP_9631851058cb35c6ce0e43959fab5e67_Traceguids,
        v1);
  }
  else
  {
    if ( !*((_QWORD *)NdisMiniportDmaHandle + 2) )
      NT_ASSERT("NdisMDeregisterScatterGatherDma: Unexpected code path, likely an invalid handle was given by a driver");
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x2Fu,
        (struct _GUID *)&WPP_9631851058cb35c6ce0e43959fab5e67_Traceguids,
        *((_QWORD *)NdisMiniportDmaHandle + 2));
    ndisDereferenceDmaAdapter((struct _NDIS_SG_DMA_BLOCK *)NdisMiniportDmaHandle);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x30u,
        (struct _GUID *)&WPP_9631851058cb35c6ce0e43959fab5e67_Traceguids);
  }
}
