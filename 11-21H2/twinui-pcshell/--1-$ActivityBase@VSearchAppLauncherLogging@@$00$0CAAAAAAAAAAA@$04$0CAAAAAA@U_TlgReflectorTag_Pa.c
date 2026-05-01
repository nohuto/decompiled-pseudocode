/*
 * XREFs of ??1?$ActivityBase@VSearchAppLauncherLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803A0E80
 * Callers:
 *     ??1MiniSearchAppExperienceManager_Hide@MiniSearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1803A0FD0 (--1MiniSearchAppExperienceManager_Hide@MiniSearchAppExperienceManagerTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSearchAppLauncherLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803A0EBC (--1-$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProviderType_ea_1803A0EBC.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSearchAppLauncherLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1803A4D14 (-reset@-$shared_object@V-$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_ea_1803A4D14.c)
 */

void __fastcall wil::ActivityBase<SearchAppLauncherLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SearchAppLauncherLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<SearchAppLauncherLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SearchAppLauncherLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 312);
  wil::ActivityBase<SearchAppLauncherLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SearchAppLauncherLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SearchAppLauncherLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
