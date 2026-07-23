/*
 * XREFs of SSHSupportAllocatePaged @ 0x14069376C
 * Callers:
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x1402099A0 (SleepstudyHelperCreateBlockerFromGuid.c)
 *     SleepstudyHelperSetBlockerFriendlyName @ 0x140209A80 (SleepstudyHelperSetBlockerFriendlyName.c)
 *     SshpCopyDataEntry @ 0x1405A3170 (SshpCopyDataEntry.c)
 *     SshpWriteBlocker @ 0x1405A32B0 (SshpWriteBlocker.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SSHSupportAllocatePaged(__int64 a1, unsigned int a2)
{
  return ExAllocatePool2(256LL, a1, a2);
}
