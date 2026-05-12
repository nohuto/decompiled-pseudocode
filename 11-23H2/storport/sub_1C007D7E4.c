/*
 * XREFs of sub_1C007D7E4 @ 0x1C007D7E4
 * Callers:
 *     sub_1C0079D34 @ 0x1C0079D34 (sub_1C0079D34.c)
 * Callees:
 *     sub_1C007D974 @ 0x1C007D974 (sub_1C007D974.c)
 */

__int64 __fastcall sub_1C007D7E4(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  __int64 v8; // r15

  result = 0LL;
  v5 = 0;
  do
  {
    if ( v5 >= *(_DWORD *)(a1 + 48) )
      break;
    result = sub_1C007D974(a1, a2, v5 + 0x800043000LL, 0x900000001LL);
    if ( (int)result >= 0 )
    {
      v8 = 2 * v5;
      result = sub_1C007D974(a1, a2, v8 + 0x80003FC00LL, 0x900000001LL);
      if ( (int)result >= 0 )
        result = sub_1C007D974(a1, a2, v8 + 0x80003FC01LL, v5 + 0x900030001LL);
    }
    ++v5;
  }
  while ( (int)result >= 0 );
  if ( a3 )
  {
    if ( (int)result >= 0 )
      return sub_1C007D974(a1, a2, 0x800038002LL, 0x900000001LL);
  }
  return result;
}
