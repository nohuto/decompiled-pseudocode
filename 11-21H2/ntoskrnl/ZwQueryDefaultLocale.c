/*
 * XREFs of ZwQueryDefaultLocale @ 0x14041BA00
 * Callers:
 *     sub_140623B60 @ 0x140623B60 (sub_140623B60.c)
 *     sub_1406C40E0 @ 0x1406C40E0 (sub_1406C40E0.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwQueryDefaultLocale(BOOLEAN UserProfile, PLCID DefaultLocaleId)
{
  _disable();
  __readeflags();
  return sub_140433F80(UserProfile, DefaultLocaleId);
}
