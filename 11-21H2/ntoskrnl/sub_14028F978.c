/*
 * XREFs of sub_14028F978 @ 0x14028F978
 * Callers:
 *     sub_140573408 @ 0x140573408 (sub_140573408.c)
 *     sub_140A6F124 @ 0x140A6F124 (sub_140A6F124.c)
 *     sub_140A73078 @ 0x140A73078 (sub_140A73078.c)
 *     sub_140A73628 @ 0x140A73628 (sub_140A73628.c)
 *     sub_140A73844 @ 0x140A73844 (sub_140A73844.c)
 * Callees:
 *     sub_14028FA14 @ 0x14028FA14 (sub_14028FA14.c)
 */

__int64 __fastcall sub_14028F978(char *BaseAddress, __int64 a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v5; // edi
  __int64 result; // rax
  unsigned int v9; // ebp

  v5 = a3;
  if ( a4 != 4 && a4 > 2 && a4 != 8 )
    return 2147483650LL;
  result = 0LL;
  if ( a3 )
  {
    do
    {
      v9 = v5;
      if ( 4096 - ((unsigned __int16)BaseAddress & 0xFFFu) <= v5 )
        v9 = 4096 - ((unsigned __int16)BaseAddress & 0xFFF);
      result = sub_14028FA14(BaseAddress, a5);
      if ( (int)result < 0 )
        break;
      BaseAddress += v9;
      a2 += v9;
      v5 -= v9;
    }
    while ( v5 );
  }
  return result;
}
