/*
 * XREFs of sub_14058A0E0 @ 0x14058A0E0
 * Callers:
 *     sub_14096AF9C @ 0x14096AF9C (sub_14096AF9C.c)
 *     sub_14097BD88 @ 0x14097BD88 (sub_14097BD88.c)
 * Callees:
 *     qsort @ 0x1403E1E70 (qsort.c)
 */

void __fastcall sub_14058A0E0(__int64 a1)
{
  qsort(
    (void *)(a1 + 48),
    (unsigned __int64)*(unsigned int *)(a1 + 40) >> 12,
    8uLL,
    (int (__cdecl *)(const void *, const void *))sub_1403DEC40);
}
