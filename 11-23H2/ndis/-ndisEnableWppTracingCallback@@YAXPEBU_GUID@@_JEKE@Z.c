/*
 * XREFs of ?ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z @ 0x1C00B1B0C
 * Callers:
 *     WppClassicProviderCallback @ 0x1C00B25A0 (WppClassicProviderCallback.c)
 *     WppTraceCallback @ 0x1C01391E0 (WppTraceCallback.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00030D0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00113A8 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ndisWppExtendedCallback @ 0x1C003375C (ndisWppExtendedCallback.c)
 *     ndisMEmitTraceRundown @ 0x1C00B1CE4 (ndisMEmitTraceRundown.c)
 */

void __fastcall ndisEnableWppTracingCallback(const struct _GUID *a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  char v5; // bl
  char v6; // di
  int v7; // esi
  KIRQL v8; // al
  struct _NDIS_MINIPORT_BLOCK *v9; // rbx
  KIRQL v10; // di

  v5 = a3;
  LOBYTE(a3) = a5;
  v6 = a4;
  v7 = 0;
  ndisWppExtendedCallback(v5, a4, a3);
  if ( v5 && (v6 & 2) != 0 && a5 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        1u,
        2u,
        0x17u,
        (struct _GUID *)&WPP_b4da289a22fb3fb85c881fb62f41861d_Traceguids);
    v8 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    v9 = ndisMiniportList;
    v10 = v8;
    while ( v9 )
    {
      if ( (unsigned int)++v7 > 1 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          1u,
          2u,
          0x18u,
          (struct _GUID *)&WPP_b4da289a22fb3fb85c881fb62f41861d_Traceguids);
      if ( v9->PnPDeviceState == NdisPnPDeviceStarted && ndisReferenceMiniport(v9, 0x54u) )
      {
        KeReleaseSpinLock(&ndisMiniportListLock, v10);
        ndisMEmitTraceRundown(v9);
        v10 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
        ndisDereferenceMiniport(v9, 0x54u);
      }
      else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          1u,
          2u,
          0x19u,
          (struct _GUID *)&WPP_b4da289a22fb3fb85c881fb62f41861d_Traceguids,
          (char)v9,
          v9->DriverHandle);
      }
      v9 = v9->NextGlobalMiniport;
    }
    KeReleaseSpinLock(&ndisMiniportListLock, v10);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        1u,
        2u,
        0x1Au,
        (struct _GUID *)&WPP_b4da289a22fb3fb85c881fb62f41861d_Traceguids);
  }
}
