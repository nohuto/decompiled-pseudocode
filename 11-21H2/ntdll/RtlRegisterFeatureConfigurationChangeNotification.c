/*
 * XREFs of RtlRegisterFeatureConfigurationChangeNotification @ 0x1800598A0
 * Callers:
 *     <none>
 * Callees:
 *     TpPostWork @ 0x18001B690 (TpPostWork.c)
 *     RtlpFcInsertChangeRegistration @ 0x180059928 (RtlpFcInsertChangeRegistration.c)
 *     RtlpFcAllocateChangeRegistration @ 0x18005997C (RtlpFcAllocateChangeRegistration.c)
 *     RtlpFcEnsureSubscriptionManagerStarted @ 0x180059A04 (RtlpFcEnsureSubscriptionManagerStarted.c)
 */

__int64 __fastcall RtlRegisterFeatureConfigurationChangeNotification(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8

  if ( byte_18017A188 )
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
