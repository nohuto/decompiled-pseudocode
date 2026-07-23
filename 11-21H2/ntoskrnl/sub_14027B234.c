/*
 * XREFs of sub_14027B234 @ 0x14027B234
 * Callers:
 *     sub_14024B768 @ 0x14024B768 (sub_14024B768.c)
 *     sub_14027B194 @ 0x14027B194 (sub_14027B194.c)
 *     sub_1402B1E40 @ 0x1402B1E40 (sub_1402B1E40.c)
 *     sub_1402DBA28 @ 0x1402DBA28 (sub_1402DBA28.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_1403342D0 @ 0x1403342D0 (sub_1403342D0.c)
 *     sub_1406EB270 @ 0x1406EB270 (sub_1406EB270.c)
 *     sub_1406F40E0 @ 0x1406F40E0 (sub_1406F40E0.c)
 *     sub_1406F4A80 @ 0x1406F4A80 (sub_1406F4A80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14027B234(_QWORD *a1)
{
  if ( (*(_DWORD *)(*a1 + 56LL) & 0x20) != 0 )
    return a1[3];
  else
    return 0LL;
}
