/*
 * XREFs of ??1GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18045AD6C
 * Callers:
 *     __lambda_3f7c4ca579c2955647d5fca56c9af8c5_::_lambda_3f7c4ca579c2955647d5fca56c9af8c5__::_1_::dtor$1 @ 0x1801AF0F3 (__lambda_3f7c4ca579c2955647d5fca56c9af8c5_--_lambda_3f7c4ca579c2955647d5fca56c9af8c_ea_1801AF0F3.c)
 *     _lambda_3f7c4ca579c2955647d5fca56c9af8c5_::__lambda_3f7c4ca579c2955647d5fca56c9af8c5_ @ 0x1801AF3B8 (_lambda_3f7c4ca579c2955647d5fca56c9af8c5_--__lambda_3f7c4ca579c2955647d5fca56c9af8c5_.c)
 *     ?GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV?$function@$$A6AJPEBG@Z@std@@@Z @ 0x18045E318 (-GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV-$function@$$A6AJPEBG@Z@st.c)
 *     _TouchKeyboardExperienceManager::GetDefautInputAppIdAndContinue_::_1_::dtor$1 @ 0x18045E474 (_TouchKeyboardExperienceManager--GetDefautInputAppIdAndContinue_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800BF208 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::~GetDefautInputAppIdAndContinue(
        TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
