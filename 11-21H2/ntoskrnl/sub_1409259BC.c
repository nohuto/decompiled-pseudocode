/*
 * XREFs of sub_1409259BC @ 0x1409259BC
 * Callers:
 *     sub_140925338 @ 0x140925338 (sub_140925338.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1409259BC(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = sub_14042A5E0(a3, a1);
  if ( (int)result >= 0 )
  {
    *(_OWORD *)a4 = MEMORY[0];
    *(_OWORD *)(a4 + 16) = MEMORY[0x10];
    *(_QWORD *)(a4 + 32) = MEMORY[0x20];
  }
  return result;
}
