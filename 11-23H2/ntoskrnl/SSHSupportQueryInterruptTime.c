/*
 * XREFs of SSHSupportQueryInterruptTime @ 0x14032D374
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x1407A80C0 (SleepstudyHelperBuildBlocker.c)
 *     SshpWnfCallback @ 0x1408788A0 (SshpWnfCallback.c)
 *     SshpSessionManagerInterruptTimeToSystemTime @ 0x1409A1C84 (SshpSessionManagerInterruptTimeToSystemTime.c)
 * Callees:
 *     <none>
 */

__int64 SSHSupportQueryInterruptTime()
{
  return MEMORY[0xFFFFF78000000008];
}
