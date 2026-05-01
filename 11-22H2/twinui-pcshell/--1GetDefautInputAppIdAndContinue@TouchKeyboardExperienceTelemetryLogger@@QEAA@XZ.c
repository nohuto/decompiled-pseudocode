/*
 * XREFs of ??1GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802DA95A
 * Callers:
 *     __lambda_a09f288fb701b6a3bb133eb64dd6b836_::_lambda_a09f288fb701b6a3bb133eb64dd6b836__::_1_::dtor$1 @ 0x1802065AB (__lambda_a09f288fb701b6a3bb133eb64dd6b836_--_lambda_a09f288fb701b6a3bb133eb64dd6b83_ea_1802065AB.c)
 *     _lambda_a09f288fb701b6a3bb133eb64dd6b836_::__lambda_a09f288fb701b6a3bb133eb64dd6b836_ @ 0x18020678C (_lambda_a09f288fb701b6a3bb133eb64dd6b836_--__lambda_a09f288fb701b6a3bb133eb64dd6b836_.c)
 *     ?GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV?$function@$$A6AJPEBG@Z@std@@@Z @ 0x18050FEF8 (-GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV-$function@$$A6AJPEBG@Z@st.c)
 *     _TouchKeyboardExperienceManager::GetDefautInputAppIdAndContinue_::_1_::dtor$1 @ 0x180510038 (_TouchKeyboardExperienceManager--GetDefautInputAppIdAndContinue_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AC96C (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::~GetDefautInputAppIdAndContinue(
        TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
