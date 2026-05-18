/*
 * XREFs of sub_18006CCD0 @ 0x18006CCD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18006C83C @ 0x18006C83C (sub_18006C83C.c)
 */

LPVOID __fastcall sub_18006CCD0(LPVOID lpMem, char a2)
{
  sub_18006C83C((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
