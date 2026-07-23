/*
 * XREFs of sub_140372070 @ 0x140372070
 * Callers:
 *     sub_14036EDD4 @ 0x14036EDD4 (sub_14036EDD4.c)
 *     sub_140371D3C @ 0x140371D3C (sub_140371D3C.c)
 * Callees:
 *     sub_140352090 @ 0x140352090 (sub_140352090.c)
 *     sub_1403721D8 @ 0x1403721D8 (sub_1403721D8.c)
 */

__int64 __fastcall sub_140372070(__int64 a1, unsigned __int64 a2, unsigned __int8 a3, int a4)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  __int64 *v8; // r14
  __int64 result; // rax
  unsigned __int64 v10; // rax
  int v11; // r9d
  int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // [rsp+38h] [rbp-30h]
  __int64 v15; // [rsp+38h] [rbp-30h]
  unsigned __int64 v16; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp+10h] BYREF

  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_BYTE *)(a1 + 49) = a3;
  *(_BYTE *)(a1 + 50) = a4;
  *(_QWORD *)(a1 + 16) = a2;
  *(_BYTE *)(a1 + 48) = a4 != 0;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 2147483653LL;
  v5 = (((a2 + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v6 = ((((v5 >> 12) + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v7 = *(unsigned int *)(a1 + 52);
  v17 = v6;
  if ( ((v6 >> 12) + 7) >> 3 > v7 )
    return 2147483653LL;
  v8 = (__int64 *)(a1 + 8);
  v16 = v6 + v5;
  result = sub_140352090((__int64 *)(a1 + 8), (__int64 *)&v16, 0LL, 1056768, 4, a3, (unsigned __int8)a4, v14, 0);
  if ( (int)result >= 0 )
  {
    _BitScanForward64(&v10, v16);
    v11 = *(unsigned __int8 *)(a1 + 50);
    v12 = *(unsigned __int8 *)(a1 + 49);
    v13 = *v8;
    *(_BYTE *)(a1 + 51) = v10;
    result = sub_1403721D8(v13, v5, v12, v11, 0);
    if ( (int)result >= 0 )
    {
      *(_QWORD *)a1 = v5 + *v8;
      if ( v6 <= 0x1000 )
      {
        result = sub_140352090(
                   (__int64 *)a1,
                   (__int64 *)&v17,
                   0LL,
                   1073745920,
                   4,
                   *(unsigned __int8 *)(a1 + 49),
                   *(unsigned __int8 *)(a1 + 50),
                   v15,
                   0);
        if ( (int)result < 0 )
          return result;
        *(_QWORD *)(a1 + 56) = 1LL;
      }
      return 0LL;
    }
  }
  return result;
}
