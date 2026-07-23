/*
 * XREFs of SepSidFromProcessProtection @ 0x1402B3600
 * Callers:
 *     SepSetTrustLevelForProcessToken @ 0x140224C2C (SepSetTrustLevelForProcessToken.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x1402B3100 (SepReferenceTokenUsingPseudoHandle.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x1402B35A4 (SepReconcileTrustSidWithProcessProtection.c)
 * Callees:
 *     <none>
 */

PSID __fastcall SepSidFromProcessProtection(_BYTE *a1)
{
  __int64 v1; // r8

  v1 = 0LL;
  switch ( *a1 )
  {
    case 0x12:
      return (PSID)SeProcTrustAuthenticodeSid;
    case 0x31:
      return (PSID)SeProcTrustLiteAntimalwareSid;
    case 0x51:
      return (PSID)SeProcTrustLiteWinSid;
    case 0x52:
      return (PSID)SeProcTrustWinSid;
    case 0x61:
      return (PSID)SeProcTrustLiteWinTcbSid;
    case 0x62:
    case 0x72:
      return SeProcTrustWinTcbSid;
  }
  if ( (unsigned __int8)*a1 == 129 )
    return (PSID)SeProcTrustLiteAppSid;
  return (PSID)v1;
}
