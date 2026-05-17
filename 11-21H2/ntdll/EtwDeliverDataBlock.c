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

__int64 __fastcall EtwDeliverDataBlock(__int64 a1)
{
  unsigned int v2; // r14d
  char v3; // r12
  char v4; // r13
  char v5; // si
  char v6; // r15
  bool v7; // zf
  __int64 Registration; // rax
  __int64 NextRegistration; // rdi
  char v10; // r15
  __int64 v11; // r13
  __int64 v13; // rax
  __int64 GuidEntry; // rsi
  char v15; // dl
  _BYTE *v16; // rax
  int v17; // r9d
  unsigned int v18; // ecx
  __int64 v19; // rax
  _BYTE *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r8
  int v23; // [rsp+30h] [rbp-18h]
  _QWORD v24[2]; // [rsp+38h] [rbp-10h] BYREF
  char v25; // [rsp+90h] [rbp+48h]
  char v26; // [rsp+98h] [rbp+50h] BYREF
  char v27; // [rsp+A0h] [rbp+58h]
  unsigned int v28; // [rsp+A8h] [rbp+60h] BYREF

  v24[0] = 0LL;
  v2 = 0;
  v28 = 0;
  v3 = 0;
  v26 = 0;
  v4 = 0;
  v5 = 0;
  v27 = *(_BYTE *)(a1 + 12);
  v6 = 0;
  v23 = *(_DWORD *)(a1 + 16);
  v7 = *(_DWORD *)a1 == 3;
  v25 = 0;
  EtwpReplySend = 0;
  if ( v7 && *(__int16 *)(a1 + 78) < 0 )
  {
    v6 = 1;
    *(_DWORD *)(a1 + 24) = -1;
  }
  if ( *(_DWORD *)(a1 + 24) != -1 )
  {
    Registration = EtwpFindRegistration(a1 + 40, *(unsigned __int16 *)(a1 + 24));
    NextRegistration = Registration;
    if ( Registration )
    {
      RtlAcquireSRWLockExclusive(Registration + 64);
      v10 = 1;
      *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
      EtwpProcessNotification(NextRegistration, a1, v24, &v28, &v26);
      v11 = v24[0];
      v2 = v28;
      v3 = v26;
      goto LABEL_7;
    }
    v10 = 0;
LABEL_50:
    v2 = 4201;
    goto LABEL_9;
  }
  NextRegistration = ((__int64 (*)(void))EtwpGetNextRegistration)();
  if ( !NextRegistration )
  {
LABEL_18:
    if ( v6 )
    {
      if ( PrivateLoggerNotificationEntry )
      {
        v11 = *(_QWORD *)(PrivateLoggerNotificationEntry + 88);
        if ( *(_DWORD *)(a1 + 72) != 2 )
        {
          GuidEntry = EtwpFindGuidEntry((void *)(a1 + 40));
          if ( GuidEntry )
            goto LABEL_24;
          if ( *(_DWORD *)(a1 + 72) )
          {
            GuidEntry = EtwpAllocateUmGuidEntry(a1 + 40);
            if ( !GuidEntry )
            {
              v10 = v25;
              goto LABEL_50;
            }
LABEL_24:
            EtwpAcquireGuidEntryExclusive(GuidEntry);
            v15 = *(_BYTE *)(a1 + 78);
            v16 = (_BYTE *)(GuidEntry + 78);
            v17 = 0;
            v18 = 0;
            while ( !*(v16 - 2) || *v16 != v15 )
            {
              ++v18;
              v16 += 24;
              if ( v18 >= 4 )
                goto LABEL_27;
            }
            v22 = GuidEntry + 8 * (v18 + 2LL * v18 + 7);
            if ( !v22 )
            {
LABEL_27:
              if ( !*(_DWORD *)(a1 + 72) )
                goto LABEL_33;
              v19 = 0LL;
              v20 = (_BYTE *)(GuidEntry + 76);
              while ( *v20 )
              {
                v19 = (unsigned int)(v19 + 1);
                v20 += 24;
                if ( (unsigned int)v19 >= 4 )
                  goto LABEL_33;
              }
              v21 = GuidEntry + 8 * (v19 + 2 * v19 + 7);
              if ( !v21 )
              {
LABEL_33:
                if ( *(_BYTE *)(a1 + 107) == 1 )
                {
                  *(_QWORD *)(GuidEntry + 152) = *(_QWORD *)(a1 + 104);
                  *(_DWORD *)(GuidEntry + 160) = *(_DWORD *)(a1 + 72);
                }
                *(_DWORD *)(GuidEntry + 48) = v17;
                RtlReleaseSRWLockExclusive(GuidEntry + 40);
                EtwpDereferenceUmGuidEntry(GuidEntry);
                v10 = v25;
                v5 = 1;
LABEL_7:
                if ( v3 || v5 )
                  goto LABEL_8;
                goto LABEL_50;
              }
              *(_BYTE *)(v21 + 22) = v15;
              EtwpReferenceUmGuidEntry(GuidEntry);
            }
            *(_QWORD *)v22 = *(_QWORD *)(a1 + 96);
            *(_QWORD *)(v22 + 8) = *(_QWORD *)(a1 + 88);
            *(_BYTE *)(v22 + 21) = *(_BYTE *)(a1 + 76);
            *(_DWORD *)(v22 + 16) = *(_DWORD *)(a1 + 80);
            *(_BYTE *)(v22 + 20) = *(_DWORD *)(a1 + 72) != v17;
            goto LABEL_33;
          }
        }
      }
    }
    v10 = v25;
    goto LABEL_50;
  }
  do
  {
    v13 = *(_QWORD *)(a1 + 40) - *(_QWORD *)(NextRegistration + 32);
    if ( !v13 )
      v13 = *(_QWORD *)(a1 + 48) - *(_QWORD *)(NextRegistration + 40);
    if ( v13 )
      goto LABEL_16;
    if ( *(_DWORD *)(NextRegistration + 80) != LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    {
      RtlAcquireSRWLockExclusive(NextRegistration + 64);
      v4 = 1;
      *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    }
    if ( (unsigned __int8)EtwpProcessNotification(NextRegistration, a1, v24, &v28, &v26) )
      break;
    if ( v4 )
    {
      *(_DWORD *)(NextRegistration + 80) = 0;
      RtlReleaseSRWLockExclusive(NextRegistration + 64);
      v4 = 0;
    }
LABEL_16:
    NextRegistration = EtwpGetNextRegistration(NextRegistration);
  }
  while ( NextRegistration );
  v3 = v26;
  v2 = v28;
  v25 = v4;
  if ( !v26 )
    goto LABEL_18;
  v11 = v24[0];
  v10 = v25;
LABEL_8:
  if ( v27 == 1 && !EtwpReplySend )
  {
    if ( v2 )
    {
      *(_DWORD *)a1 = 1;
LABEL_54:
      *(_DWORD *)(a1 + 4) = 72;
    }
    else if ( *(_DWORD *)a1 == 3 )
    {
      goto LABEL_54;
    }
    *(_DWORD *)(a1 + 16) = v23;
    *(_BYTE *)(a1 + 12) = 0;
    *(_QWORD *)(a1 + 24) = v11;
    v2 = EtwReplyNotification(a1);
  }
LABEL_9:
  if ( v10 )
  {
    *(_DWORD *)(NextRegistration + 80) = 0;
    RtlReleaseSRWLockExclusive(NextRegistration + 64);
    RtlReleaseSRWLockShared(NextRegistration + 72);
  }
  return v2;
}
