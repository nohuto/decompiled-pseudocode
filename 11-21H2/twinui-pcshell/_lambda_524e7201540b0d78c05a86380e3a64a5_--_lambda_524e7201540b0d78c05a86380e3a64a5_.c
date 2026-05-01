/*
 * XREFs of _lambda_524e7201540b0d78c05a86380e3a64a5_::_lambda_524e7201540b0d78c05a86380e3a64a5_ @ 0x180375EA8
 * Callers:
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x180376AEC (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180375FD4 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_180375FD4.c)
 */

__int64 *__fastcall lambda_524e7201540b0d78c05a86380e3a64a5_::_lambda_524e7201540b0d78c05a86380e3a64a5_(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 v7; // rcx

  v7 = *a2;
  *a1 = *a2;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  a1[1] = *a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1 + 1);
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 2,
    a4);
  a1[2] = (__int64)&QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
  return a1;
}
