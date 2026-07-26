/*
 * XREFs of ?ndisQueryFilterOffloadCaps@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00A4ED8
 * Callers:
 *     ?ndisOidPreOffloadCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A24D0 (-ndisOidPreOffloadCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisCopyNdisOffload@@YAXPEAU_NDIS_OFFLOAD@@0IPEAIE@Z @ 0x1C0090BD8 (-ndisCopyNdisOffload@@YAXPEAU_NDIS_OFFLOAD@@0IPEAIE@Z.c)
 */

__int64 __fastcall ndisQueryFilterOffloadCaps(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rsi
  _NDIS_MINIPORT_OFFLOAD *Offload; // rdx
  UINT InformationBufferLength; // r8d
  unsigned int v6; // ebx
  KIRQL NewIrql; // [rsp+40h] [rbp+8h] BYREF

  Miniport = a1->Miniport;
  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(Miniport, &NewIrql);
  Offload = Miniport->Offload;
  if ( Offload && Offload->SupportsTopOffload )
  {
    InformationBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
    v6 = 0;
    if ( InformationBufferLength >= 0x70 )
    {
      ndisCopyNdisOffload(
        (struct _NDIS_OFFLOAD *)a2->DATA.QUERY_INFORMATION.InformationBuffer,
        &Offload->TopCapabilities,
        InformationBufferLength,
        &a2->DATA.QUERY_INFORMATION.BytesWritten,
        0);
    }
    else
    {
      a2->DATA.QUERY_INFORMATION.BytesNeeded = 112;
      v6 = -1073676268;
    }
  }
  else
  {
    v6 = -1073741637;
  }
  Miniport->MiniportThread = 0LL;
  KeReleaseSpinLock(&Miniport->Lock, NewIrql);
  return v6;
}
