/*
 * XREFs of UserFindAtom @ 0x1C0096970
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 */

__int64 __fastcall UserFindAtom(PWSTR AtomName)
{
  NTSTATUS v1; // eax
  ULONG v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  USHORT Atom; // [rsp+38h] [rbp+10h] BYREF

  Atom = 0;
  v1 = RtlLookupAtomInAtomTable(UserAtomTableHandle, AtomName, &Atom);
  if ( (int)(v1 + 0x80000000) >= 0 && v1 != -1073741772 )
  {
    v3 = RtlNtStatusToDosError(v1);
    UserSetLastError(v3, v4, v5, v6);
  }
  return Atom;
}
