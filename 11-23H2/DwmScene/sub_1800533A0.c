/*
 * XREFs of sub_1800533A0 @ 0x1800533A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180056744 @ 0x180056744 (sub_180056744.c)
 */

__int64 __fastcall sub_1800533A0(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    return sub_180056744();
  return result;
}
