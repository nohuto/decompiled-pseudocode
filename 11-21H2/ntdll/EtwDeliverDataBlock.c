/*
 * XREFs of EtwDeliverDataBlock @ 0x180007500
 * Callers:
 *     EtwpSendSessionNotification @ 0x18000730C (EtwpSendSessionNotification.c)
 *     EtwpNotificationThread @ 0x1800073C0 (EtwpNotificationThread.c)
 * Callees:
 *     EtwpGetNextRegistration @ 0x180007898 (EtwpGetNextRegistration.c)
 *     EtwpProcessNotification @ 0x180007988 (EtwpProcessNotification.c)
 *     EtwpFindRegistration @ 0x180007A58 (EtwpFindRegistration.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180007B1C (EtwpDereferenceUmGuidEntry.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x180007BA4 (EtwpAcquireGuidEntryExclusive.c)
 *     EtwpReferenceUmGuidEntry @ 0x180007BD4 (EtwpReferenceUmGuidEntry.c)
 *     EtwpAllocateUmGuidEntry @ 0x180007BF8 (EtwpAllocateUmGuidEntry.c)
 *     EtwReplyNotification @ 0x180007D40 (EtwReplyNotification.c)
 *     EtwpFindGuidEntry @ 0x180016878 (EtwpFindGuidEntry.c)
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 */

