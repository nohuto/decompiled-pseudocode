/*
 * XREFs of CrmSrvActivityStop @ 0x180039FD8
 * Callers:
 *     CrmRpcSrvActivityStop @ 0x180039FC0 (CrmRpcSrvActivityStop.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     CrmActivityCleanup @ 0x180035860 (CrmActivityCleanup.c)
 *     CrmLogSrvActivityStopStop @ 0x18003A1B8 (CrmLogSrvActivityStopStop.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

char __fastcall CrmSrvActivityStop(__int64 a1, __int64 a2)
{
  int v2; // r13d
  __int64 v4; // r14
  int v6; // ebx
  int v7; // r15d
  __int64 v8; // rsi
  __int64 i; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  signed __int64 v15; // rax
  signed __int64 v16; // rax
  bool v17; // cc
  __int64 v19; // [rsp+30h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+38h] [rbp-70h] BYREF
  UUID *v21; // [rsp+58h] [rbp-50h]
  int v22; // [rsp+60h] [rbp-48h]
  int v23; // [rsp+64h] [rbp-44h]

  v2 = 0;
  v4 = -1LL;
  v6 = 3;
  if ( (unsigned int)dword_1800DC250 > 5 && (qword_1800DC260 & 1) != 0 && (qword_1800DC268 & 1) == qword_1800DC268 )
  {
    v23 = 0;
    v21 = &Uuid;
    v22 = 16;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC250,
      (unsigned __int8 *)dword_1800BD9A4,
      0LL,
      0LL,
      3u,
      &v20);
  }
  v7 = 1;
  RtlAcquireSRWLockShared(a2);
  v8 = 0LL;
  for ( i = *(_QWORD *)(a2 + 56); ; i = *(_QWORD *)i )
  {
    if ( i == a2 + 56 )
      goto LABEL_26;
    if ( *(_QWORD *)(i + 48) == a1 )
      break;
  }
  v8 = i;
  if ( !i )
  {
LABEL_26:
    v14 = -1073741811;
    goto LABEL_15;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(i + 16)) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared(a2);
  v7 = 0;
  v2 = 1;
  RtlAcquireSRWLockExclusive(i + 72);
  *(_DWORD *)(i + 80) = GetCurrentThreadId();
  v10 = *(_DWORD *)(i + 136);
  if ( v10 )
  {
    RtlQueryUnbiasedInterruptTime(&v19);
    v11 = v19;
    v12 = v19 - *(_QWORD *)(i + 168);
    if ( *(_DWORD *)(i + 92) == *(_DWORD *)(i + 88) )
      *(_QWORD *)(i + 176) += v12;
    else
      *(_QWORD *)(i + 184) += v12;
    v10 = *(_DWORD *)(i + 136);
    *(_QWORD *)(i + 168) = v11;
  }
  v4 = *(_QWORD *)(i + 192);
  v13 = v10 - 1;
  v6 = *(_DWORD *)(i + 160);
  *(_DWORD *)(i + 136) = v13;
  if ( !v13 )
  {
    *(_QWORD *)(i + 192) = -1LL;
    *(_DWORD *)(i + 160) = 3;
  }
  v14 = 0;
LABEL_15:
  LOBYTE(v15) = CrmLogSrvActivityStopStop(a2, a1, v8, v6, v4, v14);
  if ( v2 )
  {
    *(_DWORD *)(v8 + 80) = 0;
    LOBYTE(v15) = RtlReleaseSRWLockExclusive(v8 + 72);
  }
  if ( v8 )
  {
    v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16), 0xFFFFFFFFFFFFFFFFuLL);
    v17 = v16 <= 1;
    v15 = v16 - 1;
    if ( v17 )
    {
      if ( v15 )
        __fastfail(0xEu);
      CrmActivityCleanup(v8);
      LOBYTE(v15) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v8);
    }
  }
  if ( v7 )
    LOBYTE(v15) = RtlReleaseSRWLockShared(a2);
  return v15;
}
