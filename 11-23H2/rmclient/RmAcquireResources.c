/*
 * XREFs of RmAcquireResources @ 0x18001CAD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002E34 @ 0x180002E34 (sub_180002E34.c)
 *     sub_18001C7CC @ 0x18001C7CC (sub_18001C7CC.c)
 */

__int64 __fastcall RmAcquireResources(
        int a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  __int64 result; // rax
  __int64 v15; // [rsp+60h] [rbp-18h] BYREF

  result = sub_180002E34(&v15);
  if ( (int)result >= 0 )
  {
    result = sub_18001C7CC(v15, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10).Simple;
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
