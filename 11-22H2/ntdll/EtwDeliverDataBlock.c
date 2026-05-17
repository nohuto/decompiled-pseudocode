/*
 * XREFs of EtwDeliverDataBlock @ 0x180061670
 * Callers:
 *     EtwpSendSessionNotification @ 0x1800612EC (EtwpSendSessionNotification.c)
 *     EtwpNotificationThread @ 0x180061530 (EtwpNotificationThread.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     EtwpFindGuidEntry @ 0x1800324AC (EtwpFindGuidEntry.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     EtwpGetNextRegistration @ 0x180061A44 (EtwpGetNextRegistration.c)
 *     EtwpProcessNotification @ 0x180061B34 (EtwpProcessNotification.c)
 *     EtwpFindRegistration @ 0x180061C1C (EtwpFindRegistration.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x180061CE0 (EtwpAcquireGuidEntryExclusive.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180061D10 (EtwpDereferenceUmGuidEntry.c)
 *     EtwpReferenceUmGuidEntry @ 0x180061D98 (EtwpReferenceUmGuidEntry.c)
 *     EtwpAllocateUmGuidEntry @ 0x180061DBC (EtwpAllocateUmGuidEntry.c)
 *     EtwReplyNotification @ 0x180061F10 (EtwReplyNotification.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18007C4B4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18007C6EC (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

__int64 __fastcall EtwDeliverDataBlock(int *a1)
{
  unsigned int v2; // r14d
  char v3; // r13
  bool v4; // zf
  char v5; // si
  char v6; // r12
  __int64 Registration; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 NextRegistration; // rdi
  char v11; // r15
  __int64 v12; // r12
  _QWORD *v14; // r15
  char v15; // r12
  __int64 v16; // rax
  _QWORD *GuidEntry; // rsi
  char v18; // dl
  _BYTE *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  _BYTE *v22; // rcx
  _QWORD *v23; // r8
  _QWORD *v24; // r8
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  char v28; // [rsp+38h] [rbp-49h]
  char v29; // [rsp+39h] [rbp-48h] BYREF
  char v30; // [rsp+3Ah] [rbp-47h]
  char v31; // [rsp+3Bh] [rbp-46h]
  unsigned int v32; // [rsp+3Ch] [rbp-45h] BYREF
  int v33; // [rsp+40h] [rbp-41h] BYREF
  _QWORD v34[2]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v35[32]; // [rsp+58h] [rbp-29h] BYREF
  int *v36; // [rsp+78h] [rbp-9h]
  int v37; // [rsp+80h] [rbp-1h]
  int v38; // [rsp+84h] [rbp+3h]
  int *v39; // [rsp+88h] [rbp+7h]
  int v40; // [rsp+90h] [rbp+Fh]
  int v41; // [rsp+94h] [rbp+13h]
  unsigned int *v42; // [rsp+98h] [rbp+17h]
  int v43; // [rsp+A0h] [rbp+1Fh]
  int v44; // [rsp+A4h] [rbp+23h]

  v31 = *((_BYTE *)a1 + 12);
  v2 = 0;
  v33 = a1[4];
  v3 = 0;
  v34[0] = 0LL;
  v4 = *a1 == 3;
  v5 = 0;
  v32 = 0;
  v6 = 0;
  v29 = 0;
  v28 = 0;
  v30 = 0;
  if ( v4 && *((__int16 *)a1 + 39) < 0 )
  {
    v6 = 1;
    a1[6] = -1;
    v30 = 1;
  }
  if ( a1[6] != -1 )
  {
    Registration = EtwpFindRegistration(a1 + 10, *((unsigned __int16 *)a1 + 12));
    NextRegistration = Registration;
    if ( Registration )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(Registration + 64));
      v11 = 1;
      *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
      EtwpProcessNotification(NextRegistration, a1, v34, &v32, &v29);
      v12 = v34[0];
      v2 = v32;
      v3 = v29;
      goto LABEL_7;
    }
    v11 = 0;
    goto LABEL_56;
  }
  v14 = a1 + 10;
  NextRegistration = EtwpGetNextRegistration(0LL);
  if ( !NextRegistration )
  {
LABEL_19:
    if ( v6 )
    {
      if ( PrivateLoggerNotificationEntry )
      {
        v12 = *(_QWORD *)(PrivateLoggerNotificationEntry + 88);
        if ( a1[18] != 2 )
        {
          GuidEntry = EtwpFindGuidEntry((_QWORD *)a1 + 5);
          if ( GuidEntry || a1[18] && (GuidEntry = (_QWORD *)EtwpAllocateUmGuidEntry(a1 + 10)) != 0LL )
          {
            EtwpAcquireGuidEntryExclusive(GuidEntry);
            v18 = *((_BYTE *)a1 + 78);
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
              if ( !a1[18] )
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
                if ( *((_BYTE *)a1 + 107) == 1 )
                {
                  GuidEntry[19] = *((_QWORD *)a1 + 13);
                  *((_DWORD *)GuidEntry + 40) = a1[18];
                }
                *((_DWORD *)GuidEntry + 12) = 0;
                RtlReleaseSRWLockExclusive(GuidEntry + 5);
                EtwpDereferenceUmGuidEntry(GuidEntry);
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
            *v24 = *((_QWORD *)a1 + 12);
            v24[1] = *((_QWORD *)a1 + 11);
            *((_BYTE *)v24 + 21) = *((_BYTE *)a1 + 76);
            *((_DWORD *)v24 + 4) = a1[20];
            *((_BYTE *)v24 + 20) = a1[18] != 0;
            goto LABEL_34;
          }
        }
      }
    }
    v11 = v28;
LABEL_56:
    v2 = 4201;
    if ( v31 && (unsigned int)dword_18017E3C8 > 3 && (unsigned __int8)tlgKeywordOn(&dword_18017E3C8, 9LL, v8, v9) )
    {
      v38 = 0;
      v41 = 0;
      v44 = 0;
      v36 = a1 + 10;
      v33 = *a1;
      v39 = &v33;
      v32 = a1[6];
      v42 = &v32;
      v40 = 4;
      v43 = 4;
      v37 = 16;
      tlgWriteTransfer_EtwEventWriteTransfer(v25, (unsigned int)&unk_18014B34E, v26, v27, 5, (__int64)v35);
    }
    goto LABEL_9;
  }
  v15 = 0;
  do
  {
    v16 = *v14 - *(_QWORD *)(NextRegistration + 32);
    if ( *v14 == *(_QWORD *)(NextRegistration + 32) )
      v16 = *((_QWORD *)a1 + 6) - *(_QWORD *)(NextRegistration + 40);
    if ( v16 )
      goto LABEL_17;
    if ( *(_DWORD *)(NextRegistration + 80) != LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(NextRegistration + 64));
      v15 = 1;
      *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    }
    if ( (unsigned __int8)EtwpProcessNotification(NextRegistration, a1, v34, &v32, &v29) )
      break;
    if ( v15 )
    {
      *(_DWORD *)(NextRegistration + 80) = 0;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(NextRegistration + 64));
      v15 = 0;
    }
LABEL_17:
    NextRegistration = EtwpGetNextRegistration(NextRegistration);
  }
  while ( NextRegistration );
  v3 = v29;
  v2 = v32;
  v28 = v15;
  v6 = v30;
  if ( !v29 )
    goto LABEL_19;
  v12 = v34[0];
  v11 = v28;
LABEL_8:
  if ( v31 == 1 )
  {
    if ( v2 )
    {
      *a1 = 1;
      a1[1] = 72;
    }
    if ( *a1 == 3 )
      a1[1] = 72;
    a1[4] = v33;
    *((_BYTE *)a1 + 12) = 0;
    *((_QWORD *)a1 + 3) = v12;
    v2 = EtwReplyNotification(a1);
  }
LABEL_9:
  if ( v11 )
  {
    *(_DWORD *)(NextRegistration + 80) = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(NextRegistration + 64));
    RtlReleaseSRWLockShared((volatile signed __int64 *)(NextRegistration + 72));
  }
  return v2;
}
