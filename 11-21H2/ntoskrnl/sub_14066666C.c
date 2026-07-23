/*
 * XREFs of sub_14066666C @ 0x14066666C
 * Callers:
 *     sub_140665B68 @ 0x140665B68 (sub_140665B68.c)
 *     sub_140668084 @ 0x140668084 (sub_140668084.c)
 * Callees:
 *     sub_1407A7E70 @ 0x1407A7E70 (sub_1407A7E70.c)
 */

__int64 __fastcall sub_14066666C(__int64 a1, _WORD *a2, char a3)
{
  if ( !a3 )
    return sub_1407A7E70(a2, 0LL);
  if ( (unsigned __int16)*a2 > (unsigned __int64)(*(_QWORD *)(a1 + 272) - 40LL) )
    *a2 = *(_WORD *)(a1 + 272) - 40;
  return 0LL;
}
