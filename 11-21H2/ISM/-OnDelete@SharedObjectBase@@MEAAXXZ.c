/*
 * XREFs of ?OnDelete@SharedObjectBase@@MEAAXXZ @ 0x1800FC310
 * Callers:
 *     ?OnDelete@?$SharedUnknownBase@UISIPCEndpoint@@@@MEAAXXZ @ 0x1800FC300 (-OnDelete@-$SharedUnknownBase@UISIPCEndpoint@@@@MEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall SharedObjectBase::OnDelete(SharedObjectBase *this)
{
  if ( this )
    (**(void (__fastcall ***)(SharedObjectBase *, __int64))this)(this, 1LL);
}
