/*
 * XREFs of RmAccessCheck @ 0x180002EA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002E34 @ 0x180002E34 (sub_180002E34.c)
 *     sub_180002F54 @ 0x180002F54 (sub_180002F54.c)
 */

__int64 __fastcall RmAccessCheck(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  result = sub_180002E34(&v5);
  if ( (int)result >= 0 )
    return sub_180002F54(v5, a1, a2);
  return result;
}
