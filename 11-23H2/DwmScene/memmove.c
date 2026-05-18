/*
 * XREFs of memmove @ 0x18000CA85
 * Callers:
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 *     sub_180016D8C @ 0x180016D8C (sub_180016D8C.c)
 *     sub_180016DC4 @ 0x180016DC4 (sub_180016DC4.c)
 *     sub_18001CF60 @ 0x18001CF60 (sub_18001CF60.c)
 *     sub_18001DE60 @ 0x18001DE60 (sub_18001DE60.c)
 *     sub_18001DF1C @ 0x18001DF1C (sub_18001DF1C.c)
 *     sub_18001E684 @ 0x18001E684 (sub_18001E684.c)
 *     sub_18001E768 @ 0x18001E768 (sub_18001E768.c)
 *     sub_18001E984 @ 0x18001E984 (sub_18001E984.c)
 *     sub_18001F798 @ 0x18001F798 (sub_18001F798.c)
 *     sub_18001F90C @ 0x18001F90C (sub_18001F90C.c)
 *     sub_180030B74 @ 0x180030B74 (sub_180030B74.c)
 *     sub_180044D60 @ 0x180044D60 (sub_180044D60.c)
 *     sub_18004D5B4 @ 0x18004D5B4 (sub_18004D5B4.c)
 *     sub_180070BF4 @ 0x180070BF4 (sub_180070BF4.c)
 *     sub_1800743B8 @ 0x1800743B8 (sub_1800743B8.c)
 *     sub_18007C9C8 @ 0x18007C9C8 (sub_18007C9C8.c)
 *     sub_1800815A8 @ 0x1800815A8 (sub_1800815A8.c)
 *     sub_1800815E0 @ 0x1800815E0 (sub_1800815E0.c)
 *     sub_180084168 @ 0x180084168 (sub_180084168.c)
 *     sub_18008C920 @ 0x18008C920 (sub_18008C920.c)
 *     sub_18008F0B4 @ 0x18008F0B4 (sub_18008F0B4.c)
 *     sub_180094AAC @ 0x180094AAC (sub_180094AAC.c)
 *     sub_180094ACC @ 0x180094ACC (sub_180094ACC.c)
 *     sub_1800A0674 @ 0x1800A0674 (sub_1800A0674.c)
 *     sub_1800CC58C @ 0x1800CC58C (sub_1800CC58C.c)
 *     sub_1800D38B4 @ 0x1800D38B4 (sub_1800D38B4.c)
 *     sub_1800DAB90 @ 0x1800DAB90 (sub_1800DAB90.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  return __imp_memmove(a1, Src, Size);
}
