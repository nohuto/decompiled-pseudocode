/*
 * XREFs of MiFlushCacheMdl @ 0x1406613F0
 * Callers:
 *     MiReferenceIoPages @ 0x140336790 (MiReferenceIoPages.c)
 *     MiFlushCachedIoPfnRange @ 0x14062E49C (MiFlushCachedIoPfnRange.c)
 *     MiFlushStaleCacheMap @ 0x14062E4E4 (MiFlushStaleCacheMap.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x14036DCE0 (KeInvalidateAllCaches.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 MiFlushCacheMdl()
{
  _BYTE v1[184]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v1, 0, sizeof(v1));
  ++dword_140C65B04;
  KeInvalidateAllCaches();
  return 1LL;
}
