/*
 * XREFs of CarReportRuleViolationForTriage @ 0x140604030
 * Callers:
 *     CarReportRuleViolation @ 0x140603FF0 (CarReportRuleViolation.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 * Callees:
 *     sub_140602808 @ 0x140602808 (sub_140602808.c)
 *     CarCopyRuleViolationDetails @ 0x1406033F0 (CarCopyRuleViolationDetails.c)
 *     CarCreateRuleViolationDetails @ 0x140603630 (CarCreateRuleViolationDetails.c)
 *     sub_14060369C @ 0x14060369C (sub_14060369C.c)
 *     sub_140603744 @ 0x140603744 (sub_140603744.c)
 *     CarDeleteRuleViolationDetails @ 0x140603780 (CarDeleteRuleViolationDetails.c)
 *     CarQueryReportActionForTriage @ 0x140603BD0 (CarQueryReportActionForTriage.c)
 *     sub_1406051B0 @ 0x1406051B0 (sub_1406051B0.c)
 *     sub_140605280 @ 0x140605280 (sub_140605280.c)
 *     sub_1406055D0 @ 0x1406055D0 (sub_1406055D0.c)
 *     sub_140A81D70 @ 0x140A81D70 (sub_140A81D70.c)
 */

__int64 __fastcall CarReportRuleViolationForTriage(ULONG BugCheckCode, ULONG_PTR BugCheckParameter1, __int64 a3)
{
  unsigned int v4; // r15d
  int RuleViolationDetails; // ebx
  PVOID *v7; // rdi
  const CHAR *v8; // rsi
  __int64 v10; // [rsp+30h] [rbp-20h] BYREF
  PVOID *v11; // [rsp+38h] [rbp-18h] BYREF
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
      v7 = v11;
      if ( !a3 || (RuleViolationDetails = CarCopyRuleViolationDetails((__int64)v11, a3), RuleViolationDetails >= 0) )
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
          RuleViolationDetails = sub_14060369C(&v10, BugCheckCode, v4, (int)v7, (__int64)v8);
          if ( RuleViolationDetails >= 0 )
          {
            if ( v10 )
              RuleViolationDetails = sub_140602808(v10, v4, v8, KeGetCurrentIrql());
            else
              RuleViolationDetails = -1073741811;
          }
          sub_140605280(BugCheckCode, v4, v7, v10);
          switch ( (_DWORD)v12 )
          {
            case 2:
              RuleViolationDetails = sub_1406055D0(
                                       v10,
                                       v4,
                                       (unsigned int)*v7,
                                       (unsigned int)v7[1],
                                       (__int64)v7[2],
                                       (__int64)&v13);
              break;
            case 3:
              if ( v7[6] )
              {
                if ( (((unsigned __int8)sub_140A81D70() - 8) & 0xFB) != 0 )
                  sub_1406051B0(BugCheckCode, v4);
              }
              else
              {
                RuleViolationDetails = -1073741811;
              }
              break;
            case 4:
              sub_1406051B0(BugCheckCode, v4);
          }
          _InterlockedCompareExchange(&dword_140D04C00, 0, 1);
          if ( v13 )
          {
            sub_140603744((void **)&v10);
            _InterlockedCompareExchange(&dword_140C18EF8, 0, 1);
          }
          CarDeleteRuleViolationDetails(&v11);
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
