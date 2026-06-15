/*
 * XREFs of ??0?$com_ptr_t@VEffectPackConfigurationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVEffectPackConfigurationManager@@@Z @ 0x18010D990
 * Callers:
 *     ?ScanForInstalledEffectPacks@EffectPackConfigurationManager@@AEAAJXZ @ 0x18005C3D0 (-ScanForInstalledEffectPacks@EffectPackConfigurationManager@@AEAAJXZ.c)
 *     ?OnMediaNotification@EffectPackConfigurationManager@@UEAAJPEAUMEDIA_NOTIFICATION_BLOCK@@@Z @ 0x18010E000 (-OnMediaNotification@EffectPackConfigurationManager@@UEAAJPEAUMEDIA_NOTIFICATION_BLOCK@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_677f1f97be281aa35bb205656a45fbf6__void_::_Copy @ 0x18010E4F0 (std--_Func_impl_no_alloc__lambda_677f1f97be281aa35bb205656a45fbf6__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_ad978ac0b560ea79d3c0f0c224eaf47d__void_::_Copy @ 0x18010E550 (std--_Func_impl_no_alloc__lambda_ad978ac0b560ea79d3c0f0c224eaf47d__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_f864113ba859077b45c58192bc634b97__void_::_Copy @ 0x18010E5B0 (std--_Func_impl_no_alloc__lambda_f864113ba859077b45c58192bc634b97__void_--_Copy.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<EffectPackConfigurationManager,wil::err_returncode_policy>::com_ptr_t<EffectPackConfigurationManager,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
