/*
 * XREFs of ?TryUpdateActivationControllerProxy@ActivationWatcherBamoPrincipal@@AEAAX_K_N@Z @ 0x1800A50F0
 * Callers:
 *     ?HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z @ 0x1800A46D4 (-HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VBamoSimpleHapticsControllerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180054ABC (--1-$com_ptr_t@VBamoSimpleHapticsControllerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FromCookie@ActivationControllerBamoProxy@@SA?AV?$com_ptr_t@VBamoActivationControllerProxy@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x180059300 (-FromCookie@ActivationControllerBamoProxy@@SA-AV-$com_ptr_t@VBamoActivationControllerProxy@@Uerr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ActivationWatcherBamoPrincipal::TryUpdateActivationControllerProxy(
        ActivationWatcherBamoPrincipal *this,
        unsigned __int64 a2,
        char a3)
{
  __int64 v4; // rdx
  ActivationWatcherBamoPrincipal *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  ActivationControllerBamoProxy::FromCookie((__int64 *)&v5, a2);
  if ( v5 && (*(unsigned __int8 (__fastcall **)(__int64))(*((_QWORD *)v5 + 1) + 24LL))((__int64)v5 + 8) != a3 )
  {
    LOBYTE(v4) = a3;
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v5 + 1) + 32LL))((__int64)v5 + 8, v4);
  }
  wil::com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>::~com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>((__int64 *)&v5);
}
