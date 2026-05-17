/*
 * XREFs of TpPostWork @ 0x18001B690
 * Callers:
 *     LdrpQueueWork @ 0x1800559C0 (LdrpQueueWork.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x1800598A0 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     RtlpFcWnfCallback @ 0x1800B12B0 (RtlpFcWnfCallback.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x18010EBE0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x18001B6E4 (TppValidateCleanupGroupMember.c)
 */

__int64 __fastcall TpPostWork(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  __int64 v3; // r9

  v3 = (__int64)Ldr;
  if ( Ldr
    && (unsigned int)TppValidateCleanupGroupMember(Ldr, 0LL, a3, Ldr)
    && *(__int64 (__fastcall ***)())(v3 + 8) == TppWorkpCleanupGroupMemberVFuncs
    && (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress == (_BYTE)a2) )
  {
    return TppWorkPost(v3);
  }
  else
  {
    return TppRaiseInvalidParameter(Ldr, a2, a3, v3);
  }
}
