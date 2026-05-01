/*
 * XREFs of CrmRegistrationReadyQueueAdd @ 0x1800313CC
 * Callers:
 *     CrmActivityListenerCallback @ 0x1800315E0 (CrmActivityListenerCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

int __fastcall CrmRegistrationReadyQueueAdd(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  DWORD CurrentThreadId; // eax
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  char v8; // dl
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rax
  unsigned __int8 *v12; // rdx
  ULONG v14; // [rsp+20h] [rbp-79h]
  char v15; // [rsp+30h] [rbp-69h] BYREF
  int v16; // [rsp+38h] [rbp-61h] BYREF
  int v17; // [rsp+40h] [rbp-59h] BYREF
  __int64 v18; // [rsp+48h] [rbp-51h] BYREF
  __int64 v19; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+60h] [rbp-39h] BYREF
  UUID *v21; // [rsp+80h] [rbp-19h]
  __int64 v22; // [rsp+88h] [rbp-11h]
  __int64 *v23; // [rsp+90h] [rbp-9h]
  __int64 v24; // [rsp+98h] [rbp-1h]
  char *v25; // [rsp+A0h] [rbp+7h]
  __int64 v26; // [rsp+A8h] [rbp+Fh]
  int *v27; // [rsp+B0h] [rbp+17h]
  __int64 v28; // [rsp+B8h] [rbp+1Fh]
  __int64 *v29; // [rsp+C0h] [rbp+27h]
  __int64 v30; // [rsp+C8h] [rbp+2Fh]

  v2 = *(_QWORD *)(a1 + 16);
  RtlAcquireSRWLockExclusive(&unk_1800DD1A0);
  CurrentThreadId = GetCurrentThreadId();
  v6 = (_QWORD *)qword_1800DD1B8;
  dword_1800DD1A8 = CurrentThreadId;
  v7 = (_QWORD *)(a2 + 24);
  if ( *(__int64 **)qword_1800DD1B8 != &qword_1800DD1B0 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 32) = qword_1800DD1B8;
  *v7 = &qword_1800DD1B0;
  *v6 = v7;
  qword_1800DD1B8 = a2 + 24;
  dword_1800DD1A8 = 0;
  RtlConvertSRWLockExclusiveToShared(&unk_1800DD1A0);
  v8 = 0;
  v16 = 0;
  if ( !*(_DWORD *)(a2 + 120) && !*(_DWORD *)(a2 + 124) )
  {
    v10 = 0;
    goto LABEL_5;
  }
  RtlAcquireSRWLockExclusive(a1);
  *(_DWORD *)(a1 + 8) = GetCurrentThreadId();
  v9 = RtlPublishWnfStateData(*(_QWORD *)(a2 + 120), 0LL, &v16, 4LL, 0LL);
  *(_DWORD *)(a1 + 8) = 0;
  v10 = v9;
  RtlReleaseSRWLockExclusive(a1);
  if ( v10 >= 0 )
  {
    v8 = v16;
LABEL_5:
    if ( (unsigned int)dword_1800DC250 > 5 && (qword_1800DC260 & 2) != 0 && (qword_1800DC268 & 2) == qword_1800DC268 )
    {
      v18 = *(_QWORD *)(a1 + 16);
      v23 = &v18;
      v25 = &v15;
      v27 = &v17;
      v15 = v8;
      v12 = (unsigned __int8 *)&dword_1800BDC4F;
      v14 = 6;
      v21 = &Uuid;
      goto LABEL_18;
    }
    goto LABEL_7;
  }
  if ( (unsigned int)dword_1800DC250 > 5 && tlgKeywordOn((__int64)&dword_1800DC250, 0x400000000002LL) )
  {
    v18 = 0x2000000LL;
    v21 = &Uuid;
    v12 = (unsigned __int8 *)&unk_1800BDD36;
    v19 = *(_QWORD *)(a1 + 16);
    v23 = &v19;
    v15 = v16;
    v25 = &v15;
    v27 = &v17;
    v29 = &v18;
    v14 = 7;
    v30 = 8LL;
LABEL_18:
    v22 = 16LL;
    v24 = 8LL;
    v26 = 1LL;
    v17 = v10;
    v28 = 4LL;
    tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1800DC250, v12, 0LL, 0LL, v14, &v20);
  }
LABEL_7:
  LODWORD(v11) = RtlReleaseSRWLockShared(&unk_1800DD1A0);
  if ( (unsigned int)dword_1800DC250 > 5 && (qword_1800DC260 & 1) != 0 )
  {
    v11 = qword_1800DC268 & 1;
    if ( v11 == qword_1800DC268 )
    {
      v22 = 16LL;
      v21 = &Uuid;
      v18 = v2;
      v23 = &v18;
      v24 = 8LL;
      LODWORD(v11) = tlgWriteTransfer_EventWriteTransfer(
                       (__int64)&dword_1800DC250,
                       (unsigned __int8 *)dword_1800BD6C2,
                       0LL,
                       0LL,
                       4u,
                       &v20);
    }
  }
  return v11;
}
