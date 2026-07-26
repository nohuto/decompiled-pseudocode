/*
 * XREFs of ?TryAcquire@KRundownBase@@QEAA_NXZ @ 0x1C00B3AC4
 * Callers:
 *     NdisMRegisterWdiMiniportDriver @ 0x1C013D9D0 (NdisMRegisterWdiMiniportDriver.c)
 *     ?ndisMpHookGetHook@@YA?AV?$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT_HOOK_DRIVER_TYPE@@@Z @ 0x1C013DDA8 (-ndisMpHookGetHook@@YA-AV-$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT.c)
 * Callees:
 *     <none>
 */

bool __fastcall KRundownBase::TryAcquire(KRundownBase *this)
{
  return ExAcquireRundownProtection(&this->m_rundown) != 0;
}
