/*
 * XREFs of EtwDeliverDataBlock @ 0x18005E7E0
 * Callers:
 *     EtwpSendSessionNotification @ 0x18005E45C (EtwpSendSessionNotification.c)
 *     EtwpNotificationThread @ 0x18005E6A0 (EtwpNotificationThread.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     EtwpFindGuidEntry @ 0x18003234C (EtwpFindGuidEntry.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     EtwpGetNextRegistration @ 0x18005EBB4 (EtwpGetNextRegistration.c)
 *     EtwpProcessNotification @ 0x18005ECA4 (EtwpProcessNotification.c)
 *     EtwpFindRegistration @ 0x18005ED8C (EtwpFindRegistration.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x18005EE50 (EtwpAcquireGuidEntryExclusive.c)
 *     EtwpDereferenceUmGuidEntry @ 0x18005EE80 (EtwpDereferenceUmGuidEntry.c)
 *     EtwpReferenceUmGuidEntry @ 0x18005EF08 (EtwpReferenceUmGuidEntry.c)
 *     EtwpAllocateUmGuidEntry @ 0x18005EF2C (EtwpAllocateUmGuidEntry.c)
 *     EtwReplyNotification @ 0x18005F080 (EtwReplyNotification.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18007CB24 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18007CD5C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

__int64 __fastcall EtwDeliverDataBlock(PETW_NOTIFICATION_HEADER Notification)
{
  ULONG v2; // r14d
  char v3; // r13
  bool v4; // zf
  char v5; // si
  char v6; // r12
  _RTL_SRWLOCK *Registration; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 NextRegistration; // rdi
  char v11; // r15
  ULONGLONG v12; // r12
  GUID *p_DestinationGuid; // r15
  char v15; // r12
  __int64 v16; // rax
  _QWORD *GuidEntry; // rsi
  char v18; // dl
  _BYTE *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  _BYTE *v22; // rcx
  _QWORD *v23; // r8
  ULONGLONG *v24; // r8
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  char v28; // [rsp+38h] [rbp-49h]
  char v29; // [rsp+39h] [rbp-48h] BYREF
  char v30; // [rsp+3Ah] [rbp-47h]
  BOOLEAN ReplyRequested; // [rsp+3Bh] [rbp-46h]
  ULONG Reserved2; // [rsp+3Ch] [rbp-45h] BYREF
  ULONG Timeout; // [rsp+40h] [rbp-41h] BYREF
  _QWORD v34[2]; // [rsp+48h] [rbp-39h] BYREF
  _EVENT_DATA_DESCRIPTOR v35; // [rsp+58h] [rbp-29h] BYREF
  GUID *v36; // [rsp+78h] [rbp-9h]
  int v37; // [rsp+80h] [rbp-1h]
  int v38; // [rsp+84h] [rbp+3h]
  ULONG *p_Timeout; // [rsp+88h] [rbp+7h]
  int v40; // [rsp+90h] [rbp+Fh]
  int v41; // [rsp+94h] [rbp+13h]
  ULONG *p_Reserved2; // [rsp+98h] [rbp+17h]
  int v43; // [rsp+A0h] [rbp+1Fh]
  int v44; // [rsp+A4h] [rbp+23h]

  ReplyRequested = Notification->ReplyRequested;
  v2 = 0;
  Timeout = Notification->Timeout;
  v3 = 0;
  v34[0] = 0LL;
  v4 = Notification->NotificationType == EtwNotificationTypeEnable;
  v5 = 0;
  Reserved2 = 0;
  v6 = 0;
  v29 = 0;
  v28 = 0;
  v30 = 0;
  if ( v4 && (Notification[1].NotificationSize & 0x80000000) != 0 )
  {
    v6 = 1;
    LODWORD(Notification->Reserved2) = -1;
    v30 = 1;
  }
  if ( LODWORD(Notification->Reserved2) != -1 )
  {
    Registration = (_RTL_SRWLOCK *)EtwpFindRegistration(&Notification->DestinationGuid, LOWORD(Notification->Reserved2));
    NextRegistration = (__int64)Registration;
    if ( Registration )
    {
      RtlAcquireSRWLockExclusive(Registration + 8);
      v11 = 1;
      *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
      EtwpProcessNotification(NextRegistration, Notification, v34, &Reserved2, &v29);
      v12 = v34[0];
      v2 = Reserved2;
      v3 = v29;
      goto LABEL_7;
    }
    v11 = 0;
    goto LABEL_56;
  }
  p_DestinationGuid = &Notification->DestinationGuid;
  NextRegistration = EtwpGetNextRegistration(0LL);
  if ( !NextRegistration )
  {
LABEL_19:
    if ( v6 )
    {
      if ( PrivateLoggerNotificationEntry )
      {
        v12 = *(_QWORD *)(PrivateLoggerNotificationEntry + 88);
        if ( Notification[1].NotificationType != EtwNotificationTypeLegacyEnable )
        {
          GuidEntry = EtwpFindGuidEntry(&Notification->DestinationGuid.Data1);
          if ( GuidEntry
            || Notification[1].NotificationType
            && (GuidEntry = (_QWORD *)EtwpAllocateUmGuidEntry(&Notification->DestinationGuid)) != 0LL )
          {
            EtwpAcquireGuidEntryExclusive(GuidEntry);
            v18 = BYTE2(Notification[1].NotificationSize);
            v19 = (char *)GuidEntry + 78;
            v20 = 0LL;
            while ( !*(v19 - 2) || *v19 != v18 )
            {
              v20 = (unsigned int)(v20 + 1);
              v19 += 24;
              if ( (unsigned int)v20 >= 4 )
                goto LABEL_28;
            }
            v24 = &GuidEntry[2 * v20 + 7 + (unsigned int)v20];
            if ( !v24 )
            {
LABEL_28:
              if ( !Notification[1].NotificationType )
                goto LABEL_34;
              v21 = 0LL;
              v22 = (char *)GuidEntry + 76;
              while ( *v22 )
              {
                v21 = (unsigned int)(v21 + 1);
                v22 += 24;
                if ( (unsigned int)v21 >= 4 )
                  goto LABEL_34;
              }
              v23 = &GuidEntry[2 * v21 + 7 + v21];
              if ( !v23 )
              {
LABEL_34:
                if ( HIBYTE(Notification[1].TargetPID) == 1 )
                {
                  GuidEntry[19] = *(_QWORD *)&Notification[1].TargetPID;
                  *((_DWORD *)GuidEntry + 40) = Notification[1].NotificationType;
                }
                *((_DWORD *)GuidEntry + 12) = 0;
                RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)GuidEntry + 5);
                EtwpDereferenceUmGuidEntry((PRTL_BALANCED_NODE)GuidEntry);
                v11 = v28;
                v5 = 1;
LABEL_7:
                if ( v3 || v5 )
                  goto LABEL_8;
                goto LABEL_56;
              }
              *((_BYTE *)v23 + 22) = v18;
              EtwpReferenceUmGuidEntry(GuidEntry);
            }
            *v24 = Notification[1].Reserved2;
            v24[1] = *(_QWORD *)&Notification[1].Timeout;
            *((_BYTE *)v24 + 21) = Notification[1].NotificationSize;
            *((_DWORD *)v24 + 4) = Notification[1].Offset;
            *((_BYTE *)v24 + 20) = Notification[1].NotificationType != 0;
            goto LABEL_34;
          }
        }
      }
    }
    v11 = v28;
LABEL_56:
    v2 = 4201;
    if ( ReplyRequested
      && (unsigned int)dword_1801814A0 > 3
      && (unsigned __int8)tlgKeywordOn(&dword_1801814A0, 9LL, v8, v9) )
    {
      v38 = 0;
      v41 = 0;
      v44 = 0;
      v36 = &Notification->DestinationGuid;
      Timeout = Notification->NotificationType;
      p_Timeout = &Timeout;
      Reserved2 = Notification->Reserved2;
      p_Reserved2 = &Reserved2;
      v40 = 4;
      v43 = 4;
      v37 = 16;
      tlgWriteTransfer_EtwEventWriteTransfer(v25, (int)&dword_18014E74E, v26, v27, 5u, &v35);
    }
    goto LABEL_9;
  }
  v15 = 0;
  do
  {
    v16 = *(_QWORD *)&p_DestinationGuid->Data1 - *(_QWORD *)(NextRegistration + 32);
    if ( *(_QWORD *)&p_DestinationGuid->Data1 == *(_QWORD *)(NextRegistration + 32) )
      v16 = *(_QWORD *)Notification->DestinationGuid.Data4 - *(_QWORD *)(NextRegistration + 40);
    if ( v16 )
      goto LABEL_17;
    if ( *(_DWORD *)(NextRegistration + 80) != LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(NextRegistration + 64));
      v15 = 1;
      *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    }
    if ( (unsigned __int8)EtwpProcessNotification(NextRegistration, Notification, v34, &Reserved2, &v29) )
      break;
    if ( v15 )
    {
      *(_DWORD *)(NextRegistration + 80) = 0;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(NextRegistration + 64));
      v15 = 0;
    }
LABEL_17:
    NextRegistration = EtwpGetNextRegistration(NextRegistration);
  }
  while ( NextRegistration );
  v3 = v29;
  v2 = Reserved2;
  v28 = v15;
  v6 = v30;
  if ( !v29 )
    goto LABEL_19;
  v12 = v34[0];
  v11 = v28;
LABEL_8:
  if ( ReplyRequested == 1 )
  {
    if ( v2 )
    {
      Notification->NotificationType = EtwNotificationTypeNoReply;
      Notification->NotificationSize = 72;
    }
    if ( Notification->NotificationType == EtwNotificationTypeEnable )
      Notification->NotificationSize = 72;
    Notification->Timeout = Timeout;
    Notification->ReplyRequested = 0;
    Notification->Reserved2 = v12;
    v2 = EtwReplyNotification(Notification);
  }
LABEL_9:
  if ( v11 )
  {
    *(_DWORD *)(NextRegistration + 80) = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(NextRegistration + 64));
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(NextRegistration + 72));
  }
  return v2;
}
