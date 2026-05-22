/*
 * XREFs of ?Destroy@CompositionCommitDeferral@Composition@UI@Windows@@UEAAXXZ @ 0x180182590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::CompositionCommitDeferral::Destroy(
        Windows::UI::Composition::CompositionCommitDeferral *this)
{
  if ( *((_BYTE *)this + 144) )
  {
    (*(void (__fastcall **)(Windows::UI::Composition::CompositionCommitDeferral *))(*(_QWORD *)this + 288LL))(this);
    *((_BYTE *)this + 144) = 0;
  }
  Windows::UI::Composition::CompositionObject::Destroy(this);
}
