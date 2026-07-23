/*
 * XREFs of NtAddAtom @ 0x140A01850
 * Callers:
 *     <none>
 * Callees:
 *     NtAddAtomEx @ 0x1407D1D40 (NtAddAtomEx.c)
 */

NTSTATUS __cdecl NtAddAtom(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom)
{
  return NtAddAtomEx(AtomName, Length, Atom, 0);
}
