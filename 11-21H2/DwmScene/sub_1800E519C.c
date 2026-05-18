/*
 * XREFs of sub_1800E519C @ 0x1800E519C
 * Callers:
 *     sub_1800E38CC @ 0x1800E38CC (sub_1800E38CC.c)
 *     sub_1800E39FC @ 0x1800E39FC (sub_1800E39FC.c)
 * Callees:
 *     sub_1800E0240 @ 0x1800E0240 (sub_1800E0240.c)
 */

__int64 __fastcall sub_1800E519C(int a1, char a2)
{
  int v2; // edx
  __int64 result; // rax

  if ( (unsigned int)(a1 - 23) <= 1 )
    v2 = 2;
  else
    v2 = (a2 & 8) != 0;
  result = sub_1800E0240(a1, v2);
  if ( (_DWORD)result == 45 )
    return 44LL;
  if ( (_DWORD)result == 40 )
    return 39LL;
  return result;
}
