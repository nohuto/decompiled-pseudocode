/*
 * XREFs of _lambda_825306615c33696f43f5a813d6c29089_::_lambda_825306615c33696f43f5a813d6c29089_ @ 0x1802064E0
 * Callers:
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ @ 0x1805154A0 (-PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ.c)
 * Callees:
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800B382C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1802DA4AE (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_1802DA4AE.c)
 */

__int64 *__fastcall lambda_825306615c33696f43f5a813d6c29089_::_lambda_825306615c33696f43f5a813d6c29089_(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(a1, a2);
  a1[1] = *a3;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 2,
    a4);
  a1[2] = (__int64)&TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::`vftable';
  return a1;
}
