/*
 * XREFs of memchr_0 @ 0x1800223B1
 * Callers:
 *     _Stoulx @ 0x1800047B0 (_Stoulx.c)
 *     _Stoullx @ 0x180005390 (_Stoullx.c)
 *     _Stoxflt @ 0x18000B610 (_Stoxflt.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memchr_0(const void *Buf, int Val, size_t MaxCount)
{
  return memchr(Buf, Val, MaxCount);
}
