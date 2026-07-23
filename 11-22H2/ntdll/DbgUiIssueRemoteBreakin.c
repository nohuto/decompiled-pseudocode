/*
 * XREFs of DbgUiIssueRemoteBreakin @ 0x1800D8430
 * Callers:
 *     DbgUiDebugActiveProcess @ 0x1800D83A0 (DbgUiDebugActiveProcess.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x18005F2F0 (RtlpCreateUserThreadEx.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 */

NTSTATUS __cdecl DbgUiIssueRemoteBreakin(HANDLE Process)
{
  int v1; // ebx
  int v3; // [rsp+30h] [rbp-48h]
  __int128 v4; // [rsp+60h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+10h] BYREF

  v1 = RtlpCreateUserThreadEx(
         Process,
         0LL,
         2,
         0,
         0LL,
         0x4000uLL,
         v3,
         (PUSER_THREAD_START_ROUTINE)DbgUiRemoteBreakin,
         0LL,
         &Handle,
         &v4);
  if ( v1 >= 0 )
    NtClose(Handle);
  return v1;
}
