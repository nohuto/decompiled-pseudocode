/*
 * XREFs of sub_140B56B94 @ 0x140B56B94
 * Callers:
 *     sub_140B56A6C @ 0x140B56A6C (sub_140B56A6C.c)
 * Callees:
 *     sub_1403A9E4C @ 0x1403A9E4C (sub_1403A9E4C.c)
 */

__int64 __fastcall sub_140B56B94(__int64 a1, unsigned int a2, _WORD *a3)
{
  __int64 result; // rax

  result = sub_1403A9E4C(a1, a2, 0xCu, a3);
  if ( (int)result >= 0 )
  {
    *a3 = __ROR2__(*a3, 8);
    a3[1] = __ROR2__(a3[1], 8);
    a3[2] = __ROR2__(a3[2], 8);
    a3[3] = __ROR2__(a3[3], 8);
    a3[4] = __ROR2__(a3[4], 8);
    a3[5] = __ROR2__(a3[5], 8);
    return 0LL;
  }
  return result;
}
