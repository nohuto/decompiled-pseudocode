/*
 * XREFs of SwitchedCloseHandleRaiseUMException_Current @ 0x140013A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void SwitchedCloseHandleRaiseUMException_Current()
{
  NTSTATUS v0; // eax
  int v1; // ecx
  int ProcessInformation; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_14002AEDC != 1 )
  {
    ProcessInformation = 1;
    v0 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessDebugPort|0x40, &ProcessInformation, 4u);
    v1 = dword_14002AEDC;
    if ( !v0 )
      v1 = 1;
    dword_14002AEDC = v1;
  }
}
