/*
 * XREFs of ??1?$ActivityBase@VMobilityExperienceLogging@Telemetry@MobilityExperience@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18007633C
 * Callers:
 *     ??1HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAA@XZ @ 0x180076694 (--1HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperie.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800665B0 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VMobilityExperienceLogging@Telemetry@MobilityExperience@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VMobilityExperienceLogging@Telemetry@MobilityExperience@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800763B8 (--1-$ActivityData@VMobilityExperienceLogging@Telemetry@MobilityExperience@@U_TlgReflectorTag_Par.c)
 */

void __fastcall wil::ActivityBase<MobilityExperience::Telemetry::MobilityExperienceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<MobilityExperience::Telemetry::MobilityExperienceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  volatile signed __int32 *v2; // rcx
  char *v3; // rdi

  v2 = *(volatile signed __int32 **)(a1 + 312);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *(char **)(a1 + 312);
      if ( v3 )
      {
        wil::ActivityBase<MobilityExperience::Telemetry::MobilityExperienceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<MobilityExperience::Telemetry::MobilityExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<MobilityExperience::Telemetry::MobilityExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(v3 + 8);
        operator delete(v3);
      }
    }
    *(_QWORD *)(a1 + 312) = 0LL;
  }
  wil::ActivityBase<MobilityExperience::Telemetry::MobilityExperienceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<MobilityExperience::Telemetry::MobilityExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<MobilityExperience::Telemetry::MobilityExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
