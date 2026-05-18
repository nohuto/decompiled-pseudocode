/*
 * XREFs of sub_1800A8300 @ 0x1800A8300
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800A82E0 @ 0x1800A82E0 (sub_1800A82E0.c)
 */

LPVOID __fastcall sub_1800A8300(LPVOID lpMem, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_1800A82E0((__int64)lpMem, a2);
  if ( (v2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
