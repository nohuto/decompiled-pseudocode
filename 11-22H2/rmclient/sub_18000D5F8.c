/*
 * XREFs of sub_18000D5F8 @ 0x18000D5F8
 * Callers:
 *     sub_18000CF24 @ 0x18000CF24 (sub_18000CF24.c)
 *     sub_180011ACC @ 0x180011ACC (sub_180011ACC.c)
 * Callees:
 *     sub_180011794 @ 0x180011794 (sub_180011794.c)
 */

BOOL __fastcall sub_18000D5F8(void *a1)
{
  BOOL result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = CloseHandle(a1);
  if ( !result )
    sub_180011794(retaddr, 2359LL);
  return result;
}
