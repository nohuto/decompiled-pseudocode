/*
 * XREFs of memchr_0 @ 0x180022BC1
 * Callers:
 *     _Stoulx @ 0x180004E40 (_Stoulx.c)
 *     _Stoullx @ 0x180005A20 (_Stoullx.c)
 *     _Stoxflt @ 0x18000BD08 (_Stoxflt.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memchr_0(const void *Buf, int Val, size_t MaxCount)
{
  return memchr(Buf, Val, MaxCount);
}
