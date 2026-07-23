/*
 * XREFs of sub_1407FD8D8 @ 0x1407FD8D8
 * Callers:
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407FD8D8(int a1, int a2)
{
  unsigned int v2; // r8d
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  v2 = 0;
  if ( a1 > 7 )
  {
    v4 = a1 - 11;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 == 1 )
            return 0x1000000;
        }
        else
        {
          return 0x800000;
        }
      }
      else
      {
        return 0x400000;
      }
    }
    else
    {
      return 0x200000;
    }
  }
  else if ( a1 == 7 )
  {
    return 1024;
  }
  else if ( a1 )
  {
    if ( a1 == 1 )
    {
      return 64;
    }
    else if ( a1 == 2 )
    {
      return 128;
    }
    else if ( a1 > 3 )
    {
      if ( a1 > 5 )
        return 512;
      else
        return 256;
    }
  }
  else
  {
    v2 = 32;
    if ( a2 != 4 )
      return 16;
  }
  return v2;
}