__int64 __fastcall EtwDeliverDataBlock(PETW_NOTIFICATION_HEADER Notification)
{
  ULONG v2; // r14d
  char v3; // r12
  char v4; // r13
  char v5; // si
  char v6; // r15
  bool v7; // zf
  _RTL_SRWLOCK *Registration; // rax
  __int64 NextRegistration; // rdi
  char v10; // r15
  ULONGLONG v11; // r13
  __int64 GuidEntry; // rsi
  __int64 v14; // rax
  char v15; // dl
  _BYTE *v16; // rax
  int v17; // r9d
  unsigned int v18; // ecx
  __int64 v19; // rax
  _BYTE *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r8
  ULONG Timeout; // [rsp+30h] [rbp-18h]
  _QWORD v24[2]; // [rsp+38h] [rbp-10h] BYREF
  char v25; // [rsp+90h] [rbp+48h]
  char v26; // [rsp+98h] [rbp+50h] BYREF
  BOOLEAN ReplyRequested; // [rsp+A0h] [rbp+58h]
  ULONG v28; // [rsp+A8h] [rbp+60h] BYREF

  v24[0] = 0LL;
  v2 = 0;
  v28 = 0;
  v3 = 0;
  v26 = 0;
  v4 = 0;
  v5 = 0;
  ReplyRequested = Notification->ReplyRequested;
  v6 = 0;
  Timeout = Notification->Timeout;
  v7 = Notification->NotificationType == EtwNotificationTypeEnable;
  v25 = 0;
  EtwpReplySend = 0;
  if ( v7 && (Notification[1].NotificationSize & 0x80000000) != 0 )
  {
    v6 = 1;
    LODWORD(Notification->Reserved2) = -1;
  }
  if ( LODWORD(Notification->Reserved2) != -1 )
  {
    Registration = (_RTL_SRWLOCK *)EtwpFindRegistration(&Notification->DestinationGuid, LOWORD(Notification->Reserved2));
    NextRegistration = (__int64)Registration;
    if ( Registration )
    {
      RtlAcquireSRWLockExclusive(Registration + 8);
      v10 = 1;
      *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
      EtwpProcessNotification(NextRegistration, Notification, v24, &v28, &v26);
      v11 = v24[0];
      v2 = v28;
      v3 = v26;
      goto LABEL_7;
    }
    v10 = 0;
LABEL_58:
    LODWORD(GuidEntry) = 0;
    goto LABEL_51;
  }
  LODWORD(GuidEntry) = 0;
  NextRegistration = ((__int64 (*)(void))EtwpGetNextRegistration)();
  if ( !NextRegistration )
  {
LABEL_19:
    if ( v6 )
    {
      if ( PrivateLoggerNotificationEntry )
      {
        v11 = *(_QWORD *)(PrivateLoggerNotificationEntry + 88);
        if ( Notification[1].NotificationType != EtwNotificationTypeLegacyEnable )
        {
          GuidEntry = EtwpFindGuidEntry(&Notification->DestinationGuid);
          if ( GuidEntry )
            goto LABEL_25;
          if ( Notification[1].NotificationType )
          {
            GuidEntry = EtwpAllocateUmGuidEntry(&Notification->DestinationGuid);
            if ( !GuidEntry )
            {
              v10 = v25;
              goto LABEL_58;
            }
LABEL_25:
            EtwpAcquireGuidEntryExclusive(GuidEntry);
            v15 = BYTE2(Notification[1].NotificationSize);
            v16 = (_BYTE *)(GuidEntry + 78);
            v17 = 0;
            v18 = 0;
            while ( !*(v16 - 2) || *v16 != v15 )
            {
              ++v18;
              v16 += 24;
              if ( v18 >= 4 )
                goto LABEL_28;
            }
            v22 = GuidEntry + 8 * (v18 + 2LL * v18 + 7);
            if ( !v22 )
            {
LABEL_28:
              if ( !Notification[1].NotificationType )
                goto LABEL_34;
              v19 = 0LL;
              v20 = (_BYTE *)(GuidEntry + 76);
              while ( *v20 )
              {
                v19 = (unsigned int)(v19 + 1);
                v20 += 24;
                if ( (unsigned int)v19 >= 4 )
                  goto LABEL_34;
              }
              v21 = GuidEntry + 8 * (v19 + 2 * v19 + 7);
              if ( !v21 )
              {
LABEL_34:
                if ( HIBYTE(Notification[1].TargetPID) == 1 )
                {
                  *(_QWORD *)(GuidEntry + 152) = *(_QWORD *)&Notification[1].TargetPID;
                  *(_DWORD *)(GuidEntry + 160) = Notification[1].NotificationType;
                }
                *(_DWORD *)(GuidEntry + 48) = v17;
                RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(GuidEntry + 40));
                EtwpDereferenceUmGuidEntry((PRTL_BALANCED_NODE)GuidEntry);
                v10 = v25;
                v5 = 1;
LABEL_7:
                if ( v3 || v5 )
                {
                  LODWORD(GuidEntry) = 0;
                  goto LABEL_9;
                }
                goto LABEL_58;
              }
              *(_BYTE *)(v21 + 22) = v15;
              EtwpReferenceUmGuidEntry(GuidEntry);
            }
            *(_QWORD *)v22 = Notification[1].Reserved2;
            *(_QWORD *)(v22 + 8) = *(_QWORD *)&Notification[1].Timeout;
            *(_BYTE *)(v22 + 21) = Notification[1].NotificationSize;
            *(_DWORD *)(v22 + 16) = Notification[1].Offset;
            *(_BYTE *)(v22 + 20) = Notification[1].NotificationType != v17;
            goto LABEL_34;
          }
        }
      }
    }
    v10 = v25;
LABEL_51:
    v2 = 4201;
    goto LABEL_10;
  }
  do
  {
    v14 = *(_QWORD *)&Notification->DestinationGuid.Data1 - *(_QWORD *)(NextRegistration + 32);
    if ( !v14 )
      v14 = *(_QWORD *)Notification->DestinationGuid.Data4 - *(_QWORD *)(NextRegistration + 40);
    if ( v14 )
      goto LABEL_17;
    if ( *(_DWORD *)(NextRegistration + 80) != LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(NextRegistration + 64));
      v4 = 1;
      *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    }
    if ( (unsigned __int8)EtwpProcessNotification(NextRegistration, Notification, v24, &v28, &v26) )
      break;
    if ( v4 )
    {
      *(_DWORD *)(NextRegistration + 80) = 0;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(NextRegistration + 64));
      v4 = 0;
    }
LABEL_17:
    NextRegistration = EtwpGetNextRegistration(NextRegistration);
  }
  while ( NextRegistration );
  v3 = v26;
  v2 = v28;
  v25 = v4;
  if ( !v26 )
    goto LABEL_19;
  v11 = v24[0];
  v10 = v25;
LABEL_9:
  if ( ReplyRequested == 1 && !EtwpReplySend )
  {
    if ( v2 )
    {
      Notification->NotificationType = EtwNotificationTypeNoReply;
LABEL_55:
      Notification->NotificationSize = 72;
    }
    else if ( Notification->NotificationType == EtwNotificationTypeEnable )
    {
      goto LABEL_55;
    }
    Notification->Timeout = Timeout;
    Notification->ReplyRequested = 0;
    Notification->Reserved2 = v11;
    v2 = EtwReplyNotification(Notification);
  }
LABEL_10:
  if ( v10 )
  {
    *(_DWORD *)(NextRegistration + 80) = GuidEntry;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(NextRegistration + 64));
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(NextRegistration + 72));
  }
  return v2;
}
