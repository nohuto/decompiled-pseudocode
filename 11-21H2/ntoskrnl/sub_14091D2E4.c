/*
 * XREFs of sub_14091D2E4 @ 0x14091D2E4
 * Callers:
 *     sub_14065B560 @ 0x14065B560 (sub_14065B560.c)
 *     sub_14065B6A0 @ 0x14065B6A0 (sub_14065B6A0.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 * Callees:
 *     sub_14065C7A4 @ 0x14065C7A4 (sub_14065C7A4.c)
 *     sub_14091D1FC @ 0x14091D1FC (sub_14091D1FC.c)
 */

__int64 __fastcall sub_14091D2E4(__int64 a1, __int64 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  __int64 result; // rax

  result = sub_14065C7A4(a1, *(_WORD *)(a2 + 2), a3, a4);
  if ( (int)result >= 0 )
  {
    sub_14091D1FC(a1, a2);
    return 0LL;
  }
  return result;
}
