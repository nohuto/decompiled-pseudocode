/*
 * XREFs of CrmSrvActivityWindowClosedReasonUnsubscribe @ 0x18006D4DC
 * Callers:
 *     CrmpInProcActivityWindowClosedReasonUnsubscribe @ 0x18004AE90 (CrmpInProcActivityWindowClosedReasonUnsubscribe.c)
 *     CrmRpcSrvActivityWindowClosedReasonUnsubscribe @ 0x1800A1590 (CrmRpcSrvActivityWindowClosedReasonUnsubscribe.c)
 * Callees:
 *     CrmRegistrationFindActivity @ 0x18000408C (CrmRegistrationFindActivity.c)
 *     CrmActivityDereference @ 0x180004AA8 (CrmActivityDereference.c)
 *     CrmLogSrvActivityWindowClosedReasonUnsubscribeStart @ 0x18006D18C (CrmLogSrvActivityWindowClosedReasonUnsubscribeStart.c)
 */

void __fastcall CrmSrvActivityWindowClosedReasonUnsubscribe(__int64 a1, __int64 a2)
{
  __int64 *Activity; // rax
  volatile signed __int64 *v5; // rbx
  _QWORD *v6; // rdi

  CrmLogSrvActivityWindowClosedReasonUnsubscribeStart();
  RtlAcquireSRWLockExclusive(a2);
  *(_DWORD *)(a2 + 8) = GetCurrentThreadId();
  Activity = CrmRegistrationFindActivity(a2, a1);
  v5 = Activity;
  if ( Activity )
  {
    v6 = Activity + 19;
    if ( *((_DWORD *)Activity + 38) || *((_DWORD *)Activity + 39) )
    {
      NtDeleteWnfStateName(Activity + 19);
      *v6 = 0LL;
    }
  }
  *(_DWORD *)(a2 + 8) = 0;
  RtlReleaseSRWLockExclusive(a2);
  if ( v5 )
    CrmActivityDereference(v5);
  CrmLogSrvActivityWindowClosedReasonUnsubscribeStop();
}
