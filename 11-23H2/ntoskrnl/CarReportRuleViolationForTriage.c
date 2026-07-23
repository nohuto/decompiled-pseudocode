/*
 * XREFs of CarReportRuleViolationForTriage @ 0x1405D4930
 * Callers:
 *     CarReportRuleViolation @ 0x1405D48F0 (CarReportRuleViolation.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACD2A4 (VerifierBugCheckIfAppropriate.c)
 * Callees:
 *     CarEtwWriteBugCheckEvent @ 0x1405D311C (CarEtwWriteBugCheckEvent.c)
 *     CarCopyRuleViolationDetails @ 0x1405D3D00 (CarCopyRuleViolationDetails.c)
 *     CarCreateRuleViolationDetails @ 0x1405D3F40 (CarCreateRuleViolationDetails.c)
 *     CarCreateTelemetryData @ 0x1405D3FAC (CarCreateTelemetryData.c)
 *     CarDeleteTelemetryData @ 0x1405D4054 (CarDeleteTelemetryData.c)
 *     CarDeleteRuleViolationDetails @ 0x1405D4090 (CarDeleteRuleViolationDetails.c)
 *     CarQueryReportActionForTriage @ 0x1405D44D0 (CarQueryReportActionForTriage.c)
 *     CarInitiateBugcheck @ 0x1405D5DF4 (CarInitiateBugcheck.c)
 *     CarpSaveViolationSnapshot @ 0x1405D5EC4 (CarpSaveViolationSnapshot.c)
 *     CarWriteLivedump @ 0x1405D6210 (CarWriteLivedump.c)
 *     VfUtilGetSigningLevel @ 0x140AC2700 (VfUtilGetSigningLevel.c)
 */

__int64 __fastcall CarReportRuleViolationForTriage(ULONG BugCheckCode, ULONG_PTR BugCheckParameter1, __int64 a3)
{
  unsigned int v4; // r15d
  int RuleViolationDetails; // ebx
  _QWORD *v7; // rdi
  const CHAR *v8; // rsi
  __int64 v10; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+38h] [rbp-18h] BYREF
  __int64 v12; // [rsp+40h] [rbp-10h] BYREF
  char v13; // [rsp+98h] [rbp+48h] BYREF

  v13 = 1;
  v11 = 0LL;
  v10 = 0LL;
  v4 = BugCheckParameter1;
  v12 = 0LL;
  if ( KeGetCurrentIrql() <= 2u )
  {
    RuleViolationDetails = CarCreateRuleViolationDetails((PVOID *)&v11);
    if ( RuleViolationDetails >= 0 )
    {
      v7 = (_QWORD *)v11;
      if ( !a3 || (RuleViolationDetails = CarCopyRuleViolationDetails(v11, a3), RuleViolationDetails >= 0) )
      {
        if ( !v7 || (v8 = (const CHAR *)v7[3]) == 0LL )
        {
          switch ( BugCheckCode )
          {
            case 0xC4u:
              v8 = "DRIVER VERIFIER DETECTED VIOLATION";
              break;
            case 0xC9u:
              v8 = "DRIVER VERIFIER IOMANAGER VIOLATION";
              break;
            case 0xE6u:
              v8 = "DRIVER VERIFIER DMA VIOLATION";
              break;
            default:
              v8 = "UNKNOWN VIOLATION REPORTED VIA DRIVER VERIFIER";
              break;
          }
        }
        RuleViolationDetails = CarQueryReportActionForTriage(BugCheckCode, v4, &v12);
        if ( RuleViolationDetails >= 0 )
        {
          RuleViolationDetails = CarCreateTelemetryData(&v10, BugCheckCode, v4, (int)v7, (__int64)v8);
          if ( RuleViolationDetails >= 0 )
          {
            if ( v10 )
              RuleViolationDetails = CarEtwWriteBugCheckEvent(v10, v4, v8, KeGetCurrentIrql());
            else
              RuleViolationDetails = -1073741811;
          }
          CarpSaveViolationSnapshot(BugCheckCode, v4, v7, v10);
          switch ( (_DWORD)v12 )
          {
            case 2:
              RuleViolationDetails = CarWriteLivedump(v10, v4, *v7, v7[1], v7[2], (__int64)&v13);
              break;
            case 3:
              if ( v7[6] )
              {
                if ( (((unsigned __int8)VfUtilGetSigningLevel() - 8) & 0xFB) != 0 )
                  CarInitiateBugcheck(BugCheckCode, v4);
              }
              else
              {
                RuleViolationDetails = -1073741811;
              }
              break;
            case 4:
              CarInitiateBugcheck(BugCheckCode, v4);
          }
          _InterlockedCompareExchange(&CarIsViolationSnapshotTaken, 0, 1);
          if ( v13 )
          {
            CarDeleteTelemetryData((void **)&v10);
            _InterlockedCompareExchange(&CarLkdInProgress, 0, 1);
          }
          CarDeleteRuleViolationDetails((PVOID *)&v11);
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)RuleViolationDetails;
}
