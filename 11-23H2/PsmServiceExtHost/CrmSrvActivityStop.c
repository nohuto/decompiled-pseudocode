/*
 * XREFs of CrmSrvActivityStop @ 0x18006D108
 * Callers:
 *     CrmpInProcActivityStop @ 0x18004ADD0 (CrmpInProcActivityStop.c)
 * Callees:
 *     CrmRegistrationFindActivity @ 0x18000408C (CrmRegistrationFindActivity.c)
 *     CrmLogSrvActivityStopStop @ 0x1800040D0 (CrmLogSrvActivityStopStop.c)
 *     CrmActivityDereference @ 0x180004AA8 (CrmActivityDereference.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     CrmActivityTimeSpentUpdate @ 0x18002A904 (CrmActivityTimeSpentUpdate.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

void __fastcall CrmSrvActivityStop(__int64 a1, __int64 a2)
{
  int v2; // r15d
  __int64 v4; // r13
  int v6; // r12d
  int v7; // ebp
  __int64 *Activity; // rbx
  unsigned int v9; // eax
  bool v10; // zf
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-78h] BYREF
  UUID *v12; // [rsp+50h] [rbp-58h]
  int v13; // [rsp+58h] [rbp-50h]
  int v14; // [rsp+5Ch] [rbp-4Ch]

  v2 = 0;
  v4 = -1LL;
  v6 = 3;
  if ( (unsigned int)dword_1800DB250 > 5 && (qword_1800DB260 & 1) != 0 && (qword_1800DB268 & 1) == qword_1800DB268 )
  {
    v12 = &Uuid;
    v13 = 16;
    v14 = 0;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB250,
      (unsigned __int8 *)dword_1800BE854,
      0LL,
      0LL,
      3u,
      &v11);
  }
  v7 = 1;
  RtlAcquireSRWLockShared(a2);
  Activity = CrmRegistrationFindActivity(a2, a1);
  if ( Activity )
  {
    RtlReleaseSRWLockShared(a2);
    v7 = 0;
    v2 = 1;
    RtlAcquireSRWLockExclusive(Activity + 10);
    *((_DWORD *)Activity + 22) = GetCurrentThreadId();
    CrmActivityTimeSpentUpdate((__int64)Activity, 2);
    v10 = (*((_DWORD *)Activity + 40))-- == 1;
    v4 = Activity[27];
    v6 = *((_DWORD *)Activity + 46);
    if ( v10 )
    {
      Activity[27] = -1LL;
      *((_DWORD *)Activity + 46) = 3;
    }
    v9 = 0;
  }
  else
  {
    v9 = -1073741811;
  }
  CrmLogSrvActivityStopStop(a2, a1, (__int64)Activity, v6, v4, v9);
  if ( v2 )
  {
    *((_DWORD *)Activity + 22) = 0;
    RtlReleaseSRWLockExclusive(Activity + 10);
  }
  if ( Activity )
    CrmActivityDereference(Activity);
  if ( v7 )
    RtlReleaseSRWLockShared(a2);
}
