/*
 * XREFs of ZwAddAtomEx @ 0x14041B3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAddAtomEx(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(AtomName);
}
