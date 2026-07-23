/*
 * XREFs of EtwSendNotification @ 0x180004BE0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpReceiveReplyDataBlock @ 0x180004D10 (EtwpReceiveReplyDataBlock.c)
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtTraceControl @ 0x1800A7A40 (NtTraceControl.c)
 */

ULONG __cdecl EtwSendNotification(
        PETW_NOTIFICATION_HEADER DataBlock,
        ULONG ReceiveDataBlockSize,
        PVOID ReceiveDataBlock,
        PULONG ReplyReceived,
        PULONG ReplySizeNeeded)
{
  BOOLEAN ReplyRequested; // bp
  int v7; // r14d
  ULONG Timeout; // esi
  NTSTATUS v11; // eax
  int v12; // r8d
  ULONG v13; // edi
  ULONG ReplyCount; // r9d
  void *Reserved2; // rbp
  ULONG v17; // r10d
  char *v18; // rax
  ETW_NOTIFICATION_TYPE OutputBuffer; // [rsp+40h] [rbp-E8h]
  ULONG ReturnLength; // [rsp+50h] [rbp-D8h] BYREF
  char v21; // [rsp+58h] [rbp-D0h] BYREF

  ReplyRequested = DataBlock->ReplyRequested;
  v7 = (int)ReceiveDataBlock;
  Timeout = DataBlock->Timeout;
  if ( ReplyRequested == 1 )
  {
    DataBlock->Reserved2 = 0LL;
    if ( !Timeout )
      Timeout = 60000;
  }
  v11 = NtTraceControl(EtwSendDataBlock, DataBlock, DataBlock->NotificationSize, DataBlock, 0x48u, &ReturnLength);
  if ( v11 )
    v13 = RtlNtStatusToDosError(v11);
  else
    v13 = 0;
  if ( ReplyRequested )
  {
    ReplyCount = DataBlock->ReplyCount;
    if ( !v13 )
    {
      Reserved2 = (void *)DataBlock->Reserved2;
      if ( ReplyCount )
      {
        v17 = 120;
        OutputBuffer = DataBlock->NotificationType;
        v18 = &v21;
        if ( DataBlock->NotificationType != EtwNotificationTypeEnable )
        {
          v17 = ReceiveDataBlockSize;
          LODWORD(v18) = v7;
        }
        LOBYTE(v12) = OutputBuffer == EtwNotificationTypeEnable;
        v13 = EtwpReceiveReplyDataBlock(
                (int)Reserved2,
                Timeout,
                v12,
                ReplyCount,
                (ULONG)v18,
                v17,
                (__int64)ReplyReceived,
                (__int64)ReplySizeNeeded,
                OutputBuffer);
      }
      if ( Reserved2 )
        NtClose(Reserved2);
    }
  }
  return v13;
}
