/*
 * XREFs of SSHSupportQueryInterruptTime @ 0x14032D604
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x1407A82B0 (SleepstudyHelperBuildBlocker.c)
 *     SshpWnfCallback @ 0x140878AE0 (SshpWnfCallback.c)
 *     SshpSessionManagerInterruptTimeToSystemTime @ 0x1409A1E84 (SshpSessionManagerInterruptTimeToSystemTime.c)
 * Callees:
 *     <none>
 */

__int64 SSHSupportQueryInterruptTime()
{
  return MEMORY[0xFFFFF78000000008];
}
