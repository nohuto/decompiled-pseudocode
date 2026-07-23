/*
 * XREFs of sub_1409B0334 @ 0x1409B0334
 * Callers:
 *     sub_1406879B8 @ 0x1406879B8 (sub_1406879B8.c)
 *     sub_140687EEC @ 0x140687EEC (sub_140687EEC.c)
 * Callees:
 *     sub_1406E1784 @ 0x1406E1784 (sub_1406E1784.c)
 */

char __fastcall sub_1409B0334(__int64 a1)
{
  __int64 v1; // rcx
  char result; // al

  if ( *(_QWORD *)(a1 + 1760) != a1 )
    return 0;
  if ( sub_1406E1784(a1) )
    return 0;
  if ( *(_QWORD *)(v1 + 1248) != v1 + 1248 )
    return 0;
  result = 1;
  if ( *(_DWORD *)(v1 + 216) != 1 || *(_DWORD *)(v1 + 212) != 1 )
    return 0;
  return result;
}
