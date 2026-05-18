/*
 * XREFs of memmove @ 0x18000CA85
 * Callers:
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_180018168 @ 0x180018168 (sub_180018168.c)
 *     sub_1800181A0 @ 0x1800181A0 (sub_1800181A0.c)
 *     sub_18001DAD8 @ 0x18001DAD8 (sub_18001DAD8.c)
 *     sub_18001F5AC @ 0x18001F5AC (sub_18001F5AC.c)
 *     sub_18001F640 @ 0x18001F640 (sub_18001F640.c)
 *     sub_18001F6CC @ 0x18001F6CC (sub_18001F6CC.c)
 *     sub_18001FB6C @ 0x18001FB6C (sub_18001FB6C.c)
 *     sub_18001FEFC @ 0x18001FEFC (sub_18001FEFC.c)
 *     sub_180020CC0 @ 0x180020CC0 (sub_180020CC0.c)
 *     sub_180020E2C @ 0x180020E2C (sub_180020E2C.c)
 *     sub_18002FE8C @ 0x18002FE8C (sub_18002FE8C.c)
 *     sub_180030074 @ 0x180030074 (sub_180030074.c)
 *     sub_18003372C @ 0x18003372C (sub_18003372C.c)
 *     sub_180036CD4 @ 0x180036CD4 (sub_180036CD4.c)
 *     sub_18004A21C @ 0x18004A21C (sub_18004A21C.c)
 *     sub_180054648 @ 0x180054648 (sub_180054648.c)
 *     sub_180059BB8 @ 0x180059BB8 (sub_180059BB8.c)
 *     sub_18007BD9C @ 0x18007BD9C (sub_18007BD9C.c)
 *     sub_1800801D8 @ 0x1800801D8 (sub_1800801D8.c)
 *     sub_180088CE4 @ 0x180088CE4 (sub_180088CE4.c)
 *     sub_18008E8A0 @ 0x18008E8A0 (sub_18008E8A0.c)
 *     sub_18008E8D8 @ 0x18008E8D8 (sub_18008E8D8.c)
 *     sub_180091754 @ 0x180091754 (sub_180091754.c)
 *     sub_18009BA58 @ 0x18009BA58 (sub_18009BA58.c)
 *     sub_18009EAD8 @ 0x18009EAD8 (sub_18009EAD8.c)
 *     sub_1800A068C @ 0x1800A068C (sub_1800A068C.c)
 *     sub_1800A4C1C @ 0x1800A4C1C (sub_1800A4C1C.c)
 *     sub_1800A4C3C @ 0x1800A4C3C (sub_1800A4C3C.c)
 *     sub_1800B262C @ 0x1800B262C (sub_1800B262C.c)
 *     sub_1800D8C84 @ 0x1800D8C84 (sub_1800D8C84.c)
 *     sub_1800E30E0 @ 0x1800E30E0 (sub_1800E30E0.c)
 *     sub_1800EB2FC @ 0x1800EB2FC (sub_1800EB2FC.c)
 *     sub_1800F3E10 @ 0x1800F3E10 (sub_1800F3E10.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  return __imp_memmove(a1, Src, Size);
}
