/*
 * XREFs of sub_14022689C @ 0x14022689C
 * Callers:
 *     sub_140226804 @ 0x140226804 (sub_140226804.c)
 *     sub_1405B2914 @ 0x1405B2914 (sub_1405B2914.c)
 * Callees:
 *     sub_1402285E8 @ 0x1402285E8 (sub_1402285E8.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026C7D0 @ 0x14026C7D0 (sub_14026C7D0.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall sub_14022689C(unsigned int a1, unsigned __int64 a2, char a3)
{
  __int64 v4; // r14
  void *result; // rax
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // r8
  int v10; // r12d
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r13
  __int64 v13; // rsi
  _QWORD *j; // rbp
  BOOL v15; // esi
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 i; // rcx
  __int64 v19; // r14
  _QWORD v20[24]; // [rsp+20h] [rbp-108h] BYREF

  v4 = a1;
  result = memset(v20, 0, 0xB8uLL);
  LODWORD(v20[1]) = 20;
  v8 = 0LL;
  v20[3] = 0LL;
  v9 = 1LL;
  v10 = 1;
  if ( (unsigned int)v4 <= 1 )
  {
    result = (void *)sub_1402285E8(v20, (unsigned int)(2 - v4), a2);
    v9 = 1LL;
    v8 = 1LL;
  }
  v11 = 0xFFFFF68000000000uLL;
  if ( (a3 & 2) != 0 )
  {
    for ( i = a2; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
    {
      if ( i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
    }
    result = (void *)sub_14026C7D0(i, v7, 1LL, 0xFFFFF68000000000uLL);
    if ( (_DWORD)result )
    {
      v10 = 0;
    }
    else if ( (unsigned int)v4 > (unsigned int)v9 )
    {
      v10 = 0;
    }
  }
  if ( !v8 )
  {
    v12 = v11 << 25;
    v13 = (__int64)((a2 << 25) - (v11 << 25)) >> 16;
    if ( (_DWORD)v4 == 3 )
    {
      v8 = v9;
LABEL_7:
      result = (void *)sub_1402CF280(v20, v13, v9, 0LL);
      goto LABEL_8;
    }
    v8 = qword_14001C780[v4];
    if ( (_DWORD)v4 == 2 )
    {
      v9 = qword_14001C780[v4];
      goto LABEL_7;
    }
    if ( (unsigned int)v4 <= (unsigned int)v9 )
    {
      v19 = (unsigned int)(2 - v4);
      do
      {
        result = (void *)sub_1402CF280(v20, v13, v8, 0LL);
        v8 <<= 9;
        v13 = (__int64)((v13 << 25) - v12) >> 16;
        --v19;
      }
      while ( v19 );
    }
    v8 = 512LL;
  }
LABEL_8:
  for ( j = (_QWORD *)(a2 + 8 * v8); a2 < (unsigned __int64)j; a2 += 8LL )
  {
    v15 = 0;
    result = (void *)sub_140317A80(a2);
    if ( (_DWORD)result )
    {
      result = (void *)sub_140229550(v17, v16);
      v15 = (_DWORD)result != 0;
    }
    *(_QWORD *)a2 = 0LL;
    if ( v15 )
      result = (void *)sub_1402294F0(a2, 0LL);
  }
  if ( v10 )
    return (void *)sub_14032F1B0(v20);
  return result;
}
