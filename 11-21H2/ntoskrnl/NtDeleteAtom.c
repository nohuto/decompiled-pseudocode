/*
 * XREFs of NtDeleteAtom @ 0x1406AB2D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteAtomFromAtomTable @ 0x1406AB320 (RtlDeleteAtomFromAtomTable.c)
 *     sub_1406F83A0 @ 0x1406F83A0 (sub_1406F83A0.c)
 */

NTSTATUS __cdecl NtDeleteAtom(RTL_ATOM Atom)
{
  PVOID AtomTableHandle; // [rsp+38h] [rbp+10h] BYREF

  AtomTableHandle = 0LL;
  sub_1406F83A0(2LL, &AtomTableHandle, 0LL, 0LL);
  if ( AtomTableHandle )
    return RtlDeleteAtomFromAtomTable(AtomTableHandle, Atom);
  else
    return -1073741790;
}
