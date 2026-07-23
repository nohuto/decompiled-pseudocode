/*
 * XREFs of ExFreeCacheAwareRundownProtection @ 0x1402D2AA0
 * Callers:
 *     sub_1405BDFF8 @ 0x1405BDFF8 (sub_1405BDFF8.c)
 *     sub_14074B878 @ 0x14074B878 (sub_14074B878.c)
 *     sub_1409E026C @ 0x1409E026C (sub_1409E026C.c)
 * Callees:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 */

void __stdcall ExFreeCacheAwareRundownProtection(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  sub_140348B40(*((_QWORD *)RunRefCacheAware + 1));
  sub_140348B40((ULONG_PTR)RunRefCacheAware);
}
