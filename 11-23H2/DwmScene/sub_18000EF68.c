/*
 * XREFs of sub_18000EF68 @ 0x18000EF68
 * Callers:
 *     sub_18000D5C4 @ 0x18000D5C4 (sub_18000D5C4.c)
 *     sub_18000EE74 @ 0x18000EE74 (sub_18000EE74.c)
 * Callees:
 *     sub_18000FBAC @ 0x18000FBAC (sub_18000FBAC.c)
 */

BOOL __fastcall sub_18000EF68(void *a1)
{
  BOOL result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = ReleaseMutex(a1);
  if ( !result )
    sub_18000FBAC(retaddr, 2369LL);
  return result;
}
