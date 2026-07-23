/*
 * XREFs of sub_140655828 @ 0x140655828
 * Callers:
 *     sub_140655A20 @ 0x140655A20 (sub_140655A20.c)
 *     sub_140655B30 @ 0x140655B30 (sub_140655B30.c)
 * Callees:
 *     sub_14065599C @ 0x14065599C (sub_14065599C.c)
 *     sub_1406559DC @ 0x1406559DC (sub_1406559DC.c)
 *     sub_140655BF8 @ 0x140655BF8 (sub_140655BF8.c)
 *     sub_140655C34 @ 0x140655C34 (sub_140655C34.c)
 */

__int64 __fastcall sub_140655828(int a1)
{
  unsigned int v1; // ecx
  int v3; // [rsp+30h] [rbp+10h] BYREF
  __int64 v4; // [rsp+38h] [rbp+18h] BYREF

  v3 = 0;
  v4 = 0LL;
  if ( a1 )
  {
    if ( a1 != 1 )
      return 2;
    v1 = sub_14065599C(&v3);
    if ( !v1 )
    {
      v3 &= 0xFFFFFFF9;
      v1 = sub_140655BF8(&v3);
      if ( !v1 )
      {
        v1 = sub_14065599C(&v3);
        if ( !v1 )
        {
          if ( (v3 & 4) != 0 )
            return 2;
          if ( (v3 & 2) != 0 )
            return 2;
          v1 = sub_1406559DC(&v4);
          if ( !v1 )
          {
            if ( (v4 & 3) == 3 )
              return 2;
            LODWORD(v4) = v4 & 0xFFFF7FFC | 3;
            v1 = sub_140655C34(&v4);
            if ( !v1 )
            {
              v1 = sub_1406559DC(&v4);
              if ( !v1 && (v4 & 3) != 3 )
                return 2;
            }
          }
        }
      }
    }
  }
  else
  {
    v1 = sub_1406559DC(&v4);
    if ( !v1 )
    {
      if ( (v4 & 3) == 0 )
        return 2;
      LODWORD(v4) = v4 & 0xFFFF7FFC | 0x8000;
      v1 = sub_140655C34(&v4);
      if ( !v1 )
      {
        v1 = sub_1406559DC(&v4);
        if ( !v1 )
        {
          if ( (v4 & 3) != 0 )
            return 2;
          v1 = sub_14065599C(&v3);
          if ( !v1 )
          {
            v3 |= 6u;
            v1 = sub_140655BF8(&v3);
            if ( !v1 )
            {
              v1 = sub_14065599C(&v3);
              if ( !v1 && ((v3 & 4) == 0 || (v3 & 2) == 0) )
                return 2;
            }
          }
        }
      }
    }
  }
  return v1;
}
