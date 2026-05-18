/*
 * XREFs of sub_1800617A0 @ 0x1800617A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180061488 @ 0x180061488 (sub_180061488.c)
 */

LPVOID __fastcall sub_1800617A0(LPVOID lpMem, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_180061488((__int64)lpMem, a2);
  if ( (v2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
