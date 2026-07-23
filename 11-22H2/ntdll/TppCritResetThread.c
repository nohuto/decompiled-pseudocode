/*
 * XREFs of TppCritResetThread @ 0x180081504
 * Callers:
 *     TppWorkerThread @ 0x180035760 (TppWorkerThread.c)
 * Callees:
 *     NtSetInformationThread @ 0x18009EF90 (NtSetInformationThread.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtSetInformationObject @ 0x18009F960 (NtSetInformationObject.c)
 */

NTSTATUS __fastcall TppCritResetThread(void *a1)
{
  NTSTATUS result; // eax
  HANDLE ThreadInformation; // [rsp+30h] [rbp+8h] BYREF
  __int16 ObjectInformation; // [rsp+38h] [rbp+10h] BYREF
  int v4; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
  {
    ThreadInformation = a1;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    v4 = 0;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBreakOnTermination, &v4, 4u);
    ObjectInformation = 0;
    NtSetInformationObject(ThreadInformation, ObjectHandleFlagInformation, &ObjectInformation, 2u);
    NtClose(ThreadInformation);
    ThreadInformation = 0LL;
    return NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  }
  return result;
}
