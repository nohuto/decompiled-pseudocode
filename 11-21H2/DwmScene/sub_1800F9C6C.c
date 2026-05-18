/*
 * XREFs of sub_1800F9C6C @ 0x1800F9C6C
 * Callers:
 *     sub_1800F5EB0 @ 0x1800F5EB0 (sub_1800F5EB0.c)
 *     sub_1800F8034 @ 0x1800F8034 (sub_1800F8034.c)
 *     sub_1800F881C @ 0x1800F881C (sub_1800F881C.c)
 *     sub_1800FA570 @ 0x1800FA570 (sub_1800FA570.c)
 * Callees:
 *     _o_ceilf @ 0x18000C00C (_o_ceilf.c)
 */

unsigned __int64 __fastcall sub_1800F9C6C(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  float v3; // xmm0_4
  float v4; // xmm0_4
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 56);
  if ( a2 < 0 )
    v3 = (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1))
       + (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1));
  else
    v3 = (float)(int)a2;
  v4 = v3 / *(float *)a1;
  o_ceilf();
  v5 = 0LL;
  if ( v4 >= 9.223372e18 )
  {
    v4 = v4 - 9.223372e18;
    if ( v4 < 9.223372e18 )
      v5 = 0x8000000000000000uLL;
  }
  v6 = v5 + (unsigned int)(int)v4;
  result = 8LL;
  if ( v6 > 8 )
    result = v6;
  if ( v2 >= result )
    return v2;
  if ( v2 < 0x200 )
  {
    v2 *= 8LL;
    if ( v2 >= result )
      return v2;
  }
  return result;
}
