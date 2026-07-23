/*
 * XREFs of sub_140720224 @ 0x140720224
 * Callers:
 *     sub_140714980 @ 0x140714980 (sub_140714980.c)
 *     sub_14071F740 @ 0x14071F740 (sub_14071F740.c)
 *     sub_14071FAA0 @ 0x14071FAA0 (sub_14071FAA0.c)
 *     sub_14090EF60 @ 0x14090EF60 (sub_14090EF60.c)
 * Callees:
 *     sub_1407D557C @ 0x1407D557C (sub_1407D557C.c)
 */

bool __fastcall sub_140720224(int a1, __int64 a2)
{
  return a1 || *((_QWORD *)&xmmword_140C490E0 + 1) && !(unsigned __int8)sub_1407D557C(a2);
}
