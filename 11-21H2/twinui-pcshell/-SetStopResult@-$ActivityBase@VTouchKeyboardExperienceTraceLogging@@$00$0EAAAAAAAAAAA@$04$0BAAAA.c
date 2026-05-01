/*
 * XREFs of ?SetStopResult@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXJPEAJ@Z @ 0x180464AB4
 * Callers:
 *     ??$StopWithResult@_NAEAU?$atomic@_N@std@@@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXJ$$QEA_NAEAU?$atomic@_N@std@@@Z @ 0x1801AF040 (--$StopWithResult@_NAEAU-$atomic@_N@std@@@InputAppActivation@TouchKeyboardExperienceTelemetryLog.c)
 *     ??$StopWithResult@AEAIIAEAUSize@Foundation@Windows@@AEAEAEAEAEAJ@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXJAEAI$$QEAIAEAUSize@Foundation@Windows@@AEAE3AEAJ@Z @ 0x18046C91C (--$StopWithResult@AEAIIAEAUSize@Foundation@Windows@@AEAEAEAEAEAJ@OnInputAppRequestedResizeActivi.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?LockExclusive@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18022AC64 (-LockExclusive@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04.c)
 *     ?SetStopResult@?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x180464AFC (-SetStopResult@-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsPr.c)
 */

void __fastcall wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        __int64 a1,
        unsigned int a2,
        RTL_SRWLOCK *a3)
{
  RTL_SRWLOCK *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = a3;
  wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &v5);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
    *(_QWORD *)(a1 + 48),
    a2,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v5);
}
