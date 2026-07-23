/*
 * XREFs of RtlpWow64OpenThreadProcess @ 0x180001E4C
 * Callers:
 *     RtlpWow64SuspendThread @ 0x180001CA0 (RtlpWow64SuspendThread.c)
 * Callees:
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     ZwQueryInformationThread @ 0x1800A1350 (ZwQueryInformationThread.c)
 *     NtOpenProcess @ 0x1800A1370 (NtOpenProcess.c)
 *     ZwDuplicateObject @ 0x1800A1630 (ZwDuplicateObject.c)
 */

int __fastcall RtlpWow64OpenThreadProcess(HANDLE SourceHandle, __int64 a2, _QWORD *a3, HANDLE *a4, _CLIENT_ID *a5)
{
  int result; // eax
  NTSTATUS InformationThread; // ebx
  HANDLE TargetHandle; // [rsp+48h] [rbp-21h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-19h] BYREF
  _BYTE ThreadInformation[8]; // [rsp+80h] [rbp+17h] BYREF
  __int64 v12; // [rsp+88h] [rbp+1Fh]
  _CLIENT_ID ClientId; // [rsp+90h] [rbp+27h] BYREF

  result = ZwDuplicateObject(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             SourceHandle,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &TargetHandle,
             0x800u,
             0,
             0);
  if ( result >= 0 )
  {
    InformationThread = ZwQueryInformationThread(TargetHandle, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
    NtClose(TargetHandle);
    if ( InformationThread >= 0 )
    {
      if ( a5 )
        *a5 = ClientId;
      if ( a3 )
        *a3 = v12;
      if ( a4 )
      {
        if ( ClientId.UniqueProcess == NtCurrentTeb()->ClientId.UniqueProcess )
        {
          *a4 = (HANDLE)-1LL;
        }
        else
        {
          memset(&ObjectAttributes.RootDirectory, 0, 20);
          ObjectAttributes.Length = 48;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          return NtOpenProcess(a4, 0x452u, &ObjectAttributes, &ClientId);
        }
      }
    }
    return InformationThread;
  }
  return result;
}
