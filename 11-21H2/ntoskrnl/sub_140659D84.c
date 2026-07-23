/*
 * XREFs of sub_140659D84 @ 0x140659D84
 * Callers:
 *     sub_1407308F0 @ 0x1407308F0 (sub_1407308F0.c)
 * Callees:
 *     sub_1409E8BEC @ 0x1409E8BEC (sub_1409E8BEC.c)
 */

__int64 __fastcall sub_140659D84(unsigned int a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // r8

  result = *(unsigned int *)(a2 + 2928);
  if ( (result & 4) != 0 )
  {
    v4 = qword_140014A58;
    if ( a1 != 1 )
      v4 = qword_140014A88;
    result = sub_1409E8BEC(3LL, a1, v4, a2);
    _InterlockedAnd((volatile signed __int32 *)(a2 + 2928), 0xFFFFFFFB);
  }
  return result;
}
