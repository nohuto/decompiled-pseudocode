/*
 * XREFs of SmcCacheDelete @ 0x1409D7990
 * Callers:
 *     SmcProcessCreateRequest @ 0x1409D4BC0 (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x1409D4E10 (SmcProcessDeleteRequest.c)
 *     SmcVolumePnpNotification @ 0x1409D8AB0 (SmcVolumePnpNotification.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     SmcCacheCleanup @ 0x1409D790C (SmcCacheCleanup.c)
 *     SmcCacheRemove @ 0x1409D7C9C (SmcCacheRemove.c)
 */

__int64 __fastcall SmcCacheDelete(__int64 a1)
{
  __int64 v2; // rax
  struct _PRIVILEGE_SET *v3; // rbx

  v2 = SmcCacheRemove();
  v3 = (struct _PRIVILEGE_SET *)v2;
  if ( !v2 )
    return 3221225561LL;
  SmcCacheCleanup(v2);
  CmSiFreeMemory(v3);
  KeSetEvent(*(PRKEVENT *)(a1 + 552), 0, 0);
  return 0LL;
}
