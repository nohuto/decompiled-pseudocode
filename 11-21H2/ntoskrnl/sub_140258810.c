/*
 * XREFs of sub_140258810 @ 0x140258810
 * Callers:
 *     sub_140A47990 @ 0x140A47990 (sub_140A47990.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140258810(_DWORD *a1)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v10; // ecx
  int v11; // ecx

  v2 = *(_DWORD *)(qword_140C4E4B0 + 228);
  if ( v2 == 12 )
    v2 = *(_DWORD *)(*(_QWORD *)&qword_140C4C7E0 + 228LL);
  *a1 = 1;
  v3 = v2 - 2;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( v8 )
            {
              v10 = v8 - 1;
              if ( v10 )
              {
                v11 = v10 - 3;
                if ( v11 )
                {
                  if ( v11 == 4085 )
                    a1[1] = 11;
                  else
                    a1[1] = 0;
                }
                else
                {
                  a1[1] = 13;
                }
              }
              else
              {
                a1[1] = 10;
              }
            }
            else
            {
              a1[1] = 9;
            }
          }
          else
          {
            a1[1] = 8;
          }
        }
        else
        {
          a1[1] = 6;
        }
      }
      else
      {
        a1[1] = 1;
      }
    }
    else
    {
      a1[1] = 5;
    }
  }
  else
  {
    a1[1] = 2;
  }
  switch ( *(_DWORD *)(qword_140C4E390 + 228) )
  {
    case 1:
      a1[2] = 3;
      break;
    case 3:
      a1[2] = 5;
      break;
    case 5:
      a1[2] = 6;
      break;
    case 6:
      a1[2] = 8;
      break;
    case 8:
      a1[2] = 7;
      break;
    case 9:
      a1[2] = 4;
      break;
    case 0xA:
      a1[2] = 12;
      break;
    case 0xB:
      a1[1] = 13;
      break;
    case 0x1000:
      a1[2] = 11;
      break;
    default:
      a1[2] = 0;
      break;
  }
  return 0LL;
}
