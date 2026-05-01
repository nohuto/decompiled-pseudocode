/*
 * XREFs of ??1TabletModeChangeListener@@QEAA@XZ @ 0x18042EE04
 * Callers:
 *     _TaskViewHost::TaskViewHost_::_1_::dtor$15 @ 0x180213B22 (_TaskViewHost--TaskViewHost_--_1_--dtor$15.c)
 * Callees:
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::TabletModeChangeRegistration_::InternalRelease @ 0x1800442D8 (Microsoft--WRL--ComPtr__anonymous_namespace_--TabletModeChangeRegistration_--InternalRelease.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabletModeChangeListener::~TabletModeChangeListener(TabletModeChangeListener *this)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx

  v1 = (__int64 *)((char *)this + 8);
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
    Microsoft::WRL::ComPtr__anonymous_namespace_::TabletModeChangeRegistration_::InternalRelease(v1);
  }
  Microsoft::WRL::ComPtr__anonymous_namespace_::TabletModeChangeRegistration_::InternalRelease(v1);
}
