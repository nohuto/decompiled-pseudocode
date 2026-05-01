/*
 * XREFs of ??1?$ActivityBase@VAAMTraceProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18062F270
 * Callers:
 *     ??1ActivateApplicationInContainer@AAMTraceProvider@@QEAA@XZ @ 0x18062F364 (--1ActivateApplicationInContainer@AAMTraceProvider@@QEAA@XZ.c)
 *     ??1ActivateRemotePathInContainer@AAMTraceProvider@@QEAA@XZ @ 0x18062F390 (--1ActivateRemotePathInContainer@AAMTraceProvider@@QEAA@XZ.c)
 *     ??1ModifyUnpackagedAppInContainer@AAMTraceProvider@@QEAA@XZ @ 0x18062F48C (--1ModifyUnpackagedAppInContainer@AAMTraceProvider@@QEAA@XZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VAAMTraceProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAAMTraceProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18062F2AC (--1-$ActivityData@VAAMTraceProvider@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@VAA.c)
 *     ?reset@?$shared_object@V?$ActivityData@VAAMTraceProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAAMTraceProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1806337D0 (-reset@-$shared_object@V-$ActivityData@VAAMTraceProvider@@U_TlgReflectorTag_Param0IsProviderType.c)
 */

void __fastcall wil::ActivityBase<AAMTraceProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<AAMTraceProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<AAMTraceProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AAMTraceProvider,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 312);
  wil::ActivityBase<AAMTraceProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AAMTraceProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<AAMTraceProvider,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
