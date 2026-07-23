/*
 * XREFs of sub_1403ADD44 @ 0x1403ADD44
 * Callers:
 *     HalSetBusDataByOffset @ 0x1403ADD00 (HalSetBusDataByOffset.c)
 * Callees:
 *     sub_1403ADC74 @ 0x1403ADC74 (sub_1403ADC74.c)
 *     sub_1403ADF94 @ 0x1403ADF94 (sub_1403ADF94.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_1403ADD44(__int64 a1, __int64 a2, __int64 a3, char *a4, unsigned int a5, size_t Size)
{
  unsigned int v6; // r12d
  unsigned int v7; // r14d
  unsigned int v8; // ebx
  unsigned __int8 v9; // di
  unsigned int v10; // r15d
  unsigned __int16 v11; // r13
  char *v13; // rax
  unsigned __int8 v14; // [rsp+30h] [rbp-99h]
  _OWORD v16[4]; // [rsp+40h] [rbp-89h] BYREF
  _OWORD v17[4]; // [rsp+80h] [rbp-49h] BYREF

  v6 = a5;
  v7 = 4096;
  v8 = a3;
  v9 = a2;
  if ( (unsigned int)Size <= 0x1000 )
    v7 = Size;
  v10 = 0;
  v14 = a2;
  v11 = a1;
  if ( a5 < 0x40 )
  {
    sub_1403ADF94(a1, a2, a3, v16, 0, 64);
    if ( LOWORD(v16[0]) == 0xFFFF || (BYTE14(v16[0]) & 0x7F) != 0 )
      return 0LL;
    v10 = 64 - a5;
    v17[0] = v16[0];
    if ( 64 - a5 > v7 )
      v10 = v7;
    v17[1] = v16[1];
    v17[2] = v16[2];
    v17[3] = v16[3];
    memmove((char *)v17 + a5, a4, v10);
    v9 = v14;
    sub_1403ADC74(v11, v14, v8, (char *)v17 + a5, a5, v10);
    v6 = v10 + a5;
    v13 = &a4[v10];
    v7 -= v10;
  }
  else
  {
    sub_1403ADF94(a1, a2, a3, v16, 0, 4);
    if ( LOWORD(v16[0]) == 0xFFFF )
      return 0LL;
    v13 = a4;
  }
  if ( v7 )
  {
    if ( v6 >= 0x40 )
    {
      sub_1403ADC74(v11, v9, v8, v13, v6, v7);
      v10 += v7;
    }
  }
  return v10;
}
