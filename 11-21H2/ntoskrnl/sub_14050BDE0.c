/*
 * XREFs of sub_14050BDE0 @ 0x14050BDE0
 * Callers:
 *     sub_1403A54E0 @ 0x1403A54E0 (sub_1403A54E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14050BDE0(int a1, unsigned __int16 a2)
{
  unsigned int v2; // r8d
  int v4; // ecx
  int v5; // ecx

  v2 = 0;
  if ( !byte_140C54B60 )
    return 0LL;
  if ( a2 + a1 > 3 )
    a1 = 3 - a2;
  if ( a1 )
  {
    v4 = a1 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 1 )
          return (unsigned int)dword_140C54B64;
      }
      else
      {
        return (HIBYTE(dword_140C54B64) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&dword_140C54B64 + a2);
      }
    }
    else
    {
      return *(unsigned __int16 *)((char *)&dword_140C54B64 + a2);
    }
  }
  else
  {
    return *((unsigned __int8 *)&dword_140C54B64 + a2);
  }
  return v2;
}
