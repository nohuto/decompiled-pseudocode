/*
 * XREFs of _lambda_b77313e954014d84b78f3886c1783ac6_::_lambda_b77313e954014d84b78f3886c1783ac6_ @ 0x180285848
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x18010D260 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     ??0CopyableHString@ExperienceManagerUtils@@QEAA@AEBV01@@Z @ 0x18001B6B8 (--0CopyableHString@ExperienceManagerUtils@@QEAA@AEBV01@@Z.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800B382C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18010D948 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag.c)
 */

__int64 *__fastcall lambda_b77313e954014d84b78f3886c1783ac6_::_lambda_b77313e954014d84b78f3886c1783ac6_(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        const struct ExperienceManagerUtils::CopyableHString *a4,
        _QWORD *a5)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(a1, a2);
  a1[1] = a3;
  ExperienceManagerUtils::CopyableHString::CopyableHString((ExperienceManagerUtils::CopyableHString *)(a1 + 2), a4);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)(a1 + 4),
    a5);
  a1[4] = (__int64)&SingleViewExperienceTelemetry::Launch::`vftable';
  return a1;
}
