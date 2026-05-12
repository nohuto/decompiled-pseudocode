/*
 * XREFs of sub_1C007994C @ 0x1C007994C
 * Callers:
 *     sub_1C007984C @ 0x1C007984C (sub_1C007984C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C007994C(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // rax
  __int64 i; // r8
  __int64 v5; // rax

  result = (unsigned int)(a3 - 1);
  for ( i = (int)result; i >= 0; *(_WORD *)(a1 + 2 * i--) = result )
  {
    v5 = a2 & 0xF;
    a2 >>= 4;
    result = a0123456789abcd_0[v5];
  }
  return result;
}
