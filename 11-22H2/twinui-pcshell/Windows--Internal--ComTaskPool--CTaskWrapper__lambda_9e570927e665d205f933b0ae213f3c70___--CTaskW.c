/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9e570927e665d205f933b0ae213f3c70___::CTaskWrapper__lambda_9e570927e665d205f933b0ae213f3c70_____lambda_9e570927e665d205f933b0ae213f3c70___ @ 0x1801E59C0
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_9e570927e665d205f933b0ae213f3c70___ @ 0x1801E677C (Windows--Internal--ComTaskPool--QueueTask__lambda_9e570927e665d205f933b0ae213f3c70___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1801E80C4 (--0-$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9e570927e665d205f933b0ae213f3c70___::CTaskWrapper__lambda_9e570927e665d205f933b0ae213f3c70_____lambda_9e570927e665d205f933b0ae213f3c70___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  wil::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = &SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::`vftable';
  *(_BYTE *)(a1 + 336) = *(_BYTE *)(a2 + 320);
  *(_BYTE *)(a1 + 337) = *(_BYTE *)(a2 + 321);
  *(_QWORD *)a1 = off_1807C5058;
  return a1;
}
