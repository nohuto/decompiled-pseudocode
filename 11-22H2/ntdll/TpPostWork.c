/*
 * XREFs of TpPostWork @ 0x180034D80
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x18005B550 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     LdrpQueueWork @ 0x180072EF0 (LdrpQueueWork.c)
 *     RtlpFcWnfCallback @ 0x1800AEDA0 (RtlpFcWnfCallback.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x18010EE10 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x180034DD4 (TppValidateCleanupGroupMember.c)
 */

void __cdecl TpPostWork(PTP_WORK Work)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  if ( Work
    && (unsigned int)TppValidateCleanupGroupMember(Work, 0LL)
    && *(__int64 (__fastcall ***)(PVOID))(v3 + 8) == &TppWorkpCleanupGroupMemberVFuncs
    && (Work = (PTP_WORK)NtCurrentPeb()->Ldr, *((_BYTE *)Work + 72) == (_BYTE)v1) )
  {
    TppWorkPost(v3);
  }
  else
  {
    TppRaiseInvalidParameter(Work, v1, v2);
  }
}
