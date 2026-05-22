/*
 * XREFs of ?OnMarshalerRelease@CDelayedDestructionObject@DirectComposition@@UEAAXXZ @ 0x1800B5570
 * Callers:
 *     ?OnMarshalerRelease@CCompositionTextureBinding@DirectComposition@@UEAAXXZ @ 0x1800A04C0 (-OnMarshalerRelease@CCompositionTextureBinding@DirectComposition@@UEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CDelayedDestructionObject::OnMarshalerRelease(
        DirectComposition::CDelayedDestructionObject *this)
{
  if ( this )
    (*(void (__fastcall **)(DirectComposition::CDelayedDestructionObject *, __int64))(*(_QWORD *)this + 16LL))(
      this,
      1LL);
}
