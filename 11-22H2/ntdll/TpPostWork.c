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

__int64 __fastcall TpPostWork(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  _PEB_LDR_DATA *v3; // r9

  v3 = Ldr;
  if ( Ldr
    && (unsigned int)TppValidateCleanupGroupMember(Ldr, 0LL, a3, Ldr)
    && v3->SsHandle == TppWorkpCleanupGroupMemberVFuncs
    && (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress == (_BYTE)a2) )
  {
    return TppWorkPost(v3);
  }
  else
  {
    return TppRaiseInvalidParameter(Ldr, a2, a3, v3);
  }
}
