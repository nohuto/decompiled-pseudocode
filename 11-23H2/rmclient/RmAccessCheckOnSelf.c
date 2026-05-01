/*
 * XREFs of RmAccessCheckOnSelf @ 0x18001CA90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002E34 @ 0x180002E34 (sub_180002E34.c)
 *     sub_18001C75C @ 0x18001C75C (sub_18001C75C.c)
 */

__int64 __fastcall RmAccessCheckOnSelf(int a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  result = sub_180002E34(&v3);
  if ( (int)result >= 0 )
    return sub_18001C75C(v3, a1).Simple;
  return result;
}
