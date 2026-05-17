/*
 * XREFs of LdrpGenericProcessRelocation @ 0x1800EFC2C
 * Callers:
 *     LdrProcessRelocationBlockLongLong @ 0x1800EF98C (LdrProcessRelocationBlockLongLong.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpGenericProcessRelocation(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r10d
  _QWORD *v4; // r9
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx

  v3 = 1;
  v4 = (_QWORD *)(a2 + (*a1 & 0xFFF));
  v5 = *a1 >> 12;
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
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 == 6 )
              *v4 += a3;
            else
              return 0;
          }
          else
          {
            v3 = 2;
            *(_WORD *)v4 = (a1[1] + 0x8000 + (unsigned int)a3 + (*(unsigned __int16 *)v4 << 16)) >> 16;
          }
        }
        else
        {
          *(_DWORD *)v4 += a3;
        }
      }
      else
      {
        *(_WORD *)v4 += a3;
      }
    }
    else
    {
      *(_WORD *)v4 = ((unsigned int)a3 + (*(unsigned __int16 *)v4 << 16)) >> 16;
    }
  }
  return v3;
}
