/*
 * XREFs of ?ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00A2008
 * Callers:
 *     ?ndisOidPreOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A2620 (-ndisOidPreOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPreTaskOffloadSet@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A4B5C (-ndisPreTaskOffloadSet@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisTranslateOffloadSetsToTasks@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_ENCAPSULATION@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C00A70F8 (-ndisTranslateOffloadSetsToTasks@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_ENCAPSULATION@@.c)
 */

unsigned __int8 __fastcall ndisOidPreMiniportSetEncapsulation(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int *a3)
{
  int v6; // ebx
  _NDIS_MINIPORT_OFFLOAD *Offload; // rax
  KIRQL v8; // dl
  UINT MiniportTaskSize; // r9d
  unsigned __int8 v10; // dl
  struct _NDIS_OFFLOAD_ENCAPSULATION *InformationBuffer; // r10
  _NDIS_MINIPORT_OFFLOAD *v12; // rcx
  _NDIS_MINIPORT_OFFLOAD *v13; // rcx
  PVOID v14; // rax
  NDIS_OID Oid; // eax
  UINT InformationBufferLength; // eax
  unsigned __int8 result; // al
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  NewIrql = 0;
  v6 = -1073741823;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  Offload = a1->Offload;
  if ( !Offload || !Offload->SupportsOffload )
  {
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, NewIrql);
    v10 = 1;
    goto LABEL_27;
  }
  v8 = NewIrql;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v8);
  MiniportTaskSize = 28;
  v10 = 1;
  if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength >= 0x1C )
  {
    InformationBuffer = (struct _NDIS_OFFLOAD_ENCAPSULATION *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
    if ( InformationBuffer->Header.Type != 0xA8
      || !InformationBuffer->Header.Revision
      || InformationBuffer->Header.Size < 0x1Cu )
    {
      v6 = -1073676267;
      goto LABEL_27;
    }
    v12 = a1->Offload;
    *(_OWORD *)&v12->MiniportMergedEncapsulation.Header.Type = *(_OWORD *)&InformationBuffer->Header.Type;
    *(_QWORD *)&v12->MiniportMergedEncapsulation.IPv6.Enabled = *(_QWORD *)&InformationBuffer->IPv6.Enabled;
    v12->MiniportMergedEncapsulation.IPv6.HeaderSize = InformationBuffer->IPv6.HeaderSize;
    v13 = a1->Offload;
    if ( (*(_DWORD *)&a2->NdisReserved[16] & 0x80000) != 0
      || v13->MiniportMergedEncapsulation.IPv4.Enabled != v13->MiniportSetEncapsulation.IPv4.Enabled
      || v13->MiniportMergedEncapsulation.IPv6.Enabled != v13->MiniportSetEncapsulation.IPv6.Enabled )
    {
      if ( !v13->MiniportMergedEncapsulation.IPv4.Enabled )
      {
        *(_QWORD *)&v13->MiniportMergedEncapsulation.IPv4.Enabled = *(_QWORD *)&v13->MiniportSetEncapsulation.IPv4.Enabled;
        v13->MiniportMergedEncapsulation.IPv4.HeaderSize = v13->MiniportSetEncapsulation.IPv4.HeaderSize;
      }
      if ( !v13->MiniportMergedEncapsulation.IPv6.Enabled )
      {
        *(_QWORD *)&v13->MiniportMergedEncapsulation.IPv6.Enabled = *(_QWORD *)&v13->MiniportSetEncapsulation.IPv6.Enabled;
        v13->MiniportMergedEncapsulation.IPv6.HeaderSize = v13->MiniportSetEncapsulation.IPv6.HeaderSize;
      }
      if ( a1->MajorNdisVersion >= 6u )
      {
        a1->Offload->MiniportRequestBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
        Oid = a2->DATA.QUERY_INFORMATION.Oid;
        a2->DATA.QUERY_INFORMATION.InformationBuffer = &v13->MiniportMergedEncapsulation;
        a1->Offload->MiniportRequestOid = Oid;
        InformationBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
        a2->DATA.QUERY_INFORMATION.Oid = 16843018;
        a1->Offload->MiniportRequestBufferLength = InformationBufferLength;
      }
      else
      {
        if ( v13->MiniportMergedEncapsulation.IPv4.Enabled == 1
          && v13->MiniportMergedEncapsulation.IPv4.EncapsulationType != 2
          || v13->MiniportMergedEncapsulation.IPv6.Enabled == 1
          && v13->MiniportMergedEncapsulation.IPv6.EncapsulationType != 2 )
        {
          v6 = -1073741637;
          goto LABEL_27;
        }
        ndisTranslateOffloadSetsToTasks(a1, InformationBuffer, 0LL);
        a1->Offload->MiniportRequestOid = a2->DATA.QUERY_INFORMATION.Oid;
        v14 = a2->DATA.QUERY_INFORMATION.InformationBuffer;
        a2->DATA.QUERY_INFORMATION.Oid = -67042815;
        a1->Offload->MiniportRequestBuffer = v14;
        a2->DATA.QUERY_INFORMATION.InformationBuffer = a1->Offload->MiniportTask;
        a1->Offload->MiniportRequestBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
        MiniportTaskSize = a1->Offload->MiniportTaskSize;
      }
      v6 = 0;
      a2->DATA.QUERY_INFORMATION.InformationBufferLength = MiniportTaskSize;
      v10 = 0;
      goto LABEL_27;
    }
    v6 = 0;
    a2->DATA.QUERY_INFORMATION.BytesWritten = 28;
  }
  else
  {
    a2->DATA.QUERY_INFORMATION.BytesNeeded = 28;
    v6 = -1073676268;
  }
LABEL_27:
  result = v10;
  *a3 = v6;
  return result;
}
