/*
 * XREFs of SmcCacheDelete @ 0x1409DAD7C
 * Callers:
 *     SmcProcessCreateRequest @ 0x1409D809C (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x1409D831C (SmcProcessDeleteRequest.c)
 *     SmcVolumePnpNotification @ 0x1409DBEB0 (SmcVolumePnpNotification.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     SmcCacheCleanup @ 0x1409DACE4 (SmcCacheCleanup.c)
 *     SmcCacheRemove @ 0x1409DB060 (SmcCacheRemove.c)
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
