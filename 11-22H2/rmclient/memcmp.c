/*
 * XREFs of memcmp @ 0x180016A46
 * Callers:
 *     sub_18000D628 @ 0x18000D628 (sub_18000D628.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  return __imp_memcmp(Buf1, Buf2, Size);
}
