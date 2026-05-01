/*
 * XREFs of sub_1800102E4 @ 0x1800102E4
 * Callers:
 *     sub_18000CF44 @ 0x18000CF44 (sub_18000CF44.c)
 *     sub_180011B2C @ 0x180011B2C (sub_180011B2C.c)
 * Callees:
 *     sub_180011794 @ 0x180011794 (sub_180011794.c)
 */

BOOL __fastcall sub_1800102E4(void *a1)
{
  BOOL result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = ReleaseMutex(a1);
  if ( !result )
    sub_180011794(retaddr, 2369LL);
  return result;
}
