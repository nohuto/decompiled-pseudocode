/*
 * XREFs of sub_140521800 @ 0x140521800
 * Callers:
 *     <none>
 * Callees:
 *     sub_14051FFF8 @ 0x14051FFF8 (sub_14051FFF8.c)
 */

__int64 __fastcall sub_140521800(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  int v3; // edi
  __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned int v7; // r14d
  __int64 v8; // rax
  unsigned int v9; // esi
  __int64 v10; // r10
  unsigned int v11; // r11d
  unsigned int *v12; // rdx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  unsigned int v17; // ecx

  *a3 = -1LL;
  v3 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 1701736270;
  v8 = (1LL << dword_140C4A418) - 1;
  if ( a2 )
  {
    v9 = *a2;
    v10 = 0LL;
    v11 = 0;
    if ( *a2 )
    {
      v12 = a2 + 4;
      do
      {
        v13 = *(v12 - 2);
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 2;
            if ( v15 )
            {
              v16 = v15 - 1;
              if ( v16 )
              {
                if ( v16 != 1 )
                  return 3221225659LL;
                if ( v3 )
                  return 3221225485LL;
                v7 = *v12;
                v3 = 1;
              }
              else
              {
                if ( !byte_140C4A429 )
                  return 3221225659LL;
                if ( !dword_140C4A464 && !v12[2] || !v12[3] )
                  return 3221225485LL;
                v6 = (__int64)v12;
              }
            }
            else
            {
              if ( (unsigned int)dword_140C4A400 < 2 )
                return 3221225659LL;
              if ( v5 )
                return 3221225485LL;
              v5 = *(_QWORD *)v12;
            }
          }
          else
          {
            v17 = v12[1];
            if ( v17 > 0x3F || v17 < *v12 )
              return 3221225485LL;
            v10 |= ((1LL << ((unsigned __int8)v17 - (unsigned __int8)*v12 + 1)) - 1) << *v12;
          }
        }
        else
        {
          if ( *v12 > 0x3F )
            return 3221225485LL;
          v10 |= 1LL << *v12;
        }
        ++v11;
        v12 += 6;
      }
      while ( v11 < v9 );
    }
  }
  else
  {
    v10 = v8 | (((1LL << dword_140C4A460) - 1) << 32);
  }
  if ( (v10 & (v8 | (((1LL << dword_140C4A460) - 1) << 32))) == v10 )
    return sub_14051FFF8(v10, v5, a1, v6, v7, a3);
  else
    return 3221225485LL;
}
