/*
 * XREFs of PsspDumpObject_Thread @ 0x1801296C0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18009F290 (ZwQueryInformationThread.c)
 */

NTSTATUS __fastcall PsspDumpObject_Thread(
        HANDLE ThreadHandle,
        char *ThreadInformation,
        unsigned int a3,
        ULONG *ReturnLength)
{
  NTSTATUS result; // eax

  *ReturnLength = 0;
  if ( a3 < 0x38 )
    return -1073741789;
  result = ZwQueryInformationThread(ThreadHandle, ThreadBasicInformation, ThreadInformation, 0x30u, ReturnLength);
  if ( result < 0
    || (result = ZwQueryInformationThread(
                   ThreadHandle,
                   ThreadQuerySetWin32StartAddress,
                   ThreadInformation + 48,
                   8u,
                   0LL),
        result < 0) )
  {
    *ReturnLength = 0;
  }
  else
  {
    *ReturnLength += 8;
  }
  return result;
}
