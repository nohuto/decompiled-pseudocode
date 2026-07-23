/*
 * XREFs of EtwpCreateEtwThread @ 0x18005EEC0
 * Callers:
 *     EtwpStartUmLogger @ 0x18005EB9C (EtwpStartUmLogger.c)
 * Callees:
 *     RtlCreateUserThread @ 0x18005F280 (RtlCreateUserThread.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     ZwResumeThread @ 0x18009F830 (ZwResumeThread.c)
 *     NtTerminateThread @ 0x18009F850 (NtTerminateThread.c)
 */

HANDLE __fastcall EtwpCreateEtwThread(NTSTATUS (__cdecl *a1)(PVOID), void *a2)
{
  HANDLE v2; // rbx
  int v3; // eax
  HANDLE ThreadHandle; // [rsp+70h] [rbp+18h] BYREF

  if ( RtlCreateUserThread((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 1u, 0, 0LL, 0LL, a1, a2, &ThreadHandle, 0LL) < 0 )
    return 0LL;
  v2 = ThreadHandle;
  v3 = ZwResumeThread(ThreadHandle, 0LL);
  if ( v3 < 0 )
  {
    NtTerminateThread(v2, v3);
    NtClose(v2);
    return 0LL;
  }
  return v2;
}
