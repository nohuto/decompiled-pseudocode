/*
 * XREFs of sub_140A73844 @ 0x140A73844
 * Callers:
 *     sub_140A73A64 @ 0x140A73A64 (sub_140A73A64.c)
 * Callees:
 *     sub_14028F978 @ 0x14028F978 (sub_14028F978.c)
 */

__int64 __fastcall sub_140A73844(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4, int a5)
{
  __int64 v5; // rbx
  unsigned int v6; // edi
  unsigned int v9; // esi
  int v10; // r15d
  unsigned int v11; // esi
  unsigned int v13; // r14d
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // edx
  int v17; // eax
  unsigned __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v19[8]; // [rsp+38h] [rbp-40h] BYREF

  v5 = a1 << 12;
  v6 = 0;
  if ( qword_140C40400 )
  {
    v18 = 0LL;
    v9 = 0;
    while ( 1 )
    {
      if ( (int)sub_14028F978((char *)(v5 + v9), (__int64)&v18, 8u, 8u, a5 | 2u) >= 0
        && ((v18 >> 12) & 0xFFFFFFFFFFLL) == a2 )
      {
        if ( (unsigned int)dword_140C3C3EC < 0x1000 )
        {
          qword_140C343E0[dword_140C3C3EC] = a1;
          dword_140C3C400[dword_140C3C3EC++] = v9;
        }
        if ( (a4 & 1) == 0 )
          break;
      }
      v9 += 8;
      if ( v9 >= 0x1000 )
        return v6;
    }
  }
  else
  {
    v10 = dword_140C3C3E8 & 2;
    v19[0] = 0LL;
    if ( (dword_140C3C3E8 & 0x3C) != 0 )
    {
      v11 = ((unsigned int)dword_140C3C3E8 >> 2) & 0xF;
      if ( v11 > 8 )
        return 0LL;
    }
    else
    {
      v11 = 8;
    }
    v13 = 0;
    while ( 1 )
    {
      if ( (int)sub_14028F978((char *)(v5 + v13), (__int64)v19, v11, 0, a5 | 2u) >= 0 )
      {
        if ( v19[0] >= a2 && v19[0] <= a3 )
          goto LABEL_24;
        if ( !v10 )
        {
          v14 = a2 ^ v19[0];
          v15 = 64LL;
          v16 = 0;
          do
          {
            v17 = v16 + 1;
            if ( (v14 & 1) == 0 )
              v17 = v16;
            v14 >>= 1;
            v16 = v17;
            --v15;
          }
          while ( v15 );
          if ( v17 == 1 )
          {
LABEL_24:
            if ( (unsigned int)dword_140C3C3EC < 0x1000 )
            {
              qword_140C343E0[dword_140C3C3EC] = a1;
              dword_140C3C400[dword_140C3C3EC++] = v13;
            }
            if ( (a4 & 1) == 0 )
              break;
          }
        }
      }
      v13 += v11;
      if ( v13 >= 0x1000 )
        return v6;
    }
  }
  return 1;
}
