/*
 * XREFs of sub_140AD41C0 @ 0x140AD41C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140AD4F90 @ 0x140AD4F90 (sub_140AD4F90.c)
 */

void sub_140AD41C0()
{
  _mm_setcsr(0x1F80u);
  _InterlockedIncrement64(MK_FP(__GS__, 1976LL));
  sub_140AD4F90();
  _mm_setcsr(_mm_getcsr());
  __asm { iretq }
}
