/*
 * XREFs of sub_18008AF10 @ 0x18008AF10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18008AEF0 @ 0x18008AEF0 (sub_18008AEF0.c)
 */

LPVOID __fastcall sub_18008AF10(LPVOID lpMem, char a2)
{
  sub_18008AEF0((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
