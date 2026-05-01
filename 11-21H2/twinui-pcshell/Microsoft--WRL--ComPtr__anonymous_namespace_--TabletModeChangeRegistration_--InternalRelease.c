/*
 * XREFs of Microsoft::WRL::ComPtr__anonymous_namespace_::TabletModeChangeRegistration_::InternalRelease @ 0x1800442D8
 * Callers:
 *     ??1TaskViewHost@@UEAA@XZ @ 0x18000F848 (--1TaskViewHost@@UEAA@XZ.c)
 *     ??1TabletModeChangeListener@@QEAA@XZ @ 0x18042EE04 (--1TabletModeChangeListener@@QEAA@XZ.c)
 *     ??1XamlAllUpViewHost@@UEAA@XZ @ 0x18042EEA0 (--1XamlAllUpViewHost@@UEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr__anonymous_namespace_::TabletModeChangeRegistration_::InternalRelease(
        __int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
