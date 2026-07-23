/*
 * XREFs of sub_14045F736 @ 0x14045F736
 * Callers:
 *     sub_14062B56C @ 0x14062B56C (sub_14062B56C.c)
 * Callees:
 *     sub_140653EC4 @ 0x140653EC4 (sub_140653EC4.c)
 */

__int64 __fastcall sub_14045F736(int a1, int a2, __int64 a3, char a4)
{
  __int64 result; // rax
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  result = sub_140653EC4(a1, a2, a4 != 0 ? -2130640896 : 16842752, a3, 0LL, (__int64)&v6);
  if ( (int)result < 0 )
    __int2c();
  if ( v6 != a3 )
    __int2c();
  return result;
}
