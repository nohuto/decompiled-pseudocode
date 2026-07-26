/*
 * XREFs of ndisRegisterScatterGatherDmaForMiniport @ 0x1C00C8C50
 * Callers:
 *     NdisMRegisterScatterGatherDma @ 0x1C00C9880 (NdisMRegisterScatterGatherDma.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@Z @ 0x1C00C8630 (-ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@.c)
 */

__int64 __fastcall ndisRegisterScatterGatherDmaForMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        _NDIS_SG_DMA_BLOCK **a3)
{
  _DEVICE_OBJECT *PhysicalDeviceObject; // rbp
  char v7; // si
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // esi
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rdx
  __int64 v13; // [rsp+30h] [rbp-28h]

  PhysicalDeviceObject = a1->PhysicalDeviceObject;
  v7 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x18u,
      (struct _GUID *)&WPP_0ce672c581b5354e1037f225da7b2621_Traceguids,
      (char)a1,
      a2);
  v8 = 2;
  if ( (a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x32u)
    && (*(_BYTE *)(a2 + 4) & 2) != 0 )
  {
    v8 = 3;
  }
  if ( *(_BYTE *)(a2 + 1) >= 2u )
  {
    v7 = (*(_DWORD *)(a2 + 4) & 4) != 0;
    if ( *(_QWORD *)(a2 + 40) )
      PhysicalDeviceObject = *(_DEVICE_OBJECT **)(a2 + 40);
  }
  v9 = ndisMInitializeScatterGatherDmaInternal(
         a1,
         PhysicalDeviceObject,
         *(_BYTE *)(a2 + 4) & 1,
         v7,
         v8,
         *(_DWORD *)(a2 + 8));
  v10 = v9;
  if ( !v9 )
  {
    a1->Flags &= ~0x40u;
    MiniportSGDmaBlock = a1->MiniportSGDmaBlock;
    MiniportSGDmaBlock->ProcessSGListHandler = *(void (__fastcall **)(_DEVICE_OBJECT *, void *, _SCATTER_GATHER_LIST *, void *))(a2 + 16);
    MiniportSGDmaBlock->SharedMemAllocateCompleteHandler = *(void (__fastcall **)(void *, void *, _LARGE_INTEGER *, unsigned int, void *))(a2 + 24);
    MiniportSGDmaBlock->Flags = *(_DWORD *)(a2 + 4);
    *a3 = MiniportSGDmaBlock;
    *(_DWORD *)(a2 + 32) = MiniportSGDmaBlock->ScatterGatherListSize;
    a1->Flags |= 0x200u;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v13) = v9;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Au,
      (struct _GUID *)&WPP_0ce672c581b5354e1037f225da7b2621_Traceguids,
      (char)a1,
      v13);
  }
  return v10;
}
