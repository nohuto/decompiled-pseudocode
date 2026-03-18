/*
 * XREFs of SepGetScopedPolicySid @ 0x1405B7BF4
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140228CE0 (SepCommonAccessCheckEx.c)
 *     SeComputeCreatorDeniedRights @ 0x14022F320 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheckWithHint @ 0x1402316C0 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x1402B3AC0 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C1070 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlFindAceByType @ 0x1402AD1F0 (RtlFindAceByType.c)
 */

unsigned __int8 *__fastcall SepGetScopedPolicySid(__int64 a1)
{
  unsigned __int8 *result; // rax
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  while ( 1 )
  {
    result = RtlFindAceByType(a1, 19, &v3);
    if ( result )
    {
      if ( (result[1] & 8) == 0 )
        break;
    }
    ++v3;
    if ( !result )
      return result;
  }
  result += 8;
  return result;
}
