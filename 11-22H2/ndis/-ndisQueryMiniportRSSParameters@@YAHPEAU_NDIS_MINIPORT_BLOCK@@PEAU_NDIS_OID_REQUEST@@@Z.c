/*
 * XREFs of ?ndisQueryMiniportRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00A50E4
 * Callers:
 *     ?ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A3380 (-ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0029CD8 (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     ?ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z @ 0x1C009EE3C (-ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z.c)
 */

__int64 __fastcall ndisQueryMiniportRSSParameters(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  unsigned int v3; // edi
  KIRQL v5; // dl
  KIRQL v6; // dl
  size_t v7; // rbp
  KIRQL v8; // dl
  __int64 v10; // [rsp+30h] [rbp-38h]
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF
  size_t Size; // [rsp+80h] [rbp+18h] BYREF

  v3 = 0;
  LODWORD(Size) = 0;
  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x6Fu,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)a1,
      a2);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  if ( a1->RecvScaleCapabilities.Header.Size )
  {
    if ( !ndisIsRssEnabledForMiniport(a1)
      || (v3 = ndisCalculateRssParametersSize(a1->CombinedNdisRSSParameters, (unsigned int *)&Size)) != 0 )
    {
      v6 = NewIrql;
      a2->DATA.QUERY_INFORMATION.BytesWritten = 0;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v6);
    }
    else
    {
      v7 = (unsigned int)Size;
      v3 = 0;
      if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength < (unsigned int)Size )
      {
        a2->DATA.QUERY_INFORMATION.BytesNeeded = Size;
        v3 = -1073676268;
      }
      if ( !v3 )
      {
        memmove(a2->DATA.QUERY_INFORMATION.InformationBuffer, a1->CombinedNdisRSSParameters, v7);
        a2->DATA.QUERY_INFORMATION.BytesWritten = v7;
      }
      v8 = NewIrql;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v8);
    }
  }
  else
  {
    v5 = NewIrql;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v5);
    v3 = -1073741637;
    a2->DATA.QUERY_INFORMATION.BytesWritten = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v10) = v3;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x70u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)a1,
      v10);
  }
  return v3;
}
