/*
 * XREFs of sub_14081A4FC @ 0x14081A4FC
 * Callers:
 *     sub_14081A3AC @ 0x14081A3AC (sub_14081A3AC.c)
 * Callees:
 *     sub_140293A88 @ 0x140293A88 (sub_140293A88.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

unsigned __int64 __fastcall sub_14081A4FC(char a1)
{
  char v1; // r12
  unsigned __int64 result; // rax
  unsigned __int16 v3; // di
  __int64 v4; // rbx
  char v5; // al
  _BYTE *v6; // r14
  __int64 *v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  _QWORD v14[34]; // [rsp+38h] [rbp-D0h] BYREF

  v1 = a1;
  result = (unsigned __int64)memset(v14, 0, 0x108uLL);
  v3 = 0;
  if ( dword_140C1CF34 )
  {
    while ( 1 )
    {
      v4 = qword_140C1CF38 + 336LL * v3;
      v5 = *(_BYTE *)(v4 + 146);
      if ( v1 )
        break;
      if ( (v5 & 8) == 0 )
        goto LABEL_4;
      *(_BYTE *)(v4 + 146) = v5 & 0xF7;
      LODWORD(v14[0]) = 2097153;
      memset((char *)v14 + 4, 0, 0x104uLL);
      v11 = *(unsigned __int16 *)(v4 + 4);
      v12 = *(_QWORD *)(v4 + 8);
      if ( (_WORD)v11 )
      {
        if ( WORD1(v14[0]) <= (unsigned __int16)v11 )
          goto LABEL_18;
        LOWORD(v14[0]) = v11 + 1;
      }
      v14[v11 + 1] |= v12;
LABEL_18:
      sub_140293A88((__int64)v14, (__int64)sub_1405C8360, 0LL, 0LL);
LABEL_4:
      result = ++v3;
      if ( v3 >= (unsigned int)dword_140C1CF34 )
        return result;
    }
    if ( (v5 & 8) != 0 )
      goto LABEL_4;
    v6 = (_BYTE *)(v4 + 128);
    *(_BYTE *)(v4 + 146) = v5 | 8;
    v7 = (__int64 *)(v4 + 152);
    v8 = 2LL;
    while ( !*v6 )
    {
LABEL_12:
      ++v7;
      ++v6;
      if ( !--v8 )
      {
        v1 = a1;
        goto LABEL_4;
      }
    }
    LODWORD(v14[0]) = 2097153;
    memset((char *)v14 + 4, 0, 0x104uLL);
    v9 = *(unsigned __int16 *)(v4 + 4);
    v10 = *(v7 - 17);
    if ( (_WORD)v9 )
    {
      if ( WORD1(v14[0]) <= (unsigned __int16)v9 )
        goto LABEL_11;
      LOWORD(v14[0]) = v9 + 1;
    }
    v14[v9 + 1] |= v10;
LABEL_11:
    sub_140293A88((__int64)v14, (__int64)sub_1403D9880, *(_QWORD *)(v4 + 72), *v7);
    goto LABEL_12;
  }
  return result;
}
