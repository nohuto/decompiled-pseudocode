/*
 * XREFs of sub_140AD4100 @ 0x140AD4100
 * Callers:
 *     <none>
 * Callees:
 *     sub_140AD4F90 @ 0x140AD4F90 (sub_140AD4F90.c)
 *     sub_140AD5190 @ 0x140AD5190 (sub_140AD5190.c)
 */

void sub_140AD4100()
{
  _mm_setcsr(0x1F80u);
  _InterlockedIncrement64(MK_FP(__GS__, 1968LL));
  sub_140AD5190();
  sub_140AD4F90();
  _mm_setcsr(_mm_getcsr());
  __asm { iretq }
}
