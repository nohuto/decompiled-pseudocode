/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3f7c4ca579c2955647d5fca56c9af8c5___::CTaskWrapper__lambda_3f7c4ca579c2955647d5fca56c9af8c5_____lambda_3f7c4ca579c2955647d5fca56c9af8c5___ @ 0x1801AE0E0
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3f7c4ca579c2955647d5fca56c9af8c5___ @ 0x1801AE980 (Windows--Internal--ComTaskPool--QueueTask__lambda_3f7c4ca579c2955647d5fca56c9af8c5___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18045A724 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ?_Reset_move@?$_Func_class@JPEBG@std@@IEAAX$$QEAV12@@Z @ 0x18046A7D0 (-_Reset_move@-$_Func_class@JPEBG@std@@IEAAX$$QEAV12@@Z.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3f7c4ca579c2955647d5fca56c9af8c5___::CTaskWrapper__lambda_3f7c4ca579c2955647d5fca56c9af8c5_____lambda_3f7c4ca579c2955647d5fca56c9af8c5___(
        __int64 a1,
        _QWORD *a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (_QWORD *)(a1 + 16) != a2 )
  {
    *(_QWORD *)(a1 + 16) = *a2;
    *a2 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = a2[1];
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 32));
  *(_QWORD *)(a1 + 32) = &TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::`vftable';
  *(_QWORD *)(a1 + 408) = 0LL;
  std::_Func_class<long,unsigned short const *>::_Reset_move(a1 + 352, a2 + 42);
  *(_QWORD *)a1 = off_180643D88;
  return a1;
}
