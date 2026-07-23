/*
 * XREFs of sub_1408588DC @ 0x1408588DC
 * Callers:
 *     sub_140858820 @ 0x140858820 (sub_140858820.c)
 * Callees:
 *     sub_14085894C @ 0x14085894C (sub_14085894C.c)
 *     sub_14098C234 @ 0x14098C234 (sub_14098C234.c)
 */

__int64 sub_1408588DC()
{
  unsigned int v0; // ebx
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v2 = 0;
  if ( !dword_140C0C7E4 )
    return 2;
  sub_14085894C(&v2);
  if ( v2 )
  {
    return 2;
  }
  else if ( (unsigned int)(dword_140C0C7E4 - 1) <= 0xFFFFFFFD )
  {
    return 1;
  }
  else if ( BYTE6(xmmword_140C23400) )
  {
    if ( byte_140C5AC3C )
    {
      sub_14098C234(&v2);
      if ( v2 )
      {
        return 4;
      }
      else if ( dword_140D050E4 )
      {
        if ( dword_140D05084 < (unsigned int)dword_140D050E4 || dword_140D05084 > (unsigned int)dword_140D05258 )
          return 8;
      }
      else
      {
        return 5;
      }
    }
    else
    {
      return 6;
    }
  }
  else
  {
    return 3;
  }
  return v0;
}
