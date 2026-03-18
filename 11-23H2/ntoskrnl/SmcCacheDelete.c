/*
 * XREFs of SmcCacheDelete @ 0x1409DAB7C
 * Callers:
 *     SmcProcessCreateRequest @ 0x1409D7E9C (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x1409D811C (SmcProcessDeleteRequest.c)
 *     SmcVolumePnpNotification @ 0x1409DBCB0 (SmcVolumePnpNotification.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     SmcCacheCleanup @ 0x1409DAAE4 (SmcCacheCleanup.c)
 *     SmcCacheRemove @ 0x1409DAE60 (SmcCacheRemove.c)
 */

__int64 __fastcall SmcCacheDelete(__int64 a1)
{
  __int64 v2; // rax
  struct _PRIVILEGE_SET *v3; // rdi

  v2 = SmcCacheRemove();
  v3 = (struct _PRIVILEGE_SET *)v2;
  if ( !v2 )
    return 3221225561LL;
  SmcCacheCleanup(a1, v2);
  CmSiFreeMemory(v3);
  KeSetEvent(*(PRKEVENT *)(a1 + 552), 0, 0);
  return 0LL;
}
