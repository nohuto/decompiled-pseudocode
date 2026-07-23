/*
 * XREFs of RtlRegisterFeatureConfigurationChangeNotification @ 0x180060D20
 * Callers:
 *     RtlpFtInitialize @ 0x18009F910 (RtlpFtInitialize.c)
 * Callees:
 *     TpPostWork @ 0x180034C20 (TpPostWork.c)
 *     RtlpFcAllocateChangeRegistration @ 0x180060DA8 (RtlpFcAllocateChangeRegistration.c)
 *     RtlpFcEnsureSubscriptionManagerStarted @ 0x180060E30 (RtlpFcEnsureSubscriptionManagerStarted.c)
 *     RtlpFcInsertChangeRegistration @ 0x18006110C (RtlpFcInsertChangeRegistration.c)
 */

NTSTATUS __cdecl RtlRegisterFeatureConfigurationChangeNotification(
        PRTL_FEATURE_CONFIGURATION_CHANGE_CALLBACK Callback,
        PVOID Context,
        PRTL_FEATURE_CHANGE_STAMP ObservedChangeStamp,
        PRTL_FEATURE_CONFIGURATION_CHANGE_REGISTRATION RegistrationHandle)
{
  NTSTATUS result; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  PTP_WORK *v11; // rbx

  if ( byte_180187488 )
    return -1073741058;
  result = RtlpFcEnsureSubscriptionManagerStarted();
  if ( result >= 0 )
  {
    v9 = RtlpFcAllocateChangeRegistration(Callback, Context);
    v11 = (PTP_WORK *)v9;
    if ( v9 )
    {
      RtlpFcInsertChangeRegistration(v10, v9);
      if ( ObservedChangeStamp )
      {
        if ( MEMORY[0x7FFE0720] != *ObservedChangeStamp )
          TpPostWork(v11[5]);
      }
      *RegistrationHandle = v11;
      return 0;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
