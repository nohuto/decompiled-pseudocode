/*
 * XREFs of RtlSetEnvironmentVariable @ 0x18000D0B0
 * Callers:
 *     RtlpResetDriveEnvironment @ 0x18000B5E4 (RtlpResetDriveEnvironment.c)
 *     RtlpWow64ThunkEnvironmentTo64 @ 0x18000CD80 (RtlpWow64ThunkEnvironmentTo64.c)
 * Callees:
 *     RtlSetEnvironmentVar @ 0x18000D0F0 (RtlSetEnvironmentVar.c)
 */

NTSTATUS __cdecl RtlSetEnvironmentVariable(PVOID *Environment, PUNICODE_STRING Name, PUNICODE_STRING Value)
{
  wchar_t *Buffer; // r9
  SIZE_T ValueLength; // rax

  Buffer = 0LL;
  if ( Value )
  {
    Buffer = Value->Buffer;
    ValueLength = (unsigned __int64)Value->Length >> 1;
  }
  else
  {
    ValueLength = 0LL;
  }
  return RtlSetEnvironmentVar(Environment, Name->Buffer, (unsigned __int64)Name->Length >> 1, Buffer, ValueLength);
}
