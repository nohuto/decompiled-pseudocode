/*
 * XREFs of EtwpCheckNotificationAccess @ 0x140781CE8
 * Callers:
 *     EtwpValidateEnableNotification @ 0x140780818 (EtwpValidateEnableNotification.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1409ECDA8 (EtwpUpdatePeriodicCaptureState.c)
 * Callees:
 *     EtwpCheckGuidAccess @ 0x140781D54 (EtwpCheckGuidAccess.c)
 *     EtwCheckSecurityLoggerAccess @ 0x1407FC44C (EtwCheckSecurityLoggerAccess.c)
 */

__int64 __fastcall EtwpCheckNotificationAccess(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  unsigned int v6; // ecx
  __int64 v7; // rax

  result = EtwpCheckGuidAccess(a1, 128LL, 0LL);
  if ( (int)result >= 0 )
  {
    result = EtwpCheckGuidAccess(a2, 128LL, 0LL);
    v6 = result;
    if ( (int)result >= 0 )
    {
      v7 = *a1 - s_ProviderThreatInt;
      if ( *a1 == s_ProviderThreatInt )
        v7 = a1[1] - 0x44D38D4D0F04D8F1LL;
      if ( !v7 )
      {
        LOBYTE(v5) = KeGetCurrentThread()->PreviousMode;
        return (unsigned int)EtwCheckSecurityLoggerAccess(KeGetCurrentThread()->ApcState.Process, v5);
      }
      return v6;
    }
  }
  return result;
}
