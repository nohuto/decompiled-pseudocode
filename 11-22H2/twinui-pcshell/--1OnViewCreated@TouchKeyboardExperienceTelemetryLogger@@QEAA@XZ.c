/*
 * XREFs of ??1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802DAA36
 * Callers:
 *     _lambda_0cfa17de80a192d7104afc8a843b7ae2_::__lambda_0cfa17de80a192d7104afc8a843b7ae2_ @ 0x180206618 (_lambda_0cfa17de80a192d7104afc8a843b7ae2_--__lambda_0cfa17de80a192d7104afc8a843b7ae2_.c)
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180515004 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 *     _TouchKeyboardExperienceManager::OnViewCreated_::_1_::dtor$0 @ 0x180515307 (_TouchKeyboardExperienceManager--OnViewCreated_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AD2E8 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnViewCreated::~OnViewCreated(
        TouchKeyboardExperienceTelemetryLogger::OnViewCreated *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnViewCreated::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
