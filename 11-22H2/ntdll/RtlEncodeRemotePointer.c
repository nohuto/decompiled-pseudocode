/*
 * XREFs of RtlEncodeRemotePointer @ 0x1800E6B70
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationProcess @ 0x18009F110 (NtQueryInformationProcess.c)
 */

NTSTATUS __cdecl RtlEncodeRemotePointer(HANDLE ProcessHandle, PVOID Pointer, PVOID *EncodedPointer)
{
  NTSTATUS v3; // ebx
  NTSTATUS v6; // eax
  unsigned int v8; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v6 = NtQueryInformationProcess(ProcessHandle, ProcessCookie, &v8, 4u, 0LL);
  if ( v6 < 0 )
    return v6 | 0x10000000;
  *EncodedPointer = (PVOID)__ROR8__((unsigned __int64)Pointer ^ v8, v8 & 0x3F);
  return v3;
}
