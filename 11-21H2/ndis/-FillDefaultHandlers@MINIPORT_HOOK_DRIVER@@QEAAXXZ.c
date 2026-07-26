/*
 * XREFs of ?FillDefaultHandlers@MINIPORT_HOOK_DRIVER@@QEAAXXZ @ 0x1C01157D0
 * Callers:
 *     ?Register@MINIPORT_HOOK_DRIVER@@QEAAJPEAXPEBU_NDIS_MINIPORT_HOOK_DRIVER_PROVIDER_CHARACTERISTICS@@@Z @ 0x1C01320B4 (-Register@MINIPORT_HOOK_DRIVER@@QEAAJPEAXPEBU_NDIS_MINIPORT_HOOK_DRIVER_PROVIDER_CHARACTERISTICS.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C01565C4 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall MINIPORT_HOOK_DRIVER::FillDefaultHandlers(MINIPORT_HOOK_DRIVER *this)
{
  if ( !*((_QWORD *)this + 6) )
    *((_QWORD *)this + 6) = ndisMpHookDefaultOidRequestComplete;
  if ( !*((_QWORD *)this + 7) )
    *((_QWORD *)this + 7) = ndisMpHookDefaultDirectOidRequestComplete;
  if ( !*((_QWORD *)this + 8) )
    *((_QWORD *)this + 8) = ndisMpHookDefaultIndicateStatus;
}
