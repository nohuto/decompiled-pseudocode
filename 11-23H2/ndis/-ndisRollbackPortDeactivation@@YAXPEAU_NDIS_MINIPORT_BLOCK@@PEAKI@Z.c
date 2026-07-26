/*
 * XREFs of ?ndisRollbackPortDeactivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAKI@Z @ 0x1C008138C
 * Callers:
 *     ?ndisPnPPortDeactivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0080C6C (-ndisPnPPortDeactivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0080584 (-ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisRollbackPortDeactivation(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int *a2, int a3)
{
  unsigned int *v6; // r10
  struct _NDIS_PORT_BLOCK *PortByPortNumber; // rax
  __int64 v8; // r10
  __int64 v9; // r11

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x28u,
      (struct _GUID *)&WPP_740369199f403c504b96f54c3be14249_Traceguids,
      (char)a1,
      a2);
  if ( a3 )
  {
    v6 = a2;
    do
    {
      PortByPortNumber = ndisFindPortByPortNumber(a1, *v6);
      if ( PortByPortNumber )
      {
        PortByPortNumber->PortPnPState = PortByPortNumber->PrevPortPnPState;
        ++a1->NumberOfActivePorts;
      }
      v6 = (unsigned int *)(v8 + 4);
    }
    while ( v9 != 1 );
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x29u,
      (struct _GUID *)&WPP_740369199f403c504b96f54c3be14249_Traceguids,
      (char)a1,
      a2);
}
