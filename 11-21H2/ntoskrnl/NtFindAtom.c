/*
 * XREFs of NtFindAtom @ 0x1406F68C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140281830 @ 0x140281830 (sub_140281830.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406F8074 @ 0x1406F8074 (sub_1406F8074.c)
 *     RtlLookupAtomInAtomTable @ 0x1407A0C90 (RtlLookupAtomInAtomTable.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtFindAtom(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom)
{
  size_t v4; // rbx
  _RTL_RUN_ONCE *v6; // rax
  char v7; // r15
  WCHAR *v8; // r14
  __int64 v9; // rcx
  NTSTATUS result; // eax
  USHORT Atoma; // [rsp+20h] [rbp-258h] BYREF
  PVOID AtomTableHandle; // [rsp+28h] [rbp-250h] BYREF
  PWSTR v13; // [rsp+30h] [rbp-248h]
  int v14; // [rsp+38h] [rbp-240h]
  _WORD v15[256]; // [rsp+40h] [rbp-238h] BYREF

  v4 = Length;
  AtomTableHandle = 0LL;
  Atoma = 0;
  v14 = 0;
  v6 = sub_140281830();
  sub_1406F8074(v6, 2LL, &AtomTableHandle);
  if ( !AtomTableHandle )
    return -1073741790;
  if ( (unsigned int)v4 > 0x1FE )
    return -1073741811;
  v7 = *((_BYTE *)KeGetCurrentThread() + 562);
  v8 = AtomName;
  v13 = AtomName;
  if ( v7 )
  {
    if ( Atom )
    {
      v9 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)Atom < 0x7FFFFFFF0000LL )
        v9 = (__int64)Atom;
      *(_WORD *)v9 = *(_WORD *)v9;
      v8 = v13;
    }
    if ( AtomName )
    {
      if ( (_DWORD)v4 )
      {
        if ( ((unsigned __int8)AtomName & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)AtomName + v4 > 0x7FFFFFFF0000LL || (PWSTR)((char *)AtomName + v4) < AtomName )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v8 = v15;
      v13 = v15;
      memmove(v15, AtomName, v4);
      v15[v4 >> 1] = 0;
    }
  }
  result = RtlLookupAtomInAtomTable(AtomTableHandle, v8, &Atoma);
  if ( Atom )
  {
    if ( result >= 0 )
      *Atom = Atoma;
  }
  return result;
}
