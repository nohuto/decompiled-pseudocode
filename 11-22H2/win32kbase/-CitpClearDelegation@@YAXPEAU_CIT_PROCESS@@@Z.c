/*
 * XREFs of ?CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z @ 0x1C00CA074
 * Callers:
 *     CitProcessCallout @ 0x1C00362EC (CitProcessCallout.c)
 *     CitEnableKeyboardDelegation @ 0x1C0234ABC (CitEnableKeyboardDelegation.c)
 * Callees:
 *     ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x1C0033BE4 (-CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z.c)
 *     Feature_Ni_FixCitInputDelegationAV__private_IsEnabledDeviceUsage @ 0x1C00D6660 (Feature_Ni_FixCitInputDelegationAV__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CitpClearDelegation(struct _CIT_PROCESS *a1)
{
  __int64 v2; // rcx

  if ( CitpProcessInfoIsValid(a1) )
  {
    if ( *(_QWORD *)(v2 + 16) )
    {
      if ( (unsigned int)Feature_Ni_FixCitInputDelegationAV__private_IsEnabledDeviceUsage()
        && *(struct _CIT_PROCESS **)(*((_QWORD *)a1 + 2) + 24LL) != a1 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3873LL);
      }
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL) = 0LL;
    }
    if ( *((_QWORD *)a1 + 3) )
    {
      if ( (unsigned int)Feature_Ni_FixCitInputDelegationAV__private_IsEnabledDeviceUsage() )
      {
        if ( *(struct _CIT_PROCESS **)(*((_QWORD *)a1 + 3) + 16LL) != a1 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3887LL);
      }
      *(_QWORD *)(*((_QWORD *)a1 + 3) + 16LL) = 0LL;
    }
    *((_QWORD *)a1 + 2) = 0LL;
    *((_QWORD *)a1 + 3) = 0LL;
  }
}
