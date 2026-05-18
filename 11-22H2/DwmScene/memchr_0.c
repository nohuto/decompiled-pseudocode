/*
 * XREFs of memchr_0 @ 0x1800E38EC
 * Callers:
 *     ??$_Traits_find@U?$char_traits@D@std@@@std@@YA_KQEBD_K101@Z @ 0x18001EDD0 (--$_Traits_find@U-$char_traits@D@std@@@std@@YA_KQEBD_K101@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memchr_0(const void *Buf, int Val, size_t MaxCount)
{
  return memchr(Buf, Val, MaxCount);
}
