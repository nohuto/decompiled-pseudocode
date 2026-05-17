/*
 * XREFs of LdrpThumbProcessRelocation @ 0x1800EED9C
 * Callers:
 *     LdrProcessRelocationBlockLongLong @ 0x18008B70C (LdrProcessRelocationBlockLongLong.c)
 * Callees:
 *     LdrpArmProcessRelocation @ 0x1800EECBC (LdrpArmProcessRelocation.c)
 */

__int64 __fastcall LdrpThumbProcessRelocation(unsigned __int16 *a1, __int64 a2, int a3)
{
  int v4; // r9d
  __int16 *v5; // rbx
  unsigned int v6; // edi
  __int16 v7; // r11
  __int16 v8; // r8
  unsigned int v9; // r9d
  int v10; // r10d
  __int16 v11; // cx
  unsigned int v12; // r10d
  __int16 v13; // ax
  __int16 v14; // cx

  v4 = *a1 >> 12;
  v5 = (__int16 *)(a2 + (*a1 & 0xFFE));
  v6 = 1;
  if ( v4 == 5 )
  {
    return (unsigned int)LdrpArmProcessRelocation(a1, a2, a3);
  }
  else if ( v4 == 7 )
  {
    v7 = v5[2];
    v8 = *v5;
    v9 = (unsigned __int16)v5[1];
    v10 = ((unsigned __int8)v5[3] | ((unsigned __int16)v5[3] >> 4) & 0x700 | (unsigned __int16)(2
                                                                                              * ((v7 << 11) | v7 & 0x400))) << 16;
    v11 = (*v5 << 11) | *v5 & 0x400;
    v5[3] &= 0x8F00u;
    v12 = a3 + ((unsigned __int8)v9 | (v9 >> 4) & 0x700 | (unsigned __int16)(2 * v11) | v10);
    *v5 = v8 & 0xFBF0 | ((unsigned __int16)(((unsigned __int16)v12 >> 11) | v12 & 0x800) >> 1);
    v13 = (unsigned __int8)v12;
    v14 = v12 & 0x700;
    v12 >>= 16;
    v5[1] = v13 | v9 & 0x8F00 | (16 * v14);
    v5[3] |= (unsigned __int8)v12 | (unsigned __int16)(16 * (v12 & 0x700));
    v5[2] = v7 & 0xFBF0 | ((unsigned __int16)(((unsigned __int16)v12 >> 11) | v12 & 0x800) >> 1);
  }
  else
  {
    return 0;
  }
  return v6;
}
