/*
 * XREFs of sub_180013B3C @ 0x180013B3C
 * Callers:
 *     sub_1800140D0 @ 0x1800140D0 (sub_1800140D0.c)
 *     sub_18002E87C @ 0x18002E87C (sub_18002E87C.c)
 *     sub_18004B9DC @ 0x18004B9DC (sub_18004B9DC.c)
 *     sub_1800ABAF0 @ 0x1800ABAF0 (sub_1800ABAF0.c)
 * Callees:
 *     sub_180012150 @ 0x180012150 (sub_180012150.c)
 *     sub_180013BA4 @ 0x180013BA4 (sub_180013BA4.c)
 */

void *__fastcall sub_180013B3C(void *a1, __int64 a2, _QWORD *Src)
{
  size_t v3; // r9
  size_t Size; // rcx

  v3 = Src[2];
  Size = *(_QWORD *)(a2 + 16);
  if ( 0x7FFFFFFFFFFFFFFFLL - Size < v3 )
    sub_180012150();
  if ( Src[3] >= 0x10uLL )
    Src = (_QWORD *)*Src;
  sub_180013BA4(a1, Size, Src, v3);
  return a1;
}
