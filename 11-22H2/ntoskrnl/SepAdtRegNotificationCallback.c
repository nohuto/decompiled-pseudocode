/*
 * XREFs of SepAdtRegNotificationCallback @ 0x1408019E0
 * Callers:
 *     <none>
 * Callees:
 *     NtNotifyChangeKey @ 0x140767D00 (NtNotifyChangeKey.c)
 *     SepAdtInitializeCrashOnFail @ 0x140843A24 (SepAdtInitializeCrashOnFail.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x140844348 (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeBounds @ 0x1408443A8 (SepAdtInitializeBounds.c)
 */

__int64 SepAdtRegNotificationCallback()
{
  SepAdtInitializeCrashOnFail();
  SepAdtInitializePrivilegeAuditing();
  SepAdtInitializeBounds();
  return NtNotifyChangeKey(
           SepAdtRegNotifyHandle,
           0LL,
           (void (__stdcall *)(POPLOCK))&SepAdtLsaRegWatchWorkItem,
           1LL,
           SepAdtIoStatusBlock,
           5u,
           0,
           0LL,
           0,
           1);
}
