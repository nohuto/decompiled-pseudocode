/*
 * XREFs of NtDeleteAtom @ 0x1407E9940
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteAtomFromAtomTable @ 0x14069EA50 (RtlDeleteAtomFromAtomTable.c)
 *     PsInvokeWin32Callout @ 0x1406AF850 (PsInvokeWin32Callout.c)
 */

NTSTATUS __cdecl NtDeleteAtom(RTL_ATOM Atom)
{
  PVOID AtomTableHandle; // [rsp+38h] [rbp+10h] BYREF

  AtomTableHandle = 0LL;
  PsInvokeWin32Callout(2, (__int64)&AtomTableHandle, 0, 0LL);
  if ( AtomTableHandle )
    return RtlDeleteAtomFromAtomTable(AtomTableHandle, Atom);
  else
    return -1073741790;
}
