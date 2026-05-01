/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_259a1410ba958232e2f70f54c5d031d1___::CTaskWrapper__lambda_259a1410ba958232e2f70f54c5d031d1_____lambda_259a1410ba958232e2f70f54c5d031d1___ @ 0x1802037C8
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_259a1410ba958232e2f70f54c5d031d1___ @ 0x1802054C0 (Windows--Internal--ComTaskPool--QueueTask__lambda_259a1410ba958232e2f70f54c5d031d1___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1802DA3D0 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_1802DA3D0.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_259a1410ba958232e2f70f54c5d031d1___::CTaskWrapper__lambda_259a1410ba958232e2f70f54c5d031d1_____lambda_259a1410ba958232e2f70f54c5d031d1___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rdx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a1 + 16 != a2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v4 = (_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( a1 + 40 != a2 + 24 )
  {
    *(_QWORD *)(a1 + 40) = *v4;
    *v4 = 0LL;
  }
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 32);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 56,
    a2 + 40);
  *(_QWORD *)(a1 + 56) = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::`vftable';
  *(_QWORD *)a1 = off_1807C66B8;
  return a1;
}
