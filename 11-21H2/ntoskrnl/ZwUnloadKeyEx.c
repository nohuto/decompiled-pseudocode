/*
 * XREFs of ZwUnloadKeyEx @ 0x14041F200
 * Callers:
 *     sub_1407F405C @ 0x1407F405C (sub_1407F405C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  _disable();
  __readeflags();
  return sub_140433F80(TargetKey, Event);
}
