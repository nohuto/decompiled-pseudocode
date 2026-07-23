/*
 * XREFs of NtAddAtom @ 0x140A029E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406BFED0 @ 0x1406BFED0 (sub_1406BFED0.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtAddAtom(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom)
{
  return sub_1406BFED0(AtomName, *(size_t *)&Length, Atom, 0);
}
