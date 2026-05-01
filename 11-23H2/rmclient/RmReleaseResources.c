/*
 * XREFs of RmReleaseResources @ 0x18001CCC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002E34 @ 0x180002E34 (sub_180002E34.c)
 *     sub_18001CA10 @ 0x18001CA10 (sub_18001CA10.c)
 */

__int64 __fastcall RmReleaseResources(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  result = sub_180002E34(&v4);
  if ( (int)result >= 0 )
  {
    result = sub_18001CA10(v3, a1).Simple;
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
