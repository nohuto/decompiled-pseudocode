/*
 * XREFs of sub_14080BDD0 @ 0x14080BDD0
 * Callers:
 *     sub_1405D4840 @ 0x1405D4840 (sub_1405D4840.c)
 *     sub_14080BD60 @ 0x14080BD60 (sub_14080BD60.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407628C0 @ 0x1407628C0 (sub_1407628C0.c)
 *     sub_1408111A0 @ 0x1408111A0 (sub_1408111A0.c)
 */

__int64 __fastcall sub_14080BDD0(int a1, char a2, int *a3)
{
  _DWORD *v6; // r10
  int v7; // r9d
  int v8; // r11d
  unsigned int v9; // r8d
  _BYTE v11[80]; // [rsp+20h] [rbp-58h] BYREF

  memset(v11, 0, 0x4CuLL);
  sub_1407628C0(&xmmword_140C23400, (__int64)v11);
  v6 = qword_140C231B8;
  v7 = a1;
  v8 = 1;
  v9 = 0;
  while ( 1 )
  {
    if ( v7 == v8 )
    {
LABEL_19:
      *a3 = v7;
      return v9;
    }
    if ( v7 > v8 )
    {
      if ( v7 <= 4 )
      {
        if ( v11[3] != (_BYTE)v9 || v11[4] != (_BYTE)v9 || v11[5] != (_BYTE)v9 )
        {
          if ( !a2 || v6[15] != v9 )
            goto LABEL_19;
          goto LABEL_8;
        }
      }
      else if ( v7 == 5 )
      {
        if ( (unsigned __int8)sub_1408111A0(v11) && (!a2 || v6[22] != v9) )
          goto LABEL_19;
      }
      else if ( v7 == 6 )
      {
        goto LABEL_19;
      }
    }
    if ( !a2 )
      return (unsigned int)-1073741637;
LABEL_8:
    if ( a1 )
    {
      v7 = v8;
    }
    else if ( v7 )
    {
      if ( v7 <= v8 )
        return (unsigned int)-1073741811;
      if ( v7 <= 4 )
      {
        v7 = 5;
      }
      else
      {
        if ( v7 != 5 )
          return (unsigned int)-1073741811;
        v7 = v8 + (dword_140D06B48 != 0 ? 5 : 0);
      }
    }
    else
    {
      v7 = 4;
    }
  }
}
