/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0190d4b48233ee3d7e5c167dfa5e03d8___::CTaskWrapper__lambda_0190d4b48233ee3d7e5c167dfa5e03d8_____lambda_0190d4b48233ee3d7e5c167dfa5e03d8___ @ 0x1801E5838
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0190d4b48233ee3d7e5c167dfa5e03d8___ @ 0x1801E64F0 (Windows--Internal--ComTaskPool--QueueTask__lambda_0190d4b48233ee3d7e5c167dfa5e03d8___.c)
 * Callees:
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1800BB030 (--0-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_ea_1800BB030.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0190d4b48233ee3d7e5c167dfa5e03d8___::CTaskWrapper__lambda_0190d4b48233ee3d7e5c167dfa5e03d8_____lambda_0190d4b48233ee3d7e5c167dfa5e03d8___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 24);
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)(a1 + 56),
    a2 + 40);
  *(_QWORD *)(a1 + 56) = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::`vftable';
  *(_QWORD *)a1 = off_1807C5200;
  return a1;
}
