/*
 * XREFs of DbgUiIssueRemoteBreakin @ 0x1800D7DE0
 * Callers:
 *     DbgUiDebugActiveProcess @ 0x1800D7D50 (DbgUiDebugActiveProcess.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x18005C2F0 (RtlpCreateUserThreadEx.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 */

__int64 __fastcall DbgUiIssueRemoteBreakin(__int64 a1)
{
  int v1; // ebx
  __int64 v3; // [rsp+30h] [rbp-48h]
  __int128 v4; // [rsp+60h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+10h] BYREF

  v1 = RtlpCreateUserThreadEx(a1, 0LL, 2, 0, 0LL, 0x4000LL, v3, (__int64)DbgUiRemoteBreakin, 0LL, &Handle, &v4);
  if ( v1 >= 0 )
    NtClose(Handle);
  return (unsigned int)v1;
}
