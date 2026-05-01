/*
 * XREFs of CrmRpcSrvActivityStop @ 0x180003EE0
 * Callers:
 *     <none>
 * Callees:
 *     CrmRegistrationFindActivity @ 0x18000408C (CrmRegistrationFindActivity.c)
 *     CrmLogSrvActivityStopStop @ 0x1800040D0 (CrmLogSrvActivityStopStop.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     CrmActivityCleanup @ 0x18002CF70 (CrmActivityCleanup.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

__int64 __fastcall CrmRpcSrvActivityStop(__int64 a1, __int64 a2)
{
  int v2; // r13d
  __int64 v4; // r14
  int v6; // ebp
  int v7; // r15d
  __int64 Activity; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // zf
  int v12; // eax
  signed __int64 v13; // rax
  bool v14; // cc
  signed __int64 v15; // rax
  __int64 v17; // [rsp+30h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+38h] [rbp-70h] BYREF
  UUID *v19; // [rsp+58h] [rbp-50h]
  int v20; // [rsp+60h] [rbp-48h]
  int v21; // [rsp+64h] [rbp-44h]

  v2 = 0;
  v4 = -1LL;
  v6 = 3;
  if ( (unsigned int)dword_1800DB250 > 5 && (qword_1800DB260 & 1) != 0 && (qword_1800DB268 & 1) == qword_1800DB268 )
  {
    v21 = 0;
    v19 = &Uuid;
    v20 = 16;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB250, (int)&dword_1800BE874, 0, 0, 3u, &v18);
  }
  v7 = 1;
  RtlAcquireSRWLockShared(a2);
  Activity = CrmRegistrationFindActivity(a2, a1);
  if ( Activity )
  {
    RtlReleaseSRWLockShared(a2);
    v7 = 0;
    v2 = 1;
    RtlAcquireSRWLockExclusive(Activity + 80);
    *(_DWORD *)(Activity + 88) = GetCurrentThreadId();
    if ( *(_DWORD *)(Activity + 160) )
    {
      RtlQueryUnbiasedInterruptTime(&v17);
      v9 = v17;
      v10 = v17 - *(_QWORD *)(Activity + 192);
      if ( *(_DWORD *)(Activity + 100) == *(_DWORD *)(Activity + 96) )
        *(_QWORD *)(Activity + 200) += v10;
      else
        *(_QWORD *)(Activity + 208) += v10;
      *(_QWORD *)(Activity + 192) = v9;
    }
    v11 = (*(_DWORD *)(Activity + 160))-- == 1;
    v4 = *(_QWORD *)(Activity + 216);
    v6 = *(_DWORD *)(Activity + 184);
    if ( v11 )
    {
      *(_QWORD *)(Activity + 216) = -1LL;
      *(_DWORD *)(Activity + 184) = 3;
    }
    v12 = 0;
  }
  else
  {
    v12 = -1073741811;
  }
  CrmLogSrvActivityStopStop(a2, a1, Activity, v6, v4, v12);
  if ( v2 )
  {
    *(_DWORD *)(Activity + 88) = 0;
    RtlReleaseSRWLockExclusive(Activity + 80);
  }
  if ( Activity )
  {
    v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)(Activity + 16), 0xFFFFFFFFFFFFFFFFuLL);
    v14 = v13 <= 1;
    v15 = v13 - 1;
    if ( v14 )
    {
      if ( v15 )
        __fastfail(0xEu);
      CrmActivityCleanup(Activity);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)Activity);
    }
  }
  if ( v7 )
    RtlReleaseSRWLockShared(a2);
  return 0LL;
}
