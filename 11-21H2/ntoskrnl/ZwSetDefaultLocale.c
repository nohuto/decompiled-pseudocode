/*
 * XREFs of ZwSetDefaultLocale @ 0x14041EA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetDefaultLocale(BOOLEAN UserProfile, LCID DefaultLocaleId)
{
  _disable();
  __readeflags();
  return sub_140433F80(UserProfile, *(_QWORD *)&DefaultLocaleId);
}
