/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_524e7201540b0d78c05a86380e3a64a5___::CTaskWrapper__lambda_524e7201540b0d78c05a86380e3a64a5_____lambda_524e7201540b0d78c05a86380e3a64a5___ @ 0x180374A6C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_524e7201540b0d78c05a86380e3a64a5___ @ 0x180375C68 (Windows--Internal--ComTaskPool--QueueTask__lambda_524e7201540b0d78c05a86380e3a64a5___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180375F24 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_524e7201540b0d78c05a86380e3a64a5___::CTaskWrapper__lambda_524e7201540b0d78c05a86380e3a64a5_____lambda_524e7201540b0d78c05a86380e3a64a5___(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (_QWORD *)(a1 + 16) != a2 )
  {
    *(_QWORD *)(a1 + 16) = *a2;
    *a2 = 0LL;
  }
  v4 = a2 + 1;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( (_QWORD *)(a1 + 24) != a2 + 1 )
  {
    *(_QWORD *)(a1 + 24) = *v4;
    *v4 = 0LL;
  }
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 32));
  *(_QWORD *)(a1 + 32) = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
  *(_QWORD *)a1 = off_18064D330;
  return a1;
}
