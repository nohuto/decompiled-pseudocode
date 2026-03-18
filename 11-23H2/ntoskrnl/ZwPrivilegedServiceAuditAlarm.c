/*
 * XREFs of ZwPrivilegedServiceAuditAlarm @ 0x14041D5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwPrivilegedServiceAuditAlarm(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
