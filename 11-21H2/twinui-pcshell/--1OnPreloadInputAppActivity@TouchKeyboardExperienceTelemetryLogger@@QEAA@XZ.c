/*
 * XREFs of ??1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18045AFB0
 * Callers:
 *     _lambda_2f79d86dba88adc4f3637a9ed70ae0ec_::__lambda_2f79d86dba88adc4f3637a9ed70ae0ec_ @ 0x1801AF3A8 (_lambda_2f79d86dba88adc4f3637a9ed70ae0ec_--__lambda_2f79d86dba88adc4f3637a9ed70ae0ec_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2f79d86dba88adc4f3637a9ed70ae0ec___::_CTaskWrapper__lambda_2f79d86dba88adc4f3637a9ed70ae0ec___ @ 0x1801AF540 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2f79d86dba88adc4f3637a9ed70ae0ec___--_CTask.c)
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18046402C (-PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800BF0E8 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::~OnPreloadInputAppActivity(
        TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
