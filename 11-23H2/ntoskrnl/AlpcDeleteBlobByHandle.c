/*
 * XREFs of AlpcDeleteBlobByHandle @ 0x14071C284
 * Callers:
 *     AlpcSecurityDestroyProcedure @ 0x14071C950 (AlpcSecurityDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x1407CFD10 (AlpcSectionDeleteProcedure.c)
 *     AlpcSectionDestroyProcedure @ 0x1407D4A40 (AlpcSectionDestroyProcedure.c)
 *     AlpcReserveDestroyProcedure @ 0x1407E2F70 (AlpcReserveDestroyProcedure.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcDeleteBlobByHandle(_QWORD *a1, int a2, __int64 a3)
{
  char v3; // di
  volatile signed __int64 *v7; // rbx
  unsigned __int64 v8; // rcx

  v3 = 0;
  if ( !a1 )
    return 0;
  v7 = a1 + 1;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 1), 0LL);
  v8 = (unsigned int)(a2 - 16);
  if ( v8 < a1[2] && *(_QWORD *)(*a1 + 8 * v8) == a3 )
  {
    *(_QWORD *)(*a1 + 8 * v8) = 0LL;
    v3 = 1;
  }
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  return v3;
}
