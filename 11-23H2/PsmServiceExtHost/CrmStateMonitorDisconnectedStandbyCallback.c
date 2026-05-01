/*
 * XREFs of CrmStateMonitorDisconnectedStandbyCallback @ 0x180047310
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x180009B80 (CrmStateMonitorStateSet.c)
 *     CrmStateRoutineSebLevel @ 0x18004B9F0 (CrmStateRoutineSebLevel.c)
 */

__int64 __fastcall CrmStateMonitorDisconnectedStandbyCallback(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v3; // rax
  __int64 v6; // rdi
  BOOL v7; // eax
  BOOL v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = 64LL;
  if ( a2 != 8 )
    v3 = 88LL;
  v6 = a1 - v3;
  RtlAcquireSRWLockExclusive(a1 - v3 + 8);
  *(_DWORD *)(v6 + 16) = GetCurrentThreadId();
  if ( a2 == 8 )
    *(_DWORD *)(v6 + 112) = (unsigned int)(*a3 - 1) <= 0xFFFFFFFD;
  else
    *(_DWORD *)(v6 + 116) = CrmStateRoutineSebLevel(a3);
  v7 = *(_DWORD *)(v6 + 112) && !*(_DWORD *)(v6 + 116);
  v9 = v7;
  CrmStateMonitorStateSet((void **)v6, &v9, 4uLL, 1);
  *(_DWORD *)(v6 + 16) = 0;
  return RtlReleaseSRWLockExclusive(v6 + 8);
}
