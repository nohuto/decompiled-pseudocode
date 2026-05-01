/*
 * XREFs of CemRcTableBeginRundown @ 0x18009CBF8
 * Callers:
 *     ?ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18006D440 (-ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180072ED8 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CemRcTableBeginRundown(__int64 a1)
{
  __int64 v2; // rax

  RtlAcquireSRWLockExclusive(a1 + 16);
  v2 = *(_QWORD *)(a1 + 40);
  if ( (v2 & 1) != 0 )
    NT_ASSERT("!Table->IsRunningDown");
  *(_QWORD *)(a1 + 40) = v2 | 1;
  return RtlReleaseSRWLockExclusive(a1 + 16);
}
