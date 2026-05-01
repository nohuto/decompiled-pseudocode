/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_41fdec79629b933043b6dd44cc33a98f___::CTaskWrapper__lambda_41fdec79629b933043b6dd44cc33a98f_____lambda_41fdec79629b933043b6dd44cc33a98f___ @ 0x1801AE184
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_41fdec79629b933043b6dd44cc33a98f___ @ 0x1801AEA30 (Windows--Internal--ComTaskPool--QueueTask__lambda_41fdec79629b933043b6dd44cc33a98f___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18022DE20 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_18022DE20.c)
 *     ??0ViewOptions@@QEAA@$$QEAU0@@Z @ 0x18022DFB6 (--0ViewOptions@@QEAA@$$QEAU0@@Z.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_41fdec79629b933043b6dd44cc33a98f___::CTaskWrapper__lambda_41fdec79629b933043b6dd44cc33a98f_____lambda_41fdec79629b933043b6dd44cc33a98f___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a2;
  *(_OWORD *)(a1 + 20) = *(_OWORD *)(a2 + 4);
  ViewOptions::ViewOptions(a1 + 40, a2 + 24);
  *(_QWORD *)(a1 + 96) = 0LL;
  v4 = (_QWORD *)(a2 + 80);
  if ( a1 + 96 != a2 + 80 )
  {
    *(_QWORD *)(a1 + 96) = *v4;
    *v4 = 0LL;
  }
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 88);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 112,
    a2 + 96);
  *(_QWORD *)(a1 + 112) = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::`vftable';
  *(_QWORD *)a1 = off_180643EA0;
  return a1;
}
