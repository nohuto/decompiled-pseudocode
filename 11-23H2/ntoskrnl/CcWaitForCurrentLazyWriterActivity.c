/*
 * XREFs of CcWaitForCurrentLazyWriterActivity @ 0x1403D7030
 * Callers:
 *     PopGracefulShutdown @ 0x140AA0A60 (PopGracefulShutdown.c)
 * Callees:
 *     CcForEachPartition @ 0x140310DCC (CcForEachPartition.c)
 */

NTSTATUS CcWaitForCurrentLazyWriterActivity(void)
{
  NTSTATUS v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  CcForEachPartition(
    (unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64))CcWaitForCurrentLazyWriterActivityHelper,
    (__int64)&v1,
    0,
    0);
  return v1;
}
