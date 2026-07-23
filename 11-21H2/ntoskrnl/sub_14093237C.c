/*
 * XREFs of sub_14093237C @ 0x14093237C
 * Callers:
 *     sub_1407035C0 @ 0x1407035C0 (sub_1407035C0.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_1403A0EB4 @ 0x1403A0EB4 (sub_1403A0EB4.c)
 *     sub_1403A0F08 @ 0x1403A0F08 (sub_1403A0F08.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14093237C(__int64 a1, struct _MDL *a2, ULONG a3)
{
  __int16 v6; // ax
  __int64 result; // rax
  unsigned int v8; // ebx
  __int64 *v9[10]; // [rsp+30h] [rbp-89h] BYREF
  _QWORD v10[14]; // [rsp+80h] [rbp-39h] BYREF

  memset(v10, 0, 0x68uLL);
  memset(v9, 0, 0x48uLL);
  v6 = 15;
  if ( !a1 )
    v6 = 14;
  WORD1(v10[0]) = v6;
  result = sub_1403A0F08((__int64)v9, a2, a3, a1 != 0, 0);
  if ( (int)result >= 0 )
  {
    v10[1] = v9[0];
    v10[2] = v9[7];
    v8 = sub_140358A20(2u, SWORD1(v10[0]), 0, (__int64)v10);
    sub_1403A0EB4(v9);
    return v8;
  }
  return result;
}
