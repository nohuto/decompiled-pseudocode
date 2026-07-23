/*
 * XREFs of sub_14074CA14 @ 0x14074CA14
 * Callers:
 *     sub_14074C8DC @ 0x14074C8DC (sub_14074C8DC.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     sub_14094FCD4 @ 0x14094FCD4 (sub_14094FCD4.c)
 *     sub_14094FE24 @ 0x14094FE24 (sub_14094FE24.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14074CA9C @ 0x14074CA9C (sub_14074CA9C.c)
 */

__int64 __fastcall sub_14074CA14(int a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  _DWORD v7[18]; // [rsp+30h] [rbp-58h] BYREF

  *a3 = 0LL;
  memset(v7, 0, sizeof(v7));
  v7[2] = a2;
  LOWORD(v7[0]) = 4891;
  result = sub_14074CA9C(a1, (unsigned int)v7, -1073741637, 0, (__int64)a3);
  if ( (int)result < 0 )
  {
    *a3 = 0LL;
  }
  else if ( !*a3 )
  {
    return 3221225659LL;
  }
  return result;
}
