/*
 * XREFs of sub_140A21408 @ 0x140A21408
 * Callers:
 *     sub_14064D1D4 @ 0x14064D1D4 (sub_14064D1D4.c)
 * Callees:
 *     sub_140A215D4 @ 0x140A215D4 (sub_140A215D4.c)
 *     sub_140A21954 @ 0x140A21954 (sub_140A21954.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A21408(__int64 a1, _DWORD *a2, unsigned int a3)
{
  int v5; // ebx
  unsigned int v6; // r15d
  int v7; // eax
  _DWORD *v8; // rsi
  int v9; // ebp
  _DWORD *v10; // r13
  __int64 v11; // rcx
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  if ( a3 >= 0xC )
  {
    a2[2] = 0;
    a2[1] = 12;
    *a2 = 24;
    v6 = a3 - 12;
    v7 = sub_140A21954(a1, 21LL, 24LL, &P);
    v8 = P;
    v5 = v7;
    if ( v7 >= 0 )
    {
      v9 = 0;
      if ( *((_DWORD *)P + 2) )
      {
        while ( 1 )
        {
          v10 = &v8[3 * v9 + 3];
          v5 = sub_140A215D4(v10);
          if ( v5 < 0 )
            break;
          if ( v10[2] != -1 )
          {
            a2[1] += 12;
            if ( v6 >= 0xC )
            {
              v11 = 3 * ((unsigned int)a2[2] + 1LL);
              *(_QWORD *)&a2[v11] = *(_QWORD *)v10;
              a2[v11 + 2] = v10[2];
              ++a2[2];
              v6 -= 12;
            }
            else
            {
              v6 = 0;
            }
          }
          if ( (unsigned int)++v9 >= v8[2] )
            goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        if ( a3 < a2[1] )
          v5 = -2147483643;
      }
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return (unsigned int)v5;
}
