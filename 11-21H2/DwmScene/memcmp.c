/*
 * XREFs of memcmp @ 0x1800FEEAF
 * Callers:
 *     sub_18001DA38 @ 0x18001DA38 (sub_18001DA38.c)
 *     sub_18001DA7C @ 0x18001DA7C (sub_18001DA7C.c)
 *     sub_18001DE04 @ 0x18001DE04 (sub_18001DE04.c)
 *     sub_180020BF8 @ 0x180020BF8 (sub_180020BF8.c)
 *     sub_1800915AC @ 0x1800915AC (sub_1800915AC.c)
 *     sub_180091668 @ 0x180091668 (sub_180091668.c)
 *     sub_1800916D8 @ 0x1800916D8 (sub_1800916D8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  return __imp_memcmp(Buf1, Buf2, Size);
}
