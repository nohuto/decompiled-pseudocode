/*
 * XREFs of ?ndisOidPostRcvFilterClearFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0084250
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00084A8 (WPP_RECORDER_SF_qD.c)
 *     ?ndisIsSuccessOrSupriseRemove@@YA_NHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00374D0 (-ndisIsSuccessOrSupriseRemove@@YA_NHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCCC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisClearReceiveFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00839A8 (-ndisClearReceiveFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisOidPostRcvFilterClearFilter(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbx
  __int64 v3; // rsi
  char v4[4]; // [rsp+30h] [rbp-18h]
  KIRQL NewIrql; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *((_QWORD *)a1 + 4);
  NewIrql = 0;
  if ( v1 )
  {
    if ( ndisIsSuccessOrSupriseRemove(*((_DWORD *)a1 + 10), v1) )
    {
      if ( *(_DWORD *)(v3 + 48) >= 0x10u )
      {
        ndisClearReceiveFilter(v1, *(_DWORD *)(*(_QWORD *)(v3 + 40) + 12LL));
        *((_DWORD *)a1 + 10) = 0;
      }
    }
    else
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v4 = *((_DWORD *)a1 + 10);
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xBu,
          0x18u,
          (struct _GUID *)&WPP_978108687cf53f4f40ba23c4c4a475db_Traceguids,
          (char)v1,
          *(_DWORD *)v4);
      }
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, &NewIrql);
      if ( (*(_DWORD *)(v3 + 88) & 0x10000) != 0
        && (v1->PnPFlags & 0x1000000) == 0
        && (v1->DriverHandle->Flags & 1) == 0 )
      {
        DbgPrintEx(
          0x78u,
          0,
          " ***NDIS*** : Miniport %Z - %s\n",
          v1->pAdapterInstanceName,
          "Miniport has failed OID_RECEIVE_FILTER_CLEAR_FILTER");
        ndisBugCheckEx(0x1CuLL, (ULONG_PTR)v1, *(unsigned int *)(v3 + 32), *((int *)a1 + 10));
      }
      v1->MiniportThread = 0LL;
      KeReleaseSpinLock(&v1->Lock, NewIrql);
    }
  }
}
