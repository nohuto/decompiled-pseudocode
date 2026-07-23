/*
 * XREFs of RtlCreateUserProcessEx @ 0x140B68E40
 * Callers:
 *     StartFirstUserProcess @ 0x140B68C34 (StartFirstUserProcess.c)
 * Callees:
 *     RtlpCreateUserProcess @ 0x140B68EBC (RtlpCreateUserProcess.c)
 */

NTSTATUS __cdecl RtlCreateUserProcessEx(
        PUNICODE_STRING NtImagePathName,
        PRTL_USER_PROCESS_PARAMETERS ProcessParameters,
        BOOLEAN InheritHandles,
        PRTL_USER_PROCESS_EXTENDED_PARAMETERS ProcessExtendedParameters,
        PRTL_USER_PROCESS_INFORMATION ProcessInformation)
{
  unsigned int Flags; // r10d
  unsigned int v7; // edx
  __int64 v8; // r8
  wchar_t *Buffer; // rax
  wchar_t *v11; // rax
  wchar_t *v12; // rax
  wchar_t *v13; // rax
  wchar_t *v14; // rax
  wchar_t *v15; // rax
  wchar_t *v16; // rax
  wchar_t *v17; // rax
  wchar_t *v18; // rax

  if ( !NtImagePathName || !ProcessParameters )
    return -1073741811;
  Flags = ProcessParameters->Flags;
  if ( (Flags & 1) == 0 )
  {
    Buffer = ProcessParameters->CurrentDirectory.DosPath.Buffer;
    if ( Buffer )
      ProcessParameters->CurrentDirectory.DosPath.Buffer = (wchar_t *)((char *)Buffer + (_QWORD)ProcessParameters);
    v11 = ProcessParameters->DllPath.Buffer;
    if ( v11 )
      ProcessParameters->DllPath.Buffer = (wchar_t *)((char *)v11 + (_QWORD)ProcessParameters);
    v12 = ProcessParameters->ImagePathName.Buffer;
    if ( v12 )
      ProcessParameters->ImagePathName.Buffer = (wchar_t *)((char *)v12 + (_QWORD)ProcessParameters);
    v13 = ProcessParameters->CommandLine.Buffer;
    if ( v13 )
      ProcessParameters->CommandLine.Buffer = (wchar_t *)((char *)v13 + (_QWORD)ProcessParameters);
    v14 = ProcessParameters->WindowTitle.Buffer;
    if ( v14 )
      ProcessParameters->WindowTitle.Buffer = (wchar_t *)((char *)v14 + (_QWORD)ProcessParameters);
    v15 = ProcessParameters->DesktopInfo.Buffer;
    if ( v15 )
      ProcessParameters->DesktopInfo.Buffer = (wchar_t *)((char *)v15 + (_QWORD)ProcessParameters);
    v16 = ProcessParameters->ShellInfo.Buffer;
    if ( v16 )
      ProcessParameters->ShellInfo.Buffer = (wchar_t *)((char *)v16 + (_QWORD)ProcessParameters);
    v17 = ProcessParameters->RuntimeData.Buffer;
    if ( v17 )
      ProcessParameters->RuntimeData.Buffer = (wchar_t *)((char *)v17 + (_QWORD)ProcessParameters);
    v18 = ProcessParameters->RedirectionDllName.Buffer;
    if ( v18 )
      ProcessParameters->RedirectionDllName.Buffer = (wchar_t *)((char *)v18 + (_QWORD)ProcessParameters);
    Flags |= 1u;
    ProcessParameters->Flags = Flags;
  }
  ProcessParameters->CurrentDirectory.Handle = 0LL;
  v7 = (Flags >> 11) & 0x80 | 0x40;
  if ( (Flags & 0x400000) == 0 )
    v7 = (Flags >> 11) & 0x80;
  v8 = v7;
  LODWORD(v8) = v7 | 0x40000;
  if ( (Flags & 0x800000) == 0 )
    v8 = v7;
  return RtlpCreateUserProcess(NtImagePathName, ProcessParameters, v8);
}
