/*
 * XREFs of IopWaitForSynchronousIo @ 0x1402F86F4
 * Callers:
 *     NtSetInformationFile @ 0x1402A6AD0 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x1407250E0 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x14075D79C (IopQueryXxxInformation.c)
 * Callees:
 *     IopWaitForSynchronousIoEvent @ 0x14040F674 (IopWaitForSynchronousIoEvent.c)
 */

__int64 __fastcall IopWaitForSynchronousIo(IRP *a1, __int64 a2)
{
  IopWaitForSynchronousIoEvent(a1);
  return *(unsigned int *)(a2 + 56);
}
