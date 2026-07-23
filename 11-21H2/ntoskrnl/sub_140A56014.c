/*
 * XREFs of sub_140A56014 @ 0x140A56014
 * Callers:
 *     sub_140A56780 @ 0x140A56780 (sub_140A56780.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A56014(__int64 *a1)
{
  unsigned __int64 v1; // r9
  unsigned int v2; // r10d
  __int64 v4; // r10
  unsigned __int64 k; // r8
  unsigned int v6; // r11d
  int v7; // eax
  __int64 result; // rax
  unsigned int v9; // r11d
  unsigned __int64 v10; // r8
  unsigned __int64 i; // r9
  unsigned int v12; // ecx
  unsigned __int64 v13; // r8
  unsigned __int64 j; // r11
  unsigned int v15; // ecx
  unsigned int v16; // ecx

  v1 = *a1;
  *((_DWORD *)a1 + 4) = 576;
  v2 = 2;
  *((_DWORD *)a1 + 138) = 576;
  *((_DWORD *)a1 + 208) = 576;
  if ( (*((_DWORD *)a1 + 5) & 2) != 0 )
  {
    v9 = 2;
    v10 = (unsigned __int64)a1[68] >> 2;
    for ( i = v1 >> 2; i; i >>= 1 )
    {
      if ( v9 >= 0x40 )
        break;
      if ( (i & 1) != 0 )
      {
        v12 = *((_DWORD *)a1 + 4);
        if ( (v10 & 1) != 0 )
        {
          v12 = (v12 + 63) & 0xFFFFFFC0;
          *((_DWORD *)a1 + 4) = v12;
        }
        LODWORD(a1[v9 + 3]) = v12;
        *((_DWORD *)a1 + 4) += HIDWORD(a1[v9 + 3]);
      }
      v10 >>= 1;
      ++v9;
    }
    v1 = *a1;
    v13 = (*a1 | (unsigned __int64)a1[67]) >> 2;
    for ( j = (unsigned __int64)a1[68] >> 2; v13; v13 >>= 1 )
    {
      if ( v2 >= 0x40 )
        break;
      if ( (v13 & 1) != 0 )
      {
        v15 = *((_DWORD *)a1 + 138);
        if ( (j & 1) != 0 )
        {
          v15 = (v15 + 63) & 0xFFFFFFC0;
          *((_DWORD *)a1 + 138) = v15;
        }
        *((_DWORD *)a1 + 138) = *((_DWORD *)a1 + v2 + 139) + v15;
        if ( v2 != 18 )
        {
          v16 = *((_DWORD *)a1 + 208);
          if ( (j & 1) != 0 )
          {
            v16 = (v16 + 63) & 0xFFFFFFC0;
            *((_DWORD *)a1 + 208) = v16;
          }
          *((_DWORD *)a1 + 208) = *((_DWORD *)a1 + v2 + 139) + v16;
        }
      }
      j >>= 1;
      ++v2;
    }
  }
  else
  {
    v4 = 0LL;
    for ( k = v1; k; k >>= 1 )
    {
      if ( (unsigned int)v4 >= 0x40 )
        break;
      if ( (k & 1) != 0 )
      {
        v6 = HIDWORD(a1[v4 + 3]) + LODWORD(a1[v4 + 3]);
        if ( *((_DWORD *)a1 + 4) < v6 )
          *((_DWORD *)a1 + 4) = v6;
      }
      v4 = (unsigned int)(v4 + 1);
    }
    v7 = *((_DWORD *)a1 + 4);
    *((_DWORD *)a1 + 138) = v7;
    *((_DWORD *)a1 + 208) = v7;
  }
  a1[103] &= v1;
  a1[1] = v1 & 0xBFFFFFFFFFFFFFEFuLL;
  result = a1[67] & 0x800;
  a1[102] = result;
  return result;
}
