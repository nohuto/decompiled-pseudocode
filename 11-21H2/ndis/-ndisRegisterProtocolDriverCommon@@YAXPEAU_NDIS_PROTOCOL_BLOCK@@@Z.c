/*
 * XREFs of ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C002AB84
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1C002A670 (NdisRegisterProtocolDriver.c)
 *     NdisRegisterProtocol @ 0x1C00977F0 (NdisRegisterProtocol.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00106B4 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00208B0 (-ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z @ 0x1C002AC24 (-ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01061E8 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C010808C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C010BC4C (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z @ 0x1C010F380 (-SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?SetDirty@BindEngine@Ndis@@QEAAXXZ @ 0x1C012E5C4 (-SetDirty@BindEngine@Ndis@@QEAAXXZ.c)
 */

void __fastcall ndisRegisterProtocolDriverCommon(struct _NDIS_PROTOCOL_BLOCK *a1)
{
  KIRQL v2; // al
  KIRQL v3; // al
  struct _NDIS_MINIPORT_BLOCK *v4; // rdi
  KIRQL v5; // bl
  struct _NDIS_MINIPORT_BLOCK *v6; // rcx
  Ndis::BindEngine *v7; // rcx

  a1->OpenQueue = 0LL;
  ndisQueryDriverImageName(&a1->Name, &a1->ImageName);
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
  a1->NextProtocol = ndisProtocolList;
  ndisProtocolList = a1;
  KeReleaseSpinLock(&ndisProtocolListLock, v2);
  ObfReferenceObject(ndisDriverObject);
  NDIS_BIND_PROTOCOL_DRIVER::SetRunningDriver(&a1->Bind._p->_t, a1, RunAsynchronous);
  if ( (a1->Flags & 0x80000000) != 0 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    v4 = ndisMiniportList;
    v5 = v3;
    while ( v4 )
    {
      if ( ndisMDoesMiniportNeedCoNdisNdProxy(v4) && v4->PnPDeviceState == NdisPnPDeviceStarted )
      {
        if ( ndisReferenceMiniport(v6, 0x37u) )
        {
          KeReleaseSpinLock(&ndisMiniportListLock, v5);
          Ndis::BindEngine::BeginPolicyUpdates(&v4->BindEngine);
          Ndis::BindEngine::SetDirty(&v4->BindEngine);
          Ndis::BindEngine::EndPolicyUpdates(v7);
          Ndis::BindEngine::ApplyBindChanges(&v4->BindEngine, RunAsynchronous, 0);
          v5 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
          ndisDereferenceMiniport(v4, 0x37u);
        }
      }
      v4 = v4->NextGlobalMiniport;
    }
    KeReleaseSpinLock(&ndisMiniportListLock, v5);
  }
}
