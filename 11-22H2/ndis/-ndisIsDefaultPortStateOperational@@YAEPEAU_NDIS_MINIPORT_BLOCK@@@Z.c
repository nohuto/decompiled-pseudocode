/*
 * XREFs of ?ndisIsDefaultPortStateOperational@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00213E4
 * Callers:
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00210F4 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 */

char __fastcall ndisIsDefaultPortStateOperational(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v2; // di

  v2 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x2Cu,
      (struct _GUID *)&WPP_740369199f403c504b96f54c3be14249_Traceguids,
      a1);
  if ( (a1->Flags & 0x10000) != 0
    && (a1->DefaultPortSendControlState != NdisPortControlStateControlled
     || ((a1->DefaultPortSendAuthorizationState - 1) & 0xFFFFFFFD) == 0)
    && (a1->DefaultPortRcvControlState != NdisPortControlStateControlled
     || ((a1->DefaultPortRcvAuthorizationState - 1) & 0xFFFFFFFD) == 0) )
  {
    v2 = 1;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x2Du,
      (struct _GUID *)&WPP_740369199f403c504b96f54c3be14249_Traceguids,
      a1);
  return v2;
}
