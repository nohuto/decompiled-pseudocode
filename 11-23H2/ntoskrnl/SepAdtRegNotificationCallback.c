/*
 * XREFs of SepAdtRegNotificationCallback @ 0x140801330
 * Callers:
 *     <none>
 * Callees:
 *     NtNotifyChangeKey @ 0x1407677F0 (NtNotifyChangeKey.c)
 *     SepAdtInitializeCrashOnFail @ 0x140841C94 (SepAdtInitializeCrashOnFail.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x1408425B8 (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeBounds @ 0x140842618 (SepAdtInitializeBounds.c)
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
