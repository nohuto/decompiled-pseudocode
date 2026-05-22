/*
 * XREFs of ?OnDelete@SharedObjectBase@@MEAAXXZ @ 0x180126160
 * Callers:
 *     ?OnDelete@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@MEAAXXZ @ 0x18006D9C0 (-OnDelete@-$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@MEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall SharedObjectBase::OnDelete(SharedObjectBase *this)
{
  if ( this )
    (**(void (__fastcall ***)(SharedObjectBase *, __int64))this)(this, 1LL);
}
