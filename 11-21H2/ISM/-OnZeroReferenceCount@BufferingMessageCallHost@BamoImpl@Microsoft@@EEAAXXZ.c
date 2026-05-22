/*
 * XREFs of ?OnZeroReferenceCount@BufferingMessageCallHost@BamoImpl@Microsoft@@EEAAXXZ @ 0x18008B6A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::OnZeroReferenceCount(
        Microsoft::BamoImpl::BufferingMessageCallHost *this)
{
  if ( this )
    (*(void (__fastcall **)(Microsoft::BamoImpl::BufferingMessageCallHost *, __int64))(*(_QWORD *)this + 16LL))(
      this,
      1LL);
}
