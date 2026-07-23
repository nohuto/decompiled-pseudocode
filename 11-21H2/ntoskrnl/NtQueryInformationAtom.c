/*
 * XREFs of NtQueryInformationAtom @ 0x1406C43F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406F83A0 @ 0x1406F83A0 (sub_1406F83A0.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     RtlQueryAtomInAtomTable @ 0x1407A0A30 (RtlQueryAtomInAtomTable.c)
 *     sub_1409B8DC8 @ 0x1409B8DC8 (sub_1409B8DC8.c)
 */

NTSTATUS __cdecl NtQueryInformationAtom(
        RTL_ATOM Atom,
        ATOM_INFORMATION_CLASS AtomInformationClass,
        PVOID AtomInformation,
        ULONG AtomInformationLength,
        PULONG ReturnLength)
{
  __int64 v9; // rcx
  ULONG v10; // ebx
  int v11; // edx
  ULONG v12; // eax
  ULONG AtomUsage; // [rsp+34h] [rbp-34h] BYREF
  ULONG AtomNameLength; // [rsp+38h] [rbp-30h] BYREF
  int v16; // [rsp+3Ch] [rbp-2Ch]
  ULONG AtomFlags; // [rsp+40h] [rbp-28h] BYREF
  PVOID AtomTableHandle; // [rsp+48h] [rbp-20h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-18h]

  AtomFlags = 0;
  AtomTableHandle = 0LL;
  AtomNameLength = 0;
  AtomUsage = 0;
  sub_1406F83A0(2LL, &AtomTableHandle, 0LL, 0LL);
  if ( !AtomTableHandle )
    return -1073741790;
  CurrentThread = KeGetCurrentThread();
  if ( *((_BYTE *)CurrentThread + 562) )
  {
    ProbeForWrite(AtomInformation, AtomInformationLength, 4u);
    if ( ReturnLength )
    {
      v9 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v9 = (__int64)ReturnLength;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
  }
  v10 = 0;
  if ( AtomInformationClass )
  {
    if ( AtomInformationClass == AtomTableInformation )
    {
      v10 = 4;
      if ( AtomInformationLength < 4 )
        return -1073741820;
      v11 = sub_1409B8DC8(
              AtomTableHandle,
              (AtomInformationLength - 4) >> 1,
              AtomInformation,
              (char *)AtomInformation + 4);
      v16 = v11;
      if ( v11 >= 0 )
        v10 = 2 * *(_DWORD *)AtomInformation + 4;
    }
    else
    {
      v11 = -1073741821;
      v16 = -1073741821;
    }
  }
  else
  {
    v10 = 6;
    if ( AtomInformationLength < 6 )
      return -1073741820;
    AtomUsage = 0;
    AtomNameLength = AtomInformationLength - 6;
    v11 = RtlQueryAtomInAtomTable(
            AtomTableHandle,
            Atom,
            &AtomUsage,
            &AtomFlags,
            (PWSTR)AtomInformation + 3,
            &AtomNameLength);
    v16 = v11;
    if ( v11 >= 0 )
    {
      *(_WORD *)AtomInformation = AtomUsage;
      *((_WORD *)AtomInformation + 1) = AtomFlags;
      v12 = AtomNameLength;
      *((_WORD *)AtomInformation + 2) = AtomNameLength;
      v10 = v12 + 8;
    }
  }
  if ( ReturnLength )
    *ReturnLength = v10;
  return v11;
}
