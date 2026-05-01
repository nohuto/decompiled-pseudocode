/*
 * XREFs of CemRcTableWaitForEmpty @ 0x18009CC48
 * Callers:
 *     ?ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18006D440 (-ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180072ED8 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CemRcTableWaitForEmpty(__int64 a1)
{
  __int64 v1; // rdi

  v1 = a1 + 16;
  RtlAcquireSRWLockExclusive(a1 + 16);
  if ( (*(_BYTE *)(a1 + 40) & 1) == 0 )
    NT_ASSERT("Table->IsRunningDown");
  while ( *(_QWORD *)(a1 + 40) >= 2uLL )
    RtlSleepConditionVariableSRW(a1 + 32, v1, 0LL, 0LL);
  return RtlReleaseSRWLockExclusive(v1);
}
