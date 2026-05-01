/*
 * XREFs of CrmRegistrationReadyQueueRemove @ 0x1800138C0
 * Callers:
 *     CrmActivityUpdate @ 0x180038D64 (CrmActivityUpdate.c)
 *     CrmGlobalsPeriodicNotifier @ 0x18004B620 (CrmGlobalsPeriodicNotifier.c)
 * Callees:
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180011964 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     CrmRegistrationNotify @ 0x1800274BC (CrmRegistrationNotify.c)
 *     CrmLogRegistrationReadyQueueRemove @ 0x18002D594 (CrmLogRegistrationReadyQueueRemove.c)
 *     CempRbNodeIsInserted @ 0x1800975E0 (CempRbNodeIsInserted.c)
 *     CempRbNodeRemove @ 0x1800975F4 (CempRbNodeRemove.c)
 */

__int64 __fastcall CrmRegistrationReadyQueueRemove(__int64 a1, int a2, unsigned int a3, int a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rbp
  __int64 v10; // rcx

  v4 = 0;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL);
  if ( !a4 )
  {
    RtlAcquireSRWLockExclusive(&unk_1800DC1D0);
    dword_1800DC1D8 = GetCurrentThreadId();
  }
  if ( (unsigned int)CempRbNodeIsInserted(a1 + 24) )
  {
    CempRbNodeRemove(&xmmword_1800DC1E0, v10);
    v4 = 1;
  }
  if ( a2 && (unsigned int)CrmRegistrationNotify(*(_QWORD *)(a1 + 48), a1, a3) )
    *(_QWORD *)(a1 + 128) = CempQueryUnbiasedInterruptTimeMs64();
  if ( !a4 )
  {
    dword_1800DC1D8 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800DC1D0);
  }
  if ( v4 )
    CrmLogRegistrationReadyQueueRemove(v9);
  return v4;
}
