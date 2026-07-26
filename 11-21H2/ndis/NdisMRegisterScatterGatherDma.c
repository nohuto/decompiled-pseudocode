/*
 * XREFs of NdisMRegisterScatterGatherDma @ 0x1C00C9880
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qdq @ 0x1C001EAF4 (WPP_RECORDER_SF_qdq_ea_1C001EAF4.c)
 *     ndisRegisterScatterGatherDmaForMiniport @ 0x1C00C8C50 (ndisRegisterScatterGatherDmaForMiniport.c)
 *     ndisValidateSGDmaDescription @ 0x1C00C8DAC (ndisValidateSGDmaDescription.c)
 *     WPP_RECORDER_SF_qDDD @ 0x1C00C9B20 (WPP_RECORDER_SF_qDDD_ea_1C00C9B20.c)
 *     ndisRegisterScatterGatherDmaForGenericObject @ 0x1C0134FD0 (ndisRegisterScatterGatherDmaForGenericObject.c)
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
      0x27u,
      (struct _GUID *)&WPP_0ce672c581b5354e1037f225da7b2621_Traceguids,
      (char)MiniportAdapterHandle,
      v7,
      *NdisMiniportDmaHandle);
  return v7;
}
