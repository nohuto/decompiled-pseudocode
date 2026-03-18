/*
 * XREFs of MmCreateCacheManagerSection @ 0x1406B8C3C
 * Callers:
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 * Callees:
 *     MiCreateSection @ 0x1406FD4A0 (MiCreateSection.c)
 */

__int64 __fastcall MmCreateCacheManagerSection(int a1, int a2, char a3, __int64 a4)
{
  return MiCreateSection(a1, 0, a2, 4, 0x8000000, 4 * (a3 & 1u) + 2, 0LL, 0, 0LL, a4, 0, -1, 0LL);
}
