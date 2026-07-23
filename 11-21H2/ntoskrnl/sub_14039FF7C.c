/*
 * XREFs of sub_14039FF7C @ 0x14039FF7C
 * Callers:
 *     sub_14034A490 @ 0x14034A490 (sub_14034A490.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14039FF7C(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int16 v4; // r8

  result = (unsigned __int16)qword_140C5A5C8;
  if ( a3 == 1 )
  {
    v4 = 0x8000;
  }
  else
  {
    result = 0x3FFFLL;
    v4 = a3 & 0x3FFF;
  }
  *(_WORD *)(((unsigned __int16)qword_140C5A5C8 ^ *(unsigned __int16 *)(a1 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)a1 >> 12))
           + a2
           - 2) = v4;
  return result;
}
