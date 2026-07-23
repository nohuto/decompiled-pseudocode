/*
 * XREFs of sub_14054E6A4 @ 0x14054E6A4
 * Callers:
 *     sub_14056C6B8 @ 0x14056C6B8 (sub_14056C6B8.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_1403A0EB4 @ 0x1403A0EB4 (sub_1403A0EB4.c)
 *     sub_1403A0F08 @ 0x1403A0F08 (sub_1403A0F08.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14054E6A4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        struct _MDL *a7,
        unsigned __int64 a8)
{
  __int64 result; // rax
  unsigned int v13; // edi
  __int64 *v14[10]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v15[14]; // [rsp+80h] [rbp-80h] BYREF

  memset(v14, 0, 0x48uLL);
  memset(v15, 0, 0x68uLL);
  v15[6] = a6;
  v15[3] = a1;
  v15[1] = a2;
  v15[4] = a3;
  v15[2] = a4;
  v15[5] = a5;
  if ( !a8 )
  {
LABEL_6:
    v13 = sub_140358A20(2u, 7, 0, (__int64)v15);
    if ( a8 )
      sub_1403A0EB4(v14);
    return v13;
  }
  if ( a8 > 0x1FA000 )
    return 3221225485LL;
  result = sub_1403A0F08((__int64)v14, a7, a8, 0, 0);
  if ( (int)result >= 0 )
  {
    v15[7] = v14[0];
    v15[8] = v14[7];
    goto LABEL_6;
  }
  return result;
}
