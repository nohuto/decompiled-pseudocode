/*
 * XREFs of RmRegisterResource @ 0x18001CC60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002E34 @ 0x180002E34 (sub_180002E34.c)
 *     sub_18001C994 @ 0x18001C994 (sub_18001C994.c)
 */

__int64 __fastcall RmRegisterResource(int a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  result = sub_180002E34(&v7);
  if ( (int)result >= 0 )
  {
    result = sub_18001C994(v7, a1, a2, a3).Simple;
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
