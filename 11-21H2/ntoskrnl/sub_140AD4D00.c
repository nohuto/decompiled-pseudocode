/*
 * XREFs of sub_140AD4D00 @ 0x140AD4D00
 * Callers:
 *     sub_140AD4500 @ 0x140AD4500 (sub_140AD4500.c)
 * Callees:
 *     sub_140AD4F90 @ 0x140AD4F90 (sub_140AD4F90.c)
 */

void sub_140AD4D00()
{
  _UNKNOWN *retaddr; // [rsp+168h] [rbp+E0h]

  _mm_setcsr(0x1F80u);
  _InterlockedIncrement64(MK_FP(__GS__, 8LL * (unsigned __int8)retaddr + 168));
  sub_140AD4F90();
  _mm_setcsr(_mm_getcsr());
  __asm { iretq }
}
