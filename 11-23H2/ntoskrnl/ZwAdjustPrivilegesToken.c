/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x14041B580
 * Callers:
 *     DifZwAdjustPrivilegesTokenWrapper @ 0x1405ECA60 (DifZwAdjustPrivilegesTokenWrapper.c)
 *     RtlAcquirePrivilege @ 0x1407D2B8C (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x1407DEF60 (RtlReleasePrivilege.c)
 *     BiAdjustPrivilege @ 0x14080618C (BiAdjustPrivilege.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAdjustPrivilegesToken(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
