/*
 * XREFs of ?ndisDeQueueOpenOnProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C013C6EC
 * Callers:
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013C370 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C013CF90 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 */

void __fastcall ndisDeQueueOpenOnProtocol(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_PROTOCOL_BLOCK *a2)
{
  KIRQL v4; // al
  _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  _NDIS_OPEN_BLOCK *v6; // r8

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x2Eu,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      (char)a1,
      a2);
  v4 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
  OpenQueue = a2->OpenQueue;
  if ( a1 == OpenQueue )
  {
    a2->OpenQueue = a1->ProtocolNextOpen;
  }
  else
  {
    while ( OpenQueue )
    {
      v6 = OpenQueue;
      OpenQueue = OpenQueue->ProtocolNextOpen;
      if ( a1 == OpenQueue )
      {
        v6->ProtocolNextOpen = v6->ProtocolNextOpen->_NDIS_COMMON_OPEN_BLOCK::ProtocolNextOpen;
        break;
      }
    }
  }
  KeReleaseSpinLock(&a2->Ref.SpinLock, v4);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x2Fu,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      (char)a1,
      a2);
}
