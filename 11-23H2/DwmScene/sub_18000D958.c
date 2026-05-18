/*
 * XREFs of sub_18000D958 @ 0x18000D958
 * Callers:
 *     sub_18000D5A4 @ 0x18000D5A4 (sub_18000D5A4.c)
 *     sub_18000FD54 @ 0x18000FD54 (sub_18000FD54.c)
 * Callees:
 *     sub_18000FBAC @ 0x18000FBAC (sub_18000FBAC.c)
 */

BOOL __fastcall sub_18000D958(void *a1)
{
  BOOL result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = CloseHandle(a1);
  if ( !result )
    sub_18000FBAC(retaddr, 2359LL);
  return result;
}
