/*
 * XREFs of ?ndisQueryOpenRSSParameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009F060
 * Callers:
 *     ?ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0028030 (-ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     ?ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z @ 0x1C0027EA8 (-ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 */

__int64 __fastcall ndisQueryOpenRSSParameters(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbx
  unsigned int v3; // edi
  KIRQL v6; // dl
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rcx
  KIRQL v8; // dl
  size_t v9; // rbp
  KIRQL v10; // dl
  __int64 v12; // [rsp+30h] [rbp-48h]
  KIRQL NewIrql; // [rsp+80h] [rbp+8h] BYREF
  size_t Size; // [rsp+90h] [rbp+18h] BYREF

  MiniportHandle = a1->MiniportHandle;
  v3 = 0;
  LODWORD(Size) = 0;
  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x71u,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)MiniportHandle,
      a2);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(MiniportHandle, &NewIrql);
  if ( MiniportHandle->RecvScaleCapabilities.Header.Size )
  {
    NdisRSSParameters = a1->NdisRSSParameters;
    if ( !NdisRSSParameters || (v3 = ndisCalculateRssParametersSize(NdisRSSParameters, (unsigned int *)&Size)) != 0 )
    {
      v8 = NewIrql;
      a2->DATA.QUERY_INFORMATION.BytesWritten = 0;
      MiniportHandle->MiniportThread = 0LL;
      KeReleaseSpinLock(&MiniportHandle->Lock, v8);
    }
    else
    {
      v9 = (unsigned int)Size;
      v3 = 0;
      if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength < (unsigned int)Size )
      {
        a2->DATA.QUERY_INFORMATION.BytesNeeded = Size;
        v3 = -1073676268;
      }
      if ( !v3 )
      {
        memmove(a2->DATA.QUERY_INFORMATION.InformationBuffer, a1->NdisRSSParameters, v9);
        a2->DATA.QUERY_INFORMATION.BytesWritten = v9;
      }
      v10 = NewIrql;
      MiniportHandle->MiniportThread = 0LL;
      KeReleaseSpinLock(&MiniportHandle->Lock, v10);
    }
  }
  else
  {
    v6 = NewIrql;
    MiniportHandle->MiniportThread = 0LL;
    KeReleaseSpinLock(&MiniportHandle->Lock, v6);
    v3 = -1073741637;
    a2->DATA.QUERY_INFORMATION.BytesWritten = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v12) = v3;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x72u,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)MiniportHandle,
      v12);
  }
  return v3;
}
