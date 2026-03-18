/*
 * XREFs of ?PowerCheckParentStateArmedForWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0086640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgPnp::PowerCheckParentStateArmedForWake(FxPkgPnp *This)
{
  FxPkgPnp_vtbl *v1; // rax
  unsigned __int8 waitForParentOn; // [rsp+30h] [rbp+8h] BYREF

  v1 = This->__vftable;
  waitForParentOn = 0;
  if ( v1->PowerCheckParentOverload(This, &waitForParentOn) >= 0 )
    return waitForParentOn != 0 ? 809 : 792;
  else
    return 851LL;
}
