/*
 * XREFs of ?IommuBeginExclusiveAccess@ADAPTER_RENDER@@CAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x1C02C1610
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C019755C (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?DdiBeginExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02C39C0 (-DdiBeginExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ.c)
 */

void __fastcall ADAPTER_RENDER::IommuBeginExclusiveAccess(struct SYSMM_ADAPTER *a1, ADAPTER_RENDER *a2)
{
  DXGADAPTER::AcquireCoreResourceExclusive(*((_QWORD *)a2 + 2), 3u, 0);
  ADAPTER_RENDER::DdiBeginExclusiveAccess(a2);
}
