/*
 * XREFs of SepAdtRegNotificationCallback @ 0x140801600
 * Callers:
 *     <none>
 * Callees:
 *     NtNotifyChangeKey @ 0x1407679E0 (NtNotifyChangeKey.c)
 *     SepAdtInitializeCrashOnFail @ 0x140841F94 (SepAdtInitializeCrashOnFail.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x1408428B8 (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeBounds @ 0x140842918 (SepAdtInitializeBounds.c)
 */

NTSTATUS SepAdtRegNotificationCallback()
{
  SepAdtInitializeCrashOnFail();
  SepAdtInitializePrivilegeAuditing();
  SepAdtInitializeBounds();
  return NtNotifyChangeKey(
           SepAdtRegNotifyHandle,
           0LL,
           SepAdtLsaRegWatchWorkItem,
           (PVOID)1,
           &SepAdtIoStatusBlock,
           5u,
           0,
           0LL,
           0,
           1u);
}
