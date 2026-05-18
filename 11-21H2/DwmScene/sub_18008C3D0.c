/*
 * XREFs of sub_18008C3D0 @ 0x18008C3D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18008C3B0 @ 0x18008C3B0 (sub_18008C3B0.c)
 */

LPVOID __fastcall sub_18008C3D0(LPVOID lpMem, char a2)
{
  sub_18008C3B0((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
