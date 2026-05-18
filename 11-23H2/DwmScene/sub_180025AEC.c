/*
 * XREFs of sub_180025AEC @ 0x180025AEC
 * Callers:
 *     sub_180051948 @ 0x180051948 (sub_180051948.c)
 *     sub_180055440 @ 0x180055440 (sub_180055440.c)
 *     sub_180055484 @ 0x180055484 (sub_180055484.c)
 *     sub_180055848 @ 0x180055848 (sub_180055848.c)
 *     sub_180055EA0 @ 0x180055EA0 (sub_180055EA0.c)
 *     sub_1800CE190 @ 0x1800CE190 (sub_1800CE190.c)
 *     sub_1800D875C @ 0x1800D875C (sub_1800D875C.c)
 *     sub_1800E753A @ 0x1800E753A (sub_1800E753A.c)
 *     sub_1800E7598 @ 0x1800E7598 (sub_1800E7598.c)
 *     unknown_libname_73 @ 0x1800F1A0E (unknown_libname_73.c)
 *     sub_1800F1A20 @ 0x1800F1A20 (sub_1800F1A20.c)
 *     sub_1800F1BC7 @ 0x1800F1BC7 (sub_1800F1BC7.c)
 * Callees:
 *     sub_18001C1C4 @ 0x18001C1C4 (sub_18001C1C4.c)
 */

__int64 __fastcall sub_180025AEC(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18001C1C4(v1);
  return result;
}
