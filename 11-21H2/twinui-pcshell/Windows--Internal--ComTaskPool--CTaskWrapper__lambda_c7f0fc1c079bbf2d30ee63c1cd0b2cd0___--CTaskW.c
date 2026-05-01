/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0___::CTaskWrapper__lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_____lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0___ @ 0x1801AE4EC
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0___ @ 0x1801AEE50 (Windows--Internal--ComTaskPool--QueueTask__lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18022DE20 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_18022DE20.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0___::CTaskWrapper__lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_____lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0___(
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
  *(_QWORD *)a1 = off_180643D38;
  return a1;
}
