/*
 * XREFs of RmAvailabilityCheck @ 0x18001CB90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002E34 @ 0x180002E34 (sub_180002E34.c)
 *     sub_18001C8A0 @ 0x18001C8A0 (sub_18001C8A0.c)
 */

__int64 __fastcall RmAvailabilityCheck(int a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  __int64 v9[3]; // [rsp+30h] [rbp-18h] BYREF

  result = sub_180002E34(v9);
  if ( (int)result >= 0 )
  {
    result = sub_18001C8A0(v9[0], a1, a2, a3, a4).Simple;
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
