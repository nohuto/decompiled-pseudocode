/*
 * XREFs of sub_14028F718 @ 0x14028F718
 * Callers:
 *     sub_14028F698 @ 0x14028F698 (sub_14028F698.c)
 *     sub_14035B760 @ 0x14035B760 (sub_14035B760.c)
 * Callees:
 *     sub_14028F748 @ 0x14028F748 (sub_14028F748.c)
 */

__int64 __fastcall sub_14028F718(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rdx

  result = (unsigned int)a2;
  if ( a3 < 2 )
  {
    v4 = 0LL;
    if ( (int)result < 2 )
      return result;
    return sub_14028F748(a1, v4);
  }
  if ( a2 < 2 )
  {
    v4 = 1LL;
    return sub_14028F748(a1, v4);
  }
  return result;
}
