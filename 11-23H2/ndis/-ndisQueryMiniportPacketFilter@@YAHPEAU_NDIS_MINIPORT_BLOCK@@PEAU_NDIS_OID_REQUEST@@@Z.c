/*
 * XREFs of ?ndisQueryMiniportPacketFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00A50A0
 * Callers:
 *     ?ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C001F7B0 (-ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisQueryMiniportPacketFilter(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  unsigned int MiniportPacketFilter; // r9d
  unsigned int v3; // r8d
  _NDIS_MEDIUM MiniportMediaType; // eax

  MiniportPacketFilter = 0;
  v3 = 0;
  if ( (a2->RequestType & 0xFFFFFFFD) == 0 )
  {
    if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
    {
      MiniportMediaType = a1->MiniportMediaType;
      if ( MiniportMediaType )
      {
        if ( MiniportMediaType == NdisMediumNative802_11 )
          v3 = 259;
      }
      else
      {
        MiniportPacketFilter = a1->EthDB->MiniportPacketFilter;
      }
      *(_DWORD *)a2->DATA.QUERY_INFORMATION.InformationBuffer = MiniportPacketFilter;
      *(_QWORD *)&a2->DATA.METHOD_INFORMATION.OutputBufferLength = 4LL;
    }
    else
    {
      a2->DATA.QUERY_INFORMATION.BytesNeeded = 4;
      return (unsigned int)-1073676268;
    }
  }
  return v3;
}
