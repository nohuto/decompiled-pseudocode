/*
 * XREFs of CrmRegistrationNotify @ 0x180035DA0
 * Callers:
 *     CrmRegistrationReadyQueueRemove @ 0x180035584 (CrmRegistrationReadyQueueRemove.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

void __fastcall CrmRegistrationNotify(__int64 a1, __int64 a2, int a3)
{
  int v5; // eax
  int v6; // ebx
  unsigned __int8 *v7; // rdx
  ULONG v8; // [rsp+20h] [rbp-79h]
  char v9; // [rsp+30h] [rbp-69h] BYREF
  int v10; // [rsp+38h] [rbp-61h] BYREF
  int v11; // [rsp+40h] [rbp-59h] BYREF
  __int64 v12; // [rsp+48h] [rbp-51h] BYREF
  __int64 v13; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+60h] [rbp-39h] BYREF
  UUID *v15; // [rsp+80h] [rbp-19h]
  __int64 v16; // [rsp+88h] [rbp-11h]
  __int64 *v17; // [rsp+90h] [rbp-9h]
  __int64 v18; // [rsp+98h] [rbp-1h]
  char *v19; // [rsp+A0h] [rbp+7h]
  __int64 v20; // [rsp+A8h] [rbp+Fh]
  int *v21; // [rsp+B0h] [rbp+17h]
  __int64 v22; // [rsp+B8h] [rbp+1Fh]
  __int64 *v23; // [rsp+C0h] [rbp+27h]
  __int64 v24; // [rsp+C8h] [rbp+2Fh]

  v10 = a3;
  if ( !*(_DWORD *)(a2 + 120) && !*(_DWORD *)(a2 + 124) )
  {
    v6 = 0;
    goto LABEL_4;
  }
  RtlAcquireSRWLockExclusive(a1);
  *(_DWORD *)(a1 + 8) = GetCurrentThreadId();
  v5 = RtlPublishWnfStateData(*(_QWORD *)(a2 + 120), 0LL, &v10, 4LL, 0LL);
  *(_DWORD *)(a1 + 8) = 0;
  v6 = v5;
  RtlReleaseSRWLockExclusive(a1);
  if ( v6 >= 0 )
  {
    LOBYTE(a3) = v10;
LABEL_4:
    if ( (unsigned int)dword_1800DC250 > 5 && (qword_1800DC260 & 2) != 0 && (qword_1800DC268 & 2) == qword_1800DC268 )
    {
      v9 = a3;
      v15 = &Uuid;
      v7 = (unsigned __int8 *)&dword_1800BDC4F;
      v12 = *(_QWORD *)(a1 + 16);
      v17 = &v12;
      v19 = &v9;
      v21 = &v11;
      v8 = 6;
      goto LABEL_14;
    }
    return;
  }
  if ( (unsigned int)dword_1800DC250 > 5 && tlgKeywordOn((__int64)&dword_1800DC250, 0x400000000002LL) )
  {
    v12 = 0x2000000LL;
    v15 = &Uuid;
    v7 = (unsigned __int8 *)&unk_1800BDD36;
    v13 = *(_QWORD *)(a1 + 16);
    v17 = &v13;
    v9 = v10;
    v19 = &v9;
    v21 = &v11;
    v23 = &v12;
    v8 = 7;
    v24 = 8LL;
LABEL_14:
    v16 = 16LL;
    v18 = 8LL;
    v20 = 1LL;
    v11 = v6;
    v22 = 4LL;
    tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1800DC250, v7, 0LL, 0LL, v8, &v14);
  }
}
