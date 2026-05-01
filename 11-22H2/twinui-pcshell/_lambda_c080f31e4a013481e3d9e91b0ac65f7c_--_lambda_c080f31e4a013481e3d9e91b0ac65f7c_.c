/*
 * XREFs of _lambda_c080f31e4a013481e3d9e91b0ac65f7c_::_lambda_c080f31e4a013481e3d9e91b0ac65f7c_ @ 0x18044BBC4
 * Callers:
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x18044C80C (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18044BCF0 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_18044BCF0.c)
 */

__int64 *__fastcall lambda_c080f31e4a013481e3d9e91b0ac65f7c_::_lambda_c080f31e4a013481e3d9e91b0ac65f7c_(
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
