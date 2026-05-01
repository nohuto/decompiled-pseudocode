/*
 * XREFs of ?GetPresentationLayer@CImmersiveApp@@UEAAJPEAPEAUIApplicationPresentationLayer@@@Z @ 0x180154390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::GetPresentationLayer(CImmersiveApp *this, struct IApplicationPresentationLayer **a2)
{
  struct IApplicationPresentationLayer *v3; // rbx

  v3 = (struct IApplicationPresentationLayer *)*((_QWORD *)this + 41);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*((_QWORD *)this + 41));
  *a2 = v3;
  return 0LL;
}
