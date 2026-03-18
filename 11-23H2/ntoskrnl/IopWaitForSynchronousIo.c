/*
 * XREFs of IopWaitForSynchronousIo @ 0x1402F86F4
 * Callers:
 *     NtSetInformationFile @ 0x1402A6BF0 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x140725070 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x14075D28C (IopQueryXxxInformation.c)
 * Callees:
 *     IopWaitForSynchronousIoEvent @ 0x14040FDE0 (IopWaitForSynchronousIoEvent.c)
 */

__int64 __fastcall IopWaitForSynchronousIo(IRP *a1, __int64 a2)
{
  IopWaitForSynchronousIoEvent(a1);
  return *(unsigned int *)(a2 + 56);
}
