/*
 * XREFs of NtFindAtom @ 0x140717D10
 * Callers:
 *     <none>
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x140214EC0 (MmSessionGetWin32Callouts.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     ExCallCallBack @ 0x1406AF8E4 (ExCallCallBack.c)
 *     RtlLookupAtomInAtomTable @ 0x140717E80 (RtlLookupAtomInAtomTable.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtFindAtom(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom)
{
  size_t v4; // rbx
  _RTL_RUN_ONCE *Win32Callouts; // rax
  char PreviousMode; // r15
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
  Win32Callouts = MmSessionGetWin32Callouts();
  ExCallCallBack((signed __int64 *)Win32Callouts, 2LL, (__int64)&AtomTableHandle);
  if ( !AtomTableHandle )
    return -1073741790;
  if ( (unsigned int)v4 > 0x1FE )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = AtomName;
  v13 = AtomName;
  if ( PreviousMode )
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
