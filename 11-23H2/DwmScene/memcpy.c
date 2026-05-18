/*
 * XREFs of memcpy @ 0x18000CA61
 * Callers:
 *     sub_18000FF54 @ 0x18000FF54 (sub_18000FF54.c)
 *     sub_180010B74 @ 0x180010B74 (sub_180010B74.c)
 *     sub_1800130E8 @ 0x1800130E8 (sub_1800130E8.c)
 *     sub_1800133F4 @ 0x1800133F4 (sub_1800133F4.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001CB70 @ 0x18001CB70 (sub_18001CB70.c)
 *     sub_18001CC60 @ 0x18001CC60 (sub_18001CC60.c)
 *     sub_18001CF60 @ 0x18001CF60 (sub_18001CF60.c)
 *     sub_18001DF1C @ 0x18001DF1C (sub_18001DF1C.c)
 *     sub_18001E228 @ 0x18001E228 (sub_18001E228.c)
 *     sub_18001E2E0 @ 0x18001E2E0 (sub_18001E2E0.c)
 *     sub_18001EA48 @ 0x18001EA48 (sub_18001EA48.c)
 *     sub_18001EB54 @ 0x18001EB54 (sub_18001EB54.c)
 *     sub_18001ED20 @ 0x18001ED20 (sub_18001ED20.c)
 *     sub_18001F224 @ 0x18001F224 (sub_18001F224.c)
 *     sub_18001F90C @ 0x18001F90C (sub_18001F90C.c)
 *     sub_180020A70 @ 0x180020A70 (sub_180020A70.c)
 *     sub_180024220 @ 0x180024220 (sub_180024220.c)
 *     sub_18002F71C @ 0x18002F71C (sub_18002F71C.c)
 *     sub_180030B74 @ 0x180030B74 (sub_180030B74.c)
 *     sub_180037F54 @ 0x180037F54 (sub_180037F54.c)
 *     sub_180038950 @ 0x180038950 (sub_180038950.c)
 *     sub_180050D34 @ 0x180050D34 (sub_180050D34.c)
 *     sub_180051DFC @ 0x180051DFC (sub_180051DFC.c)
 *     sub_180083F38 @ 0x180083F38 (sub_180083F38.c)
 *     sub_180083FA8 @ 0x180083FA8 (sub_180083FA8.c)
 *     sub_1800C4D60 @ 0x1800C4D60 (sub_1800C4D60.c)
 *     sub_1800C5100 @ 0x1800C5100 (sub_1800C5100.c)
 *     sub_1800CE190 @ 0x1800CE190 (sub_1800CE190.c)
 *     sub_1800D875C @ 0x1800D875C (sub_1800D875C.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  return __imp_memcpy(a1, Src, Size);
}
