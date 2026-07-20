/*
 * XREFs of SwitchedCloseHandleNoRaiseUMException_WinBLUE @ 0x140013A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int SwitchedCloseHandleNoRaiseUMException_WinBLUE()
{
  __int64 v0; // rax
  int v1; // ecx
  int ProcessInformation; // [rsp+30h] [rbp+8h] BYREF

  v0 = *(_QWORD *)&KeGetPcr()->MajorVersion;
  if ( *(_BYTE *)(v0 + 2) != 1 && dword_14002AEDC )
  {
    ProcessInformation = 0;
    LODWORD(v0) = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessDebugPort|0x40, &ProcessInformation, 4u);
    v1 = dword_14002AEDC;
    if ( !(_DWORD)v0 )
      v1 = 0;
    dword_14002AEDC = v1;
  }
  return v0;
}
