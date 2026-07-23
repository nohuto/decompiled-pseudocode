/*
 * XREFs of EtwSendNotification @ 0x180052C30
 * Callers:
 *     <none>
 * Callees:
 *     EtwpReceiveReplyDataBlock @ 0x180052D84 (EtwpReceiveReplyDataBlock.c)
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18007C4B4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18007C6EC (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtTraceControl @ 0x1800A2840 (NtTraceControl.c)
 */

ULONG __cdecl EtwSendNotification(
        PETW_NOTIFICATION_HEADER DataBlock,
        ULONG ReceiveDataBlockSize,
        PVOID ReceiveDataBlock,
        PULONG ReplyReceived,
        PULONG ReplySizeNeeded)
{
  BOOLEAN ReplyRequested; // r14
  int v6; // r12d
  ULONG Timeout; // esi
  NTSTATUS v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  ULONG v13; // edi
  ULONG ReplyCount; // r15d
  void *Reserved2; // r14
  char *v17; // rax
  ULONG v18; // r10d
  int v19; // r9d
  int v20; // r8d
  int v21; // r9d
  ETW_NOTIFICATION_TYPE OutputBuffer; // [rsp+40h] [rbp-C0h]
  ULONG v23; // [rsp+50h] [rbp-B0h] BYREF
  ETW_NOTIFICATION_TYPE NotificationType; // [rsp+54h] [rbp-ACh] BYREF
  ETW_NOTIFICATION_TYPE v25; // [rsp+58h] [rbp-A8h] BYREF
  ULONG ReturnLength; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  char v29; // [rsp+70h] [rbp-90h] BYREF
  _EVENT_DATA_DESCRIPTOR v30; // [rsp+F0h] [rbp-10h] BYREF
  GUID *p_DestinationGuid; // [rsp+110h] [rbp+10h]
  __int64 v32; // [rsp+118h] [rbp+18h]
  ETW_NOTIFICATION_TYPE *p_NotificationType; // [rsp+120h] [rbp+20h]
  __int64 v34; // [rsp+128h] [rbp+28h]
  ULONG *v35; // [rsp+130h] [rbp+30h]
  __int64 v36; // [rsp+138h] [rbp+38h]
  ETW_NOTIFICATION_TYPE *v37; // [rsp+140h] [rbp+40h]
  __int64 v38; // [rsp+148h] [rbp+48h]

  ReplyRequested = DataBlock->ReplyRequested;
  v6 = (int)ReceiveDataBlock;
  Timeout = DataBlock->Timeout;
  v28 = (__int64)ReplyReceived;
  v27 = (__int64)ReplySizeNeeded;
  if ( ReplyRequested == 1 )
  {
    DataBlock->Reserved2 = 0LL;
    if ( !Timeout )
      Timeout = 60000;
  }
  v10 = NtTraceControl(EtwSendDataBlock, DataBlock, DataBlock->NotificationSize, DataBlock, 0x48u, &ReturnLength);
  v12 = 0LL;
  if ( v10 )
    v13 = RtlNtStatusToDosError(v10);
  else
    v13 = 0;
  if ( ReplyRequested )
  {
    ReplyCount = DataBlock->ReplyCount;
    if ( v13 )
    {
      if ( (unsigned int)dword_18017E3C8 > 2 && (unsigned __int8)tlgKeywordOn(&dword_18017E3C8, 10LL, v11, v12) )
      {
        v32 = 16LL;
        p_DestinationGuid = &DataBlock->DestinationGuid;
        NotificationType = DataBlock->NotificationType;
        p_NotificationType = &NotificationType;
        v35 = &v23;
        v34 = 4LL;
        v23 = v13;
        v36 = 4LL;
        tlgWriteTransfer_EtwEventWriteTransfer((int)&dword_18017E3C8, (int)&dword_18014B3AB, v20, v21, 5u, &v30);
      }
    }
    else
    {
      Reserved2 = (void *)DataBlock->Reserved2;
      if ( ReplyCount )
      {
        if ( (unsigned int)dword_18017E3C8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_18017E3C8, 10LL, v11, v12) )
        {
          v32 = 16LL;
          p_DestinationGuid = &DataBlock->DestinationGuid;
          v25 = DataBlock->NotificationType;
          v35 = &v23;
          p_NotificationType = &v25;
          v37 = &NotificationType;
          v34 = 4LL;
          v23 = ReplyCount;
          v36 = 4LL;
          NotificationType = Timeout;
          v38 = 4LL;
          tlgWriteTransfer_EtwEventWriteTransfer((int)&dword_18017E3C8, (int)&dword_18014B3FA, v11, v19, 6u, &v30);
        }
        v17 = &v29;
        OutputBuffer = DataBlock->NotificationType;
        v18 = 120;
        if ( DataBlock->NotificationType != EtwNotificationTypeEnable )
          v18 = ReceiveDataBlockSize;
        if ( OutputBuffer != EtwNotificationTypeEnable )
          LODWORD(v17) = v6;
        LOBYTE(v11) = OutputBuffer == EtwNotificationTypeEnable;
        v13 = EtwpReceiveReplyDataBlock(
                (int)Reserved2,
                Timeout,
                v11,
                ReplyCount,
                (ULONG)v17,
                v18,
                v28,
                v27,
                OutputBuffer);
      }
      if ( Reserved2 )
        NtClose(Reserved2);
    }
  }
  return v13;
}
