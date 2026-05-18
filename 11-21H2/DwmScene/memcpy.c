/*
 * XREFs of memcpy @ 0x18000CA6D
 * Callers:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_180013BA4 @ 0x180013BA4 (sub_180013BA4.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001DAD8 @ 0x18001DAD8 (sub_18001DAD8.c)
 *     sub_18001E194 @ 0x18001E194 (sub_18001E194.c)
 *     sub_18001E2B8 @ 0x18001E2B8 (sub_18001E2B8.c)
 *     sub_18001F6CC @ 0x18001F6CC (sub_18001F6CC.c)
 *     sub_18001F958 @ 0x18001F958 (sub_18001F958.c)
 *     sub_18001FA60 @ 0x18001FA60 (sub_18001FA60.c)
 *     sub_180020018 @ 0x180020018 (sub_180020018.c)
 *     sub_180020174 @ 0x180020174 (sub_180020174.c)
 *     sub_1800202C0 @ 0x1800202C0 (sub_1800202C0.c)
 *     sub_180020408 @ 0x180020408 (sub_180020408.c)
 *     sub_180020CC0 @ 0x180020CC0 (sub_180020CC0.c)
 *     sub_180021BF0 @ 0x180021BF0 (sub_180021BF0.c)
 *     sub_180025C4C @ 0x180025C4C (sub_180025C4C.c)
 *     sub_18002FE8C @ 0x18002FE8C (sub_18002FE8C.c)
 *     sub_180036CD4 @ 0x180036CD4 (sub_180036CD4.c)
 *     sub_18003CA30 @ 0x18003CA30 (sub_18003CA30.c)
 *     sub_18003CC94 @ 0x18003CC94 (sub_18003CC94.c)
 *     sub_1800584E0 @ 0x1800584E0 (sub_1800584E0.c)
 *     sub_1800588A4 @ 0x1800588A4 (sub_1800588A4.c)
 *     sub_180091668 @ 0x180091668 (sub_180091668.c)
 *     sub_1800916D8 @ 0x1800916D8 (sub_1800916D8.c)
 *     sub_1800D9B40 @ 0x1800D9B40 (sub_1800D9B40.c)
 *     sub_1800D9F90 @ 0x1800D9F90 (sub_1800D9F90.c)
 *     sub_1800E51F0 @ 0x1800E51F0 (sub_1800E51F0.c)
 *     sub_1800F1278 @ 0x1800F1278 (sub_1800F1278.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  return __imp_memcpy(a1, Src, Size);
}
