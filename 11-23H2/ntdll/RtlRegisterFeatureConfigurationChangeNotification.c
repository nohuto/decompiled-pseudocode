/*
 * XREFs of RtlRegisterFeatureConfigurationChangeNotification @ 0x180060D20
 * Callers:
 *     RtlpFtInitialize @ 0x18009F950 (RtlpFtInitialize.c)
 * Callees:
 *     TpPostWork @ 0x180034C20 (TpPostWork.c)
 *     RtlpFcAllocateChangeRegistration @ 0x180060DA8 (RtlpFcAllocateChangeRegistration.c)
 *     RtlpFcEnsureSubscriptionManagerStarted @ 0x180060E30 (RtlpFcEnsureSubscriptionManagerStarted.c)
 *     RtlpFcInsertChangeRegistration @ 0x18006110C (RtlpFcInsertChangeRegistration.c)
 */

__int64 __fastcall RtlRegisterFeatureConfigurationChangeNotification(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8

  if ( byte_180187488 )
    return 3221226238LL;
  result = RtlpFcEnsureSubscriptionManagerStarted();
  if ( (int)result >= 0 )
  {
    v9 = RtlpFcAllocateChangeRegistration(a1, a2);
    v11 = v9;
    if ( v9 )
    {
      RtlpFcInsertChangeRegistration(v10, v9);
      if ( a3 )
      {
        if ( MEMORY[0x7FFE0720] != *a3 )
          TpPostWork(*(_PEB_LDR_DATA **)(v11 + 40), v12, v13);
      }
      *a4 = v11;
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
