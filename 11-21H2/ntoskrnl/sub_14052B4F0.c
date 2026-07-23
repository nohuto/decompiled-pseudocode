/*
 * XREFs of sub_14052B4F0 @ 0x14052B4F0
 * Callers:
 *     sub_14052B218 @ 0x14052B218 (sub_14052B218.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14052B4F0(int a1, unsigned __int64 a2, _BYTE *a3)
{
  int v3; // r10d
  unsigned int v4; // r9d
  unsigned __int8 v6; // cl
  unsigned int v7; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax

  v3 = 1 << a1;
  v4 = (unsigned __int8)a2 | (a2 >> 24) & 0xF00;
  v6 = *((_BYTE *)KeGetCurrentPrcb() + 64);
  if ( v6 == 21 )
  {
    v7 = a2 & 0xF0;
    if ( v7 > 0x60 )
    {
      v10 = v7 - 112;
      if ( v10 )
      {
        v11 = v10 - 16;
        if ( v11 )
        {
          v12 = v11 - 16;
          if ( v12 )
          {
            v13 = v12 - 48;
            if ( !v13 )
              goto LABEL_27;
            if ( v13 != 16 )
            {
LABEL_10:
              *a3 = 0;
              return 1;
            }
          }
        }
      }
    }
    else if ( v7 != 96 )
    {
      if ( (a2 & 0xF0) == 0 || v7 == 16 )
      {
        if ( v4 && (v4 <= 2 || v4 > 4) )
          return v3 & 0x38;
        return v3 & 8;
      }
      if ( v7 != 32 && v7 != 48 && v7 != 64 && v7 != 80 )
        goto LABEL_10;
LABEL_27:
      if ( v4 != 35 && v4 != 67 && (v4 <= 0x44 || v4 > 0x46 && v4 != 84) )
      {
        if ( v4 == 448 )
          return v3 & 0x38;
        return v3 & 0x3F;
      }
      return v3 & 7;
    }
    if ( v4 >= 0xDB && (v4 <= 0xDF || v4 == 464 || v4 == 472) )
      return v3 & 0x3F;
    return v3 & 7;
  }
  if ( v6 < 0x17u || v4 != 3 )
    goto LABEL_10;
  if ( (v3 & 0x15) != 0 && !__readmsr(*((_DWORD *)&xmmword_140C49FA0 + (unsigned int)(a1 + 1))) )
  {
    *a3 = 1;
    return 1;
  }
  return 0;
}
