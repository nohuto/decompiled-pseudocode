/*
 * XREFs of ?OnDelete@SharedObjectBase@@MEAAXXZ @ 0x1801180D0
 * Callers:
 *     ?OnDelete@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@MEAAXXZ @ 0x18005BEE0 (-OnDelete@-$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@MEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall SharedObjectBase::OnDelete(SharedObjectBase *this)
{
  if ( this )
    (**(void (__fastcall ***)(SharedObjectBase *, __int64))this)(this, 1LL);
}
