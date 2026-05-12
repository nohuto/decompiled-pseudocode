/*
 * XREFs of sub_1C007E6FC @ 0x1C007E6FC
 * Callers:
 *     sub_1C007DA18 @ 0x1C007DA18 (sub_1C007DA18.c)
 * Callees:
 *     sub_1C0055B8C @ 0x1C0055B8C (sub_1C0055B8C.c)
 *     sub_1C007A4E8 @ 0x1C007A4E8 (sub_1C007A4E8.c)
 *     sub_1C007CF64 @ 0x1C007CF64 (sub_1C007CF64.c)
 *     sub_1C007D268 @ 0x1C007D268 (sub_1C007D268.c)
 */

__int64 __fastcall sub_1C007E6FC(int **a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  int *v7; // rcx
  bool v8; // zf
  int v9; // [rsp+50h] [rbp-20h] BYREF
  __int64 v10; // [rsp+54h] [rbp-1Ch]
  int v11; // [rsp+5Ch] [rbp-14h]
  int v12; // [rsp+60h] [rbp-10h]
  int v13; // [rsp+64h] [rbp-Ch]
  __int64 v14; // [rsp+B0h] [rbp+40h] BYREF

  *a3 = 0LL;
  v14 = 0LL;
  result = sub_1C007D268((__int64)a1, a2, 0x80200000001LL, 0xAu, (__int64)&v14, 8, 0LL);
  if ( (int)result >= 0 )
  {
    v13 = 0;
    v11 = 0;
    v9 = 3;
    v10 = 3LL;
    v12 = 1;
    sub_1C007A4E8((char *)&v14, 8u);
    v7 = *a1;
    v8 = (v14 & 0xFFFFFFFF00000000uLL) == 0x80500000000LL;
    v14 &= 0xFFFFFFFF00000000uLL;
    sub_1C0055B8C(v7, "GetSecretProtection", !v8 + 29, 22, 0LL, 0LL);
    return sub_1C007CF64(
             (__int64)a1,
             a2,
             (v14 != 0x80500000000LL) + 0x1D0000001DLL,
             0x600000016LL,
             (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))sub_1C007C8A0,
             (__int64)&v9,
             0LL,
             0LL,
             (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_1C007E470,
             (__int64)a3);
  }
  return result;
}
