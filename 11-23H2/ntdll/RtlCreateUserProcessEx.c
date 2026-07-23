/*
 * XREFs of RtlCreateUserProcessEx @ 0x180087BC0
 * Callers:
 *     RtlCreateUserProcess @ 0x1800ED630 (RtlCreateUserProcess.c)
 * Callees:
 *     RtlNormalizeProcessParams @ 0x180087C80 (RtlNormalizeProcessParams.c)
 *     RtlpCreateUserProcess @ 0x180087CA0 (RtlpCreateUserProcess.c)
 */

NTSTATUS __cdecl RtlCreateUserProcessEx(
        PUNICODE_STRING NtImagePathName,
        PRTL_USER_PROCESS_PARAMETERS ProcessParameters,
        BOOLEAN InheritHandles,
        PRTL_USER_PROCESS_EXTENDED_PARAMETERS ProcessExtendedParameters,
        PRTL_USER_PROCESS_INFORMATION ProcessInformation)
{
  PRTL_USER_PROCESS_PARAMETERS v8; // rax
  int v9; // edx
  unsigned int Flags; // r9d
  int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // r8

  if ( !NtImagePathName )
    return -1073741811;
  if ( !ProcessParameters )
    return -1073741811;
  v8 = RtlNormalizeProcessParams(ProcessParameters);
  if ( !v8 )
    return -1073741811;
  v9 = 0;
  if ( InheritHandles )
    v9 = 4;
  else
    v8->CurrentDirectory.Handle = 0LL;
  Flags = v8->Flags;
  v11 = v9 | 0x80;
  if ( (Flags & 0x40000) == 0 )
    v11 = v9;
  v12 = v11 | 0x40;
  if ( (Flags & 0x400000) == 0 )
    v12 = v11;
  v13 = v12 | 0x40000;
  if ( (Flags & 0x800000) == 0 )
    v13 = v12;
  return RtlpCreateUserProcess(NtImagePathName, v8, v13, 1LL, ProcessExtendedParameters, ProcessInformation);
}
