/*
 * XREFs of sub_14051D410 @ 0x14051D410
 * Callers:
 *     sub_140397D10 @ 0x140397D10 (sub_140397D10.c)
 *     sub_1403B6180 @ 0x1403B6180 (sub_1403B6180.c)
 * Callees:
 *     sub_1403B4C50 @ 0x1403B4C50 (sub_1403B4C50.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1404593D2 @ 0x1404593D2 (sub_1404593D2.c)
 *     sub_14051D24C @ 0x14051D24C (sub_14051D24C.c)
 */

__int64 __fastcall sub_14051D410(unsigned int a1, unsigned int a2, char a3)
{
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi

  if ( byte_140C54BB0 )
  {
    if ( sub_1403B4C50(0, a1) )
    {
      v7 = sub_14051D24C(a1);
      v8 = v7;
      if ( v7 )
      {
        v9 = a1 - *(_DWORD *)(v7 + 16);
        if ( a3 )
        {
          v6 = sub_14042A5E0(*(_QWORD *)(v7 + 32), a2);
          if ( v6 >= 0 )
            *(_BYTE *)(v8 + 16LL * (unsigned int)v9 + 172) = 0;
        }
        else
        {
          v11 = 2 * v9;
          *(_BYTE *)(v7 + 8 * v11 + 172) = 1;
          v6 = sub_14042A5E0(*(_QWORD *)(v7 + 32), a2);
          if ( v6 < 0 )
            *(_BYTE *)(v8 + 8 * v11 + 172) = 0;
        }
        LOBYTE(v10) = 1;
        sub_1404593D2(v8, v10);
      }
      else
      {
        return (unsigned int)-1073700575;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v6;
}
