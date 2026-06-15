/*
 * XREFs of ??0CVpoContextProxy@@QEAA@PEAUISubmixProxy@@PEAUISaDeviceProxy@@PEAUIVpoContext@@@Z @ 0x18011C430
 * Callers:
 *     ??$make_unique@VCVpoContextProxy@@$$TPEAUISaDeviceProxy@@PEAUIVpoContext@@$0A@@std@@YA?AV?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@0@$$QEA$$T$$QEAPEAUISaDeviceProxy@@$$QEAPEAUIVpoContext@@@Z @ 0x18011C300 (--$make_unique@VCVpoContextProxy@@$$TPEAUISaDeviceProxy@@PEAUIVpoContext@@$0A@@std@@YA-AV-$uniqu.c)
 *     ??$make_unique@VCVpoContextProxy@@PEAUISubmixProxy@@PEAUISaDeviceProxy@@PEAUIVpoContext@@$0A@@std@@YA?AV?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@0@$$QEAPEAUISubmixProxy@@$$QEAPEAUISaDeviceProxy@@$$QEAPEAUIVpoContext@@@Z @ 0x18011C368 (--$make_unique@VCVpoContextProxy@@PEAUISubmixProxy@@PEAUISaDeviceProxy@@PEAUIVpoContext@@$0A@@st.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UISaDeviceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUISaDeviceProxy@@@Z @ 0x1800D8448 (--0-$com_ptr_t@UISaDeviceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUISaDeviceProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
CVpoContextProxy *__fastcall CVpoContextProxy::CVpoContextProxy(
        CVpoContextProxy *this,
        struct ISubmixProxy *a2,
        struct ISaDeviceProxy *a3,
        struct IVpoContext *a4)
{
  *(_QWORD *)this = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct ISubmixProxy *))(*(_QWORD *)a2 + 8LL))(a2);
  wil::com_ptr_t<ISaDeviceProxy,wil::err_returncode_policy>::com_ptr_t<ISaDeviceProxy,wil::err_returncode_policy>(
    (_QWORD *)this + 1,
    (__int64)a3);
  *((_QWORD *)this + 2) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct IVpoContext *))(*(_QWORD *)a4 + 8LL))(a4);
  return this;
}
