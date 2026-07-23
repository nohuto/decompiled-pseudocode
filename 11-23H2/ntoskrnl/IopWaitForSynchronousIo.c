/*
 * XREFs of IopWaitForSynchronousIo @ 0x1402F8984
 * Callers:
 *     NtSetInformationFile @ 0x1402A6E80 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x140725270 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x14075D47C (IopQueryXxxInformation.c)
 * Callees:
 *     IopWaitForSynchronousIoEvent @ 0x14040FFC0 (IopWaitForSynchronousIoEvent.c)
 */

__int64 __fastcall IopWaitForSynchronousIo(IRP *a1, __int64 a2)
{
  IopWaitForSynchronousIoEvent(a1);
  return *(unsigned int *)(a2 + 56);
}
