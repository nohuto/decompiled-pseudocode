/*
 * XREFs of SepGetScopedPolicySid @ 0x1405B8164
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140228DF0 (SepCommonAccessCheckEx.c)
 *     SeComputeCreatorDeniedRights @ 0x14022F430 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheckWithHint @ 0x140231790 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x1402B3D50 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10A0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlFindAceByType @ 0x1402AD480 (RtlFindAceByType.c)
 */

_BYTE *__fastcall SepGetScopedPolicySid(PACL Acl)
{
  _BYTE *result; // rax
  ULONG Index; // [rsp+38h] [rbp+10h] BYREF

  Index = 0;
  while ( 1 )
  {
    result = RtlFindAceByType(Acl, 0x13u, &Index);
    if ( result )
    {
      if ( (result[1] & 8) == 0 )
        break;
    }
    ++Index;
    if ( !result )
      return result;
  }
  result += 8;
  return result;
}
