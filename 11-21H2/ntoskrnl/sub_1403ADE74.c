/*
 * XREFs of sub_1403ADE74 @ 0x1403ADE74
 * Callers:
 *     HalGetBusDataByOffset @ 0x1403ADE20 (HalGetBusDataByOffset.c)
 *     sub_14051876C @ 0x14051876C (sub_14051876C.c)
 * Callees:
 *     sub_1403ADF94 @ 0x1403ADF94 (sub_1403ADF94.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_1403ADE74(__int64 a1, __int64 a2, __int64 a3, char *a4, unsigned int a5, unsigned int Size)
{
  unsigned int v6; // r14d
  unsigned int v7; // ebp
  unsigned int v9; // ebx
  char v10; // r12
  unsigned int v11; // esi
  unsigned __int16 v12; // r15
  unsigned int v13; // esi
  __int64 v14; // rdx
  _WORD v16[32]; // [rsp+30h] [rbp-98h] BYREF

  v6 = a5;
  v7 = 4096;
  v9 = a3;
  if ( Size <= 0x1000 )
    v7 = Size;
  v10 = a2;
  v11 = 0;
  v12 = a1;
  if ( a5 < 0x40 )
  {
    sub_1403ADF94(a1, a2, a3, v16, 0, 64);
    v13 = 2;
    if ( v16[0] != 0xFFFF )
      v13 = 64;
    if ( v13 >= a5 )
    {
      v11 = v13 - a5;
      if ( v11 > v7 )
        v11 = v7;
      memmove(a4, (char *)v16 + a5, v11);
      a4 += v11;
      v6 = v11 + a5;
      v7 -= v11;
      goto LABEL_10;
    }
    return 0LL;
  }
  sub_1403ADF94(a1, a2, a3, v16, 0, 4);
  if ( v16[0] == 0xFFFF )
    return 0LL;
LABEL_10:
  if ( v7 )
  {
    if ( v6 >= 0x40 )
    {
      LOBYTE(v14) = v10;
      sub_1403ADF94(v12, v14, v9, a4, v6, v7);
      v11 += v7;
    }
  }
  return v11;
}
