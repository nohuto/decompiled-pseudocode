/*
 * XREFs of ?ndisDeQueueOpenOnMiniport@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0148D9C
 * Callers:
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0148B30 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01496A8 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001A8E8 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUnsetNdis6OpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0148EA4 (-ndisUnsetNdis6OpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisDeQueueOpenOnMiniport(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  _NDIS_OPEN_BLOCK *OpenQueue; // rax
  _NDIS_OPEN_BLOCK *v5; // rdx
  struct _NDIS_MINIPORT_BLOCK *v6; // rcx

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x11u,
      (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
      (char)a1,
      a2);
  OpenQueue = a2->OpenQueue;
  if ( OpenQueue == a1 )
  {
    a2->OpenQueue = a1->MiniportNextOpen;
LABEL_9:
    --a2->NumOpens;
  }
  else
  {
    while ( OpenQueue )
    {
      v5 = OpenQueue;
      OpenQueue = OpenQueue->MiniportNextOpen;
      if ( OpenQueue == a1 )
      {
        v5->MiniportNextOpen = v5->MiniportNextOpen->_NDIS_COMMON_OPEN_BLOCK::MiniportNextOpen;
        goto LABEL_9;
      }
    }
  }
  ndisUpdateCheckForLoopbackFlag(a2);
  ndisUnsetNdis6OpenHandlers(v6);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x12u,
      (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
      (char)a1,
      a2);
}
