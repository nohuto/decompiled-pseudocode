/*
 * XREFs of sub_1409E7A80 @ 0x1409E7A80
 * Callers:
 *     sub_1406BC9D0 @ 0x1406BC9D0 (sub_1406BC9D0.c)
 * Callees:
 *     sub_1409E8BEC @ 0x1409E8BEC (sub_1409E8BEC.c)
 */

__int64 __fastcall sub_1409E7A80(unsigned int a1, __int64 a2)
{
  __int64 *v3; // r8
  __int64 result; // rax

  if ( (*(_DWORD *)(a2 + 2512) & 0x2000) != 0 )
  {
    v3 = qword_1400392B8;
    if ( a1 != 1 )
      v3 = qword_140038108;
    result = sub_1409E8BEC(2LL, a1, v3, a2);
    _InterlockedAnd((volatile signed __int32 *)(a2 + 2512), 0xFFFFDFFF);
  }
  return result;
}
