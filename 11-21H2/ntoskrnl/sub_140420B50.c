/*
 * XREFs of sub_140420B50 @ 0x140420B50
 * Callers:
 *     sub_1405694C0 @ 0x1405694C0 (sub_1405694C0.c)
 * Callees:
 *     sub_140420B66 @ 0x140420B66 (sub_140420B66.c)
 */

__int64 sub_140420B50()
{
  __int64 v2; // rcx

  __asm { rdsspq  rdx }
  _R8 = 0LL;
  __asm { wrssq   qword ptr [rdx], r8 }
  sub_140420B66(*_RDX);
  return sub_140420B66(v2);
}
