/*
 * XREFs of sub_14023F0CC @ 0x14023F0CC
 * Callers:
 *     sub_1402FBEC0 @ 0x1402FBEC0 (sub_1402FBEC0.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14023F0CC(int a1, int a2, char *a3, char *a4, bool *a5, unsigned int a6, _BYTE *a7)
{
  int v9; // r10d
  signed __int64 v10; // r9
  bool *v11; // rcx
  __int64 v12; // rsi
  int v13; // edx

  *a7 = 0;
  if ( a1 != -1 )
  {
    if ( a6 )
    {
      v10 = a4 - a3;
      v11 = a5;
      v12 = a6;
      do
      {
        v13 = a1 & *(_DWORD *)a3;
        if ( v13 != *(_DWORD *)a3 )
        {
          *a7 = 1;
          *(_DWORD *)a3 = v13;
          if ( (a2 & 0x2000000) != 0 )
          {
            if ( v13 )
            {
              *(_DWORD *)&a3[v10] = 0;
              if ( a5 )
                *v11 = 1;
            }
            else
            {
              *(_DWORD *)&a3[v10] = -1073741790;
              if ( a5 )
                *v11 = 0;
            }
          }
          else
          {
            *(_DWORD *)&a3[v10] = -1073741790;
            if ( a5 )
              *v11 = *(_DWORD *)a3 != 0;
          }
        }
        a3 += 4;
        ++v11;
        --v12;
      }
      while ( v12 );
    }
    else
    {
      v9 = a1 & *(_DWORD *)a3;
      if ( v9 != *(_DWORD *)a3 )
      {
        *a7 = 1;
        *(_DWORD *)a3 = v9;
        if ( (a2 & 0x2000000) != 0 )
        {
          if ( v9 )
          {
            *(_DWORD *)a4 = 0;
            if ( a5 )
              *a5 = 1;
          }
          else
          {
            *(_DWORD *)a4 = -1073741790;
            if ( a5 )
              *a5 = 0;
          }
        }
        else
        {
          *(_DWORD *)a4 = -1073741790;
          if ( a5 )
            *a5 = *(_DWORD *)a3 != 0;
        }
      }
    }
  }
}
