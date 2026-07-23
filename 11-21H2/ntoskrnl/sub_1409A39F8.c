/*
 * XREFs of sub_1409A39F8 @ 0x1409A39F8
 * Callers:
 *     sub_1409A371C @ 0x1409A371C (sub_1409A371C.c)
 * Callees:
 *     sub_1409A4D70 @ 0x1409A4D70 (sub_1409A4D70.c)
 *     sub_1409A8558 @ 0x1409A8558 (sub_1409A8558.c)
 */

__int64 __fastcall sub_1409A39F8(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx

  result = *(unsigned int *)(a2 + 36);
  if ( (result & 8) == 0 )
  {
    v5 = (unsigned int)++*(_DWORD *)(a2 + 268);
    *(_QWORD *)(a2 + 256) = -1LL;
    *(_DWORD *)(a2 + 36) = result | 8;
    sub_1409A8558(v5);
    *(_DWORD *)(a2 + 36) |= 4u;
    return sub_1409A4D70(a1, 2LL);
  }
  return result;
}
