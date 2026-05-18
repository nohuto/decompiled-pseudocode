/*
 * XREFs of sub_18003E248 @ 0x18003E248
 * Callers:
 *     sub_18003F05C @ 0x18003F05C (sub_18003F05C.c)
 * Callees:
 *     sub_18003E4F4 @ 0x18003E4F4 (sub_18003E4F4.c)
 *     sub_18003E6C4 @ 0x18003E6C4 (sub_18003E6C4.c)
 *     sub_18003EB7C @ 0x18003EB7C (sub_18003EB7C.c)
 *     sub_18003F160 @ 0x18003F160 (sub_18003F160.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003E248(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // r12d
  int v8; // r14d
  __int64 result; // rax
  int v10; // r9d
  __int64 i; // rsi
  __int64 v12; // rsi

  v7 = a2;
  v8 = a1;
  result = sub_18003EB7C(a1, a2, a3, a5);
  if ( a3 > 32 )
  {
    sub_18003F160(v8, v7, a4, v10, a3, a5);
    sub_18003E4F4(a4, a4 + 16 * a3, v8, 64, a3, a5);
    for ( i = 128LL; a3 > i; i = 2 * v12 )
    {
      sub_18003E4F4(v8, v7, a4, i, a3, a5);
      v12 = 2 * i;
      sub_18003E4F4(a4, a4 + 16 * a3, v8, v12, a3, a5);
    }
    return sub_18003E6C4(a4, a4 + 16 * a3);
  }
  return result;
}
