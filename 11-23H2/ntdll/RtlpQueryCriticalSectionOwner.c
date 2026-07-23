/*
 * XREFs of RtlpQueryCriticalSectionOwner @ 0x1800E42EC
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180001320 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenProcess @ 0x1800A1370 (NtOpenProcess.c)
 *     RtlpQueryCriticalSectionOwner32 @ 0x1800E43EC (RtlpQueryCriticalSectionOwner32.c)
 *     RtlpQueryCriticalSectionOwner64 @ 0x1800E448C (RtlpQueryCriticalSectionOwner64.c)
 *     RtlpQueryProcessMachine @ 0x1800E484C (RtlpQueryProcessMachine.c)
 */

__int64 __fastcall RtlpQueryCriticalSectionOwner(void *a1, __int64 a2)
{
  NTSTATUS v3; // ebx
  __int64 CriticalSectionOwner32; // rax
  _CLIENT_ID ClientId; // [rsp+20h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int16 v8; // [rsp+78h] [rbp+18h] BYREF
  HANDLE ProcessHandle; // [rsp+80h] [rbp+20h] BYREF

  ProcessHandle = 0LL;
  if ( !*(_QWORD *)(a2 + 160) )
    return (unsigned int)-1073741811;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  ClientId.UniqueThread = 0LL;
  ClientId.UniqueProcess = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Length = 48;
  v3 = NtOpenProcess(&ProcessHandle, 0x1010u, &ObjectAttributes, &ClientId);
  if ( v3 >= 0 )
  {
    v3 = RtlpQueryProcessMachine(ProcessHandle, &v8);
    if ( v3 >= 0 )
    {
      if ( v8 == 332 || v8 == 452 )
      {
        CriticalSectionOwner32 = RtlpQueryCriticalSectionOwner32(ProcessHandle);
      }
      else
      {
        if ( v8 != 34404 && v8 != 43620 )
        {
          v3 = -1073741811;
          goto LABEL_13;
        }
        CriticalSectionOwner32 = RtlpQueryCriticalSectionOwner64(ProcessHandle);
      }
      *(_QWORD *)(a2 + 168) = CriticalSectionOwner32;
      v3 = 0;
    }
  }
LABEL_13:
  if ( ProcessHandle )
    NtClose(ProcessHandle);
  return (unsigned int)v3;
}
