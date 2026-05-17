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

HANDLE __fastcall EtwpCreateEtwThread(__int64 a1, __int64 a2)
{
  HANDLE v2; // rbx
  int v3; // eax
  HANDLE Handle; // [rsp+70h] [rbp+18h] BYREF

  if ( (int)RtlCreateUserThread(-1, 0, 1, 0, 0LL, 0LL, a1, a2, (__int64)&Handle, 0LL) < 0 )
    return 0LL;
  v2 = Handle;
  v3 = ZwResumeThread(Handle, 0LL);
  if ( v3 < 0 )
  {
    NtTerminateThread(v2, (unsigned int)v3);
    NtClose(v2);
    return 0LL;
  }
  return v2;
}
