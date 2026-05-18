/*
 * XREFs of sub_18009B788 @ 0x18009B788
 * Callers:
 *     sub_1800986C8 @ 0x1800986C8 (sub_1800986C8.c)
 * Callees:
 *     _o_ceilf @ 0x18000BFFC (_o_ceilf.c)
 */

__int64 __fastcall sub_18009B788(__int64 a1, __int64 a2)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 result; // rax

  if ( a2 < 0 )
    v2 = (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1))
       + (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1));
  else
    v2 = (float)(int)a2;
  v3 = v2 / *(float *)&dword_1801D8A50;
  o_ceilf();
  v4 = 0LL;
  if ( v3 >= 9.223372e18 )
  {
    v3 = v3 - 9.223372e18;
    if ( v3 < 9.223372e18 )
      v4 = 0x8000000000000000uLL;
  }
  v5 = v4 + (unsigned int)(int)v3;
  v6 = 8LL;
  if ( v5 > 8 )
    v6 = v5;
  result = qword_1801D8A88;
  if ( qword_1801D8A88 < v6 )
  {
    if ( (unsigned __int64)qword_1801D8A88 < 0x200 && 8 * qword_1801D8A88 >= v6 )
      return 8 * qword_1801D8A88;
    return v6;
  }
  return result;
}
