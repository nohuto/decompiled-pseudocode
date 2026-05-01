/*
 * XREFs of CrmRegistrationReadyQueueRemove @ 0x180035584
 * Callers:
 *     CrmActivityListenerCallback @ 0x1800315E0 (CrmActivityListenerCallback.c)
 * Callees:
 *     CrmLogRegistrationReadyQueueRemove @ 0x180035D50 (CrmLogRegistrationReadyQueueRemove.c)
 *     CrmRegistrationNotify @ 0x180035DA0 (CrmRegistrationNotify.c)
 */

__int64 __fastcall CrmRegistrationReadyQueueRemove(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  int v7; // ebx
  _QWORD *v8; // rax
  __int64 v9; // r9
  _QWORD *v10; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 16);
  v7 = 0;
  RtlAcquireSRWLockExclusive(&unk_1800DD1A0);
  dword_1800DD1A8 = GetCurrentThreadId();
  v8 = (_QWORD *)(a2 + 24);
  v9 = *(_QWORD *)(a2 + 24);
  if ( v9 != a2 + 24 )
  {
    v7 = 1;
    if ( *(_QWORD **)(v9 + 8) != v8 || (v10 = *(_QWORD **)(a2 + 32), (_QWORD *)*v10 != v8) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
  }
  *(_QWORD *)(a2 + 32) = a2 + 24;
  *v8 = v8;
  dword_1800DD1A8 = 0;
  if ( a3 )
  {
    RtlConvertSRWLockExclusiveToShared(&unk_1800DD1A0);
    CrmRegistrationNotify(a1, a2, 1LL);
    result = RtlReleaseSRWLockShared(&unk_1800DD1A0);
  }
  else
  {
    result = RtlReleaseSRWLockExclusive(&unk_1800DD1A0);
  }
  if ( v7 )
    return CrmLogRegistrationReadyQueueRemove(v3);
  return result;
}
