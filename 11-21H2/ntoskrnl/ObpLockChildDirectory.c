/*
 * XREFs of ObpLockChildDirectory @ 0x140811430
 * Callers:
 *     ObpCreateSymbolicLinkName @ 0x1406A97F0 (ObpCreateSymbolicLinkName.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

void __fastcall ObpLockChildDirectory(__int64 *a1, __int64 a2, char a3)
{
  ULONG_PTR v5; // rcx
  __int64 v7; // rdi

  v5 = a2 + 296;
  if ( a3 )
    ExAcquirePushLockExclusiveEx(v5, 0LL);
  else
    ExAcquirePushLockSharedEx(v5, 0LL);
  v7 = *a1;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*a1 + 296), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v7 + 296));
  KeAbPostRelease(v7 + 296);
  if ( *((_BYTE *)a1 + 22) )
  {
    ObDereferenceObjectDeferDeleteWithTag((PVOID)*a1, 0x554C624Fu);
    *((_BYTE *)a1 + 22) = 0;
  }
  *a1 = a2;
  *((_BYTE *)a1 + 21) = a3;
}
