/*
 * XREFs of sub_140592690 @ 0x140592690
 * Callers:
 *     sub_140593388 @ 0x140593388 (sub_140593388.c)
 * Callees:
 *     sub_14026C720 @ 0x14026C720 (sub_14026C720.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140592690(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rdi
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 result; // rax
  __int64 v11; // r10

  v3 = 0;
  v4 = a3;
  if ( a3 )
  {
    v6 = a2 + 1;
    v7 = 48 * a2 - 0x220000000000LL;
    do
    {
      if ( sub_14026C720(v7) )
      {
        if ( v8 )
        {
          result = sub_14042A5E0(a1, v9);
          v3 = result;
          if ( (int)result < 0 )
            return result;
        }
        v9 = v6;
        v11 = 0LL;
      }
      else
      {
        v11 = v8 + 1;
      }
      v7 += 48LL;
      ++v6;
      --v4;
    }
    while ( v4 );
    if ( v11 )
      return (unsigned int)sub_14042A5E0(a1, v9);
  }
  return v3;
}
