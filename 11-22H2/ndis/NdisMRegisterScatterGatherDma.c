/*
 * XREFs of NdisMRegisterScatterGatherDma @ 0x1C00CE530
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qdq @ 0x1C001F770 (WPP_RECORDER_SF_qdq_ea_1C001F770.c)
 *     ndisRegisterScatterGatherDmaForMiniport @ 0x1C00CD920 (ndisRegisterScatterGatherDmaForMiniport.c)
 *     ndisValidateSGDmaDescription @ 0x1C00CDA6C (ndisValidateSGDmaDescription.c)
 *     WPP_RECORDER_SF_qDDD @ 0x1C00CE7D0 (WPP_RECORDER_SF_qDDD_ea_1C00CE7D0.c)
 *     ndisRegisterScatterGatherDmaForGenericObject @ 0x1C0140DB8 (ndisRegisterScatterGatherDmaForGenericObject.c)
 */

NDIS_STATUS __stdcall NdisMRegisterScatterGatherDma(
        NDIS_HANDLE MiniportAdapterHandle,
        PNDIS_SG_DMA_DESCRIPTION DmaDescription,
        PNDIS_HANDLE NdisMiniportDmaHandle)
{
  int v6; // edx
  NDIS_STATUS v7; // ebx
  NDIS_STATUS v8; // eax

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (_DWORD)DmaDescription,
      (_DWORD)NdisMiniportDmaHandle,
      DmaDescription->Header.Revision);
  *NdisMiniportDmaHandle = 0LL;
  v7 = ndisValidateSGDmaDescription(MiniportAdapterHandle, (ULONG_PTR)DmaDescription);
  if ( !v7 )
  {
    if ( *(_BYTE *)MiniportAdapterHandle == 1 )
    {
      v8 = ndisRegisterScatterGatherDmaForGenericObject(MiniportAdapterHandle, DmaDescription, NdisMiniportDmaHandle);
    }
    else
    {
      if ( *(_BYTE *)MiniportAdapterHandle != 17 )
      {
        v7 = -1073741811;
        goto LABEL_10;
      }
      v8 = ndisRegisterScatterGatherDmaForMiniport(
             (struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle,
             (__int64)DmaDescription,
             (_NDIS_SG_DMA_BLOCK **)NdisMiniportDmaHandle);
    }
    v7 = v8;
  }
LABEL_10:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      1u,
      0x2Cu,
      (struct _GUID *)&WPP_9631851058cb35c6ce0e43959fab5e67_Traceguids,
      (char)MiniportAdapterHandle,
      v7,
      *NdisMiniportDmaHandle);
  return v7;
}
