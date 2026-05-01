/*
 * XREFs of _lambda_b534361c50cb4958853f48f5e7b1e06a_::_lambda_b534361c50cb4958853f48f5e7b1e06a_ @ 0x18004C608
 * Callers:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18004C24C (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18004C704 (--0-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     ??0CopyableHString@ExperienceManagerUtils@@QEAA@AEBV01@@Z @ 0x1800A3714 (--0CopyableHString@ExperienceManagerUtils@@QEAA@AEBV01@@Z.c)
 */

__int64 *__fastcall lambda_b534361c50cb4958853f48f5e7b1e06a_::_lambda_b534361c50cb4958853f48f5e7b1e06a_(
        __int64 *a1,
        __int64 *a2,
        const struct ExperienceManagerUtils::CopyableHString *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 a6)
{
  *a1 = *a2;
  ExperienceManagerUtils::CopyableHString::CopyableHString((ExperienceManagerUtils::CopyableHString *)(a1 + 1), a3);
  a1[3] = *a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1 + 3);
  a1[4] = *a5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1 + 4);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 5,
    a6);
  a1[5] = (__int64)&SingleViewExperienceTelemetry::Reactivate::`vftable';
  return a1;
}
