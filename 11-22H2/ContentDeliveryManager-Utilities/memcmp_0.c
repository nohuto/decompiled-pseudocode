/*
 * XREFs of memcmp_0 @ 0x180022CA9
 * Callers:
 *     _Strcoll @ 0x180021AAC (_Strcoll.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x1800304BC (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp_0(const void *Buf1, const void *Buf2, size_t Size)
{
  return memcmp(Buf1, Buf2, Size);
}
