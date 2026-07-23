/*
 * XREFs of sub_1402F3684 @ 0x1402F3684
 * Callers:
 *     sub_1403C13E4 @ 0x1403C13E4 (sub_1403C13E4.c)
 *     sub_1407A34A0 @ 0x1407A34A0 (sub_1407A34A0.c)
 * Callees:
 *     sub_1407A347C @ 0x1407A347C (sub_1407A347C.c)
 */

__int64 __fastcall sub_1402F3684(__int64 a1)
{
  __int64 v2; // rax

  v2 = sub_1407A347C(qword_140D06A60, a1);
  *(_QWORD *)(a1 + 1232) = v2;
  return v2 == 0 ? 0xC000009A : 0;
}
