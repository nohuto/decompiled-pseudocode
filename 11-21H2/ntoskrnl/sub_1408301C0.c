/*
 * XREFs of sub_1408301C0 @ 0x1408301C0
 * Callers:
 *     sub_1403C6028 @ 0x1403C6028 (sub_1403C6028.c)
 * Callees:
 *     sub_1403C5EDC @ 0x1403C5EDC (sub_1403C5EDC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140830768 @ 0x140830768 (sub_140830768.c)
 *     sub_140830BF0 @ 0x140830BF0 (sub_140830BF0.c)
 *     sub_14085EE64 @ 0x14085EE64 (sub_14085EE64.c)
 *     sub_140A34CE8 @ 0x140A34CE8 (sub_140A34CE8.c)
 *     sub_140A360D8 @ 0x140A360D8 (sub_140A360D8.c)
 *     sub_140A3631C @ 0x140A3631C (sub_140A3631C.c)
 */

__int64 __fastcall sub_1408301C0(__int64 a1, void *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 result; // rax
  char v10; // al
  __int128 v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+30h] [rbp-20h]
  int v13; // [rsp+38h] [rbp-18h]

  v12 = 0LL;
  v13 = 0;
  v11 = 0LL;
  result = sub_140830BF0(a1, &v11);
  if ( (int)result < 0 )
    return result;
  v10 = v11;
  if ( (v11 & 4) != 0 )
  {
    result = sub_140A360D8(a1, a2, &v11);
LABEL_9:
    if ( (int)result < 0 )
      return result;
    v10 = v11;
    goto LABEL_4;
  }
  if ( (v11 & 2) != 0 )
  {
    result = sub_140A3631C(a1, a2, &v11);
    goto LABEL_9;
  }
LABEL_4:
  if ( (v10 & 4) != 0 )
    result = sub_140A34CE8(a1, a3);
  else
    result = sub_140830768(a1, a3);
  if ( (int)result >= 0 )
  {
    LOWORD(v11) = v11 | 0x820;
    sub_1403C5EDC((__int64)&v11, a2);
    return sub_14085EE64(a1 + 24, &v11, a6);
  }
  return result;
}
