/*
 * XREFs of ?ndisUpdateMiniportPortStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0081454
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001F928 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     ?ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0080564 (-ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

__int64 __fastcall ndisUpdateMiniportPortStates(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  unsigned int StatusBufferSize; // r14d
  void *StatusBuffer; // rbx
  unsigned int v5; // esi
  unsigned int PortNumber; // ebp
  struct _NDIS_PORT_BLOCK *PortByPortNumber; // rax

  StatusBufferSize = a2->StatusBufferSize;
  StatusBuffer = a2->StatusBuffer;
  v5 = -1073741811;
  PortNumber = a2->PortNumber;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x2Au,
      (struct _GUID *)&WPP_740369199f403c504b96f54c3be14249_Traceguids,
      a1);
  if ( StatusBuffer
    && StatusBufferSize >= 0x30
    && *((_BYTE *)StatusBuffer + 1)
    && *(_BYTE *)StatusBuffer == 0x80
    && *((_WORD *)StatusBuffer + 1) >= 0x30u )
  {
    if ( PortNumber )
    {
      PortByPortNumber = ndisFindPortByPortNumber(a1, PortNumber);
      if ( PortByPortNumber && PortByPortNumber->PortPnPState == NdisPortPnPStateActivated )
      {
        v5 = 0;
        PortByPortNumber->PortCharacteristics.MediaConnectState = *((_DWORD *)StatusBuffer + 1);
        PortByPortNumber->PortCharacteristics.XmitLinkSpeed = *((_QWORD *)StatusBuffer + 1);
        PortByPortNumber->PortCharacteristics.RcvLinkSpeed = *((_QWORD *)StatusBuffer + 2);
        PortByPortNumber->PortCharacteristics.Direction = *((_DWORD *)StatusBuffer + 6);
        PortByPortNumber->PortCharacteristics.SendControlState = *((_DWORD *)StatusBuffer + 7);
        PortByPortNumber->PortCharacteristics.RcvControlState = *((_DWORD *)StatusBuffer + 8);
        PortByPortNumber->PortCharacteristics.SendAuthorizationState = *((_DWORD *)StatusBuffer + 9);
        PortByPortNumber->PortCharacteristics.RcvAuthorizationState = *((_DWORD *)StatusBuffer + 10);
      }
    }
    else
    {
      v5 = 0;
      if ( (a1->PnPFlags & 0x80u) != 0 )
      {
        a1->DefaultPortSendControlState = *((_DWORD *)StatusBuffer + 7);
        a1->DefaultPortRcvControlState = *((_DWORD *)StatusBuffer + 8);
        a1->DefaultPortSendAuthorizationState = *((_DWORD *)StatusBuffer + 9);
        a1->DefaultPortRcvAuthorizationState = *((_DWORD *)StatusBuffer + 10);
      }
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x2Bu,
      (struct _GUID *)&WPP_740369199f403c504b96f54c3be14249_Traceguids,
      (char)a1,
      v5);
  return v5;
}
