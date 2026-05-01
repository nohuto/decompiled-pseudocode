/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_09eec0bbc0ade630acfbce7628848781___::CTaskWrapper__lambda_09eec0bbc0ade630acfbce7628848781_____lambda_09eec0bbc0ade630acfbce7628848781___ @ 0x1801AE05C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_09eec0bbc0ade630acfbce7628848781___ @ 0x1801AE8D0 (Windows--Internal--ComTaskPool--QueueTask__lambda_09eec0bbc0ade630acfbce7628848781___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18022DE20 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_18022DE20.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_09eec0bbc0ade630acfbce7628848781___::CTaskWrapper__lambda_09eec0bbc0ade630acfbce7628848781_____lambda_09eec0bbc0ade630acfbce7628848781___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a2;
  v4 = (_QWORD *)(a2 + 8);
  *(_BYTE *)(a1 + 20) = *(_BYTE *)(a2 + 4);
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( a1 + 24 != a2 + 8 )
  {
    *(_QWORD *)(a1 + 24) = *v4;
    *v4 = 0LL;
  }
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 40,
    a2 + 24);
  *(_QWORD *)(a1 + 40) = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::`vftable';
  *(_QWORD *)a1 = off_180643E78;
  return a1;
}
