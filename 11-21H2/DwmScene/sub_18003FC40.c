/*
 * XREFs of sub_18003FC40 @ 0x18003FC40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18003F8F4 @ 0x18003F8F4 (sub_18003F8F4.c)
 */

LPVOID __fastcall sub_18003FC40(LPVOID lpMem, char a2)
{
  sub_18003F8F4((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
