/*
 * XREFs of ?NotifyDeferStateTransition_Callback@InteropCompositor@Composition@UI@Windows@@MEAAX_N@Z @ 0x18015F1D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::InteropCompositor::NotifyDeferStateTransition_Callback(
        Windows::UI::Composition::InteropCompositor *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 160);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1);
}
