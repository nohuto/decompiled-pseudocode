/*
 * XREFs of sub_140AD3090 @ 0x140AD3090
 * Callers:
 *     sub_140AD5530 @ 0x140AD5530 (sub_140AD5530.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140AD3090(const void *a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax

  _mm_monitor(a1, a2, a3);
  result = a3;
  _enable();
  _mm_mwait(a2, a3);
  _disable();
  return result;
}
