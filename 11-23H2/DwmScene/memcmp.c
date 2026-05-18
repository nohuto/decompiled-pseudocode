/*
 * XREFs of memcmp @ 0x18000CA6D
 * Callers:
 *     sub_18001C5B8 @ 0x18001C5B8 (sub_18001C5B8.c)
 *     sub_18001CD3C @ 0x18001CD3C (sub_18001CD3C.c)
 *     sub_18001EE50 @ 0x18001EE50 (sub_18001EE50.c)
 *     sub_18002C5EC @ 0x18002C5EC (sub_18002C5EC.c)
 *     sub_180033F90 @ 0x180033F90 (sub_180033F90.c)
 *     sub_1800590C0 @ 0x1800590C0 (sub_1800590C0.c)
 *     sub_180066E20 @ 0x180066E20 (sub_180066E20.c)
 *     sub_18006D0BC @ 0x18006D0BC (sub_18006D0BC.c)
 *     sub_180083E7C @ 0x180083E7C (sub_180083E7C.c)
 *     sub_180083F38 @ 0x180083F38 (sub_180083F38.c)
 *     sub_180083FA8 @ 0x180083FA8 (sub_180083FA8.c)
 *     sub_18008BC7C @ 0x18008BC7C (sub_18008BC7C.c)
 *     sub_1800900BC @ 0x1800900BC (sub_1800900BC.c)
 *     sub_180090AB8 @ 0x180090AB8 (sub_180090AB8.c)
 *     sub_18009839C @ 0x18009839C (sub_18009839C.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  return __imp_memcmp(Buf1, Buf2, Size);
}
