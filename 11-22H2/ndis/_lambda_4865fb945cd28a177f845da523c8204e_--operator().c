/*
 * XREFs of _lambda_4865fb945cd28a177f845da523c8204e_::operator() @ 0x1C013A064
 * Callers:
 *     KRegKey::QueryValueBlob__lambda_4865fb945cd28a177f845da523c8204e___ @ 0x1C0139BAC (KRegKey--QueryValueBlob__lambda_4865fb945cd28a177f845da523c8204e___.c)
 * Callees:
 *     memmove @ 0x1C0038280 (memmove.c)
 */

__int64 __fastcall lambda_4865fb945cd28a177f845da523c8204e_::operator()(_DWORD **a1, _DWORD *a2, unsigned int a3)
{
  __int64 v4; // r10
  char *v5; // r8
  char *v6; // r10
  unsigned int v7; // r9d
  unsigned int v8; // ecx
  unsigned int v9; // eax
  char *v10; // rcx
  size_t v11; // r8
  char *v12; // r10
  _DWORD *v13; // r9

  if ( a3 >= 4 && *a2 == 2 && a3 - 4 >= 0x18 )
  {
    v4 = a3;
    v5 = (char *)(a2 + 1);
    v6 = (char *)a2 + v4;
    v7 = 0;
    while ( 1 )
    {
      v8 = *((_DWORD *)v5 + 1);
      v9 = v8 + *((_DWORD *)v5 + 2);
      if ( v9 < v8 )
        break;
      v10 = &v5[v9];
      if ( v10 < v5 || v10 > v6 )
        break;
      ++v7;
      v5 += 12;
      if ( v7 >= 2 )
      {
        if ( a2[1] == 7 && a2[4] == 18 )
        {
          v11 = (unsigned int)a2[5];
          if ( a2[2] == 4 )
          {
            if ( a2[5] )
            {
              if ( (v11 & 1) == 0 )
              {
                v12 = (char *)a2 + (unsigned int)a2[6];
                if ( !v12[v11 + 15] && !v12[v11 + 14] )
                {
                  v13 = *a1;
                  *v13 = *(_DWORD *)((char *)a2 + (unsigned int)a2[3] + 4);
                  memmove(v13 + 1, v12 + 16, v11);
                  return 0LL;
                }
              }
            }
          }
        }
        return 3221225534LL;
      }
    }
  }
  return 3221225534LL;
}
