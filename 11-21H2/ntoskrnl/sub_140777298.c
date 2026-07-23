/*
 * XREFs of sub_140777298 @ 0x140777298
 * Callers:
 *     sub_14076DD0C @ 0x14076DD0C (sub_14076DD0C.c)
 *     sub_140776CFC @ 0x140776CFC (sub_140776CFC.c)
 *     sub_1407770E0 @ 0x1407770E0 (sub_1407770E0.c)
 *     sub_140777CF0 @ 0x140777CF0 (sub_140777CF0.c)
 *     sub_140778100 @ 0x140778100 (sub_140778100.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140777298(int a1)
{
  unsigned int v1; // edx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v6; // ecx
  int v7; // ecx

  v1 = 0;
  v2 = a1 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v6 = v4 - 1;
        if ( v6 )
        {
          v7 = v6 - 3;
          if ( v7 )
          {
            if ( v7 == 4 )
              return 6;
          }
          else
          {
            return 2;
          }
        }
        else
        {
          return 4;
        }
      }
      else
      {
        return 1;
      }
    }
    else
    {
      return 5;
    }
  }
  else
  {
    return 3;
  }
  return v1;
}
