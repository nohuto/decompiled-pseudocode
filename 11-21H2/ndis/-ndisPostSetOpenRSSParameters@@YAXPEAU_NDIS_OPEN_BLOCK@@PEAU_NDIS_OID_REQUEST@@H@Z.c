/*
 * XREFs of ?ndisPostSetOpenRSSParameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0028794
 * Callers:
 *     ?ndisOidPostRSSParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0028170 (-ndisOidPostRSSParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000D340 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqqL @ 0x1C000D5C0 (WPP_RECORDER_SF_qqqL.c)
 *     ?ndisPostSetOpenRSSParametersHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@@Z @ 0x1C0027F1C (-ndisPostSetOpenRSSParametersHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDI.c)
 */

void __fastcall ndisPostSetOpenRSSParameters(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdi

  MiniportHandle = a1->MiniportHandle;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x8Bu,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  if ( (*(_DWORD *)&a2->NdisReserved[16] & 0x800) != 0 )
  {
    a2->DATA.QUERY_INFORMATION.InformationBuffer = MiniportHandle->SetInfoBuf;
    a2->DATA.QUERY_INFORMATION.InformationBufferLength = MiniportHandle->SetInfoBufLen;
    MiniportHandle->SetInfoBuf = 0LL;
    MiniportHandle->SetInfoBufLen = 0;
    *(_DWORD *)&a2->NdisReserved[16] &= ~0x800u;
  }
  if ( !a3 )
    ndisPostSetOpenRSSParametersHelper(
      MiniportHandle,
      a1,
      (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)a2->DATA.QUERY_INFORMATION.InformationBuffer);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      0xBu,
      0x8Cu,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      (char)a2,
      a3);
}
