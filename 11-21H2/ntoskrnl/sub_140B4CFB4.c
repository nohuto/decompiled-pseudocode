/*
 * XREFs of sub_140B4CFB4 @ 0x140B4CFB4
 * Callers:
 *     sub_140B4D124 @ 0x140B4D124 (sub_140B4D124.c)
 * Callees:
 *     sub_140B4CCF8 @ 0x140B4CCF8 (sub_140B4CCF8.c)
 *     sub_140B4D03C @ 0x140B4D03C (sub_140B4D03C.c)
 */

__int64 sub_140B4CFB4()
{
  __int64 result; // rax
  __int64 v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  result = sub_140B4D03C(qword_14041B0E0, byte_14041B352 - (char *)qword_14041B0E0, &v1);
  if ( (int)result >= 0 )
  {
    result = sub_140B4CCF8(qword_140C4AC00, v1, (unsigned __int64)qword_14041B0E0, 1, 32);
    if ( (int)result >= 0 )
      return sub_140B4D03C(
               *(_QWORD *)(*(_QWORD *)(qword_140C54AC0 + 240) + 3504LL),
               *(_QWORD *)(*(_QWORD *)(qword_140C54AC0 + 240) + 3512LL),
               0LL);
  }
  return result;
}
