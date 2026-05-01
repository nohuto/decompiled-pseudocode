/*
 * XREFs of RmGetNotification @ 0x18001CC10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002E34 @ 0x180002E34 (sub_180002E34.c)
 *     sub_18001C924 @ 0x18001C924 (sub_18001C924.c)
 */

__int64 __fastcall RmGetNotification(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  result = sub_180002E34(&v6);
  if ( (int)result >= 0 )
  {
    result = sub_18001C924(v5, a1, a2).Simple;
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
