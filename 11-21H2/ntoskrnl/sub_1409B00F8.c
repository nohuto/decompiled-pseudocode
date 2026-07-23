/*
 * XREFs of sub_1409B00F8 @ 0x1409B00F8
 * Callers:
 *     sub_1406827E8 @ 0x1406827E8 (sub_1406827E8.c)
 *     sub_1409B08E8 @ 0x1409B08E8 (sub_1409B08E8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409B00F8(__int64 a1, int a2)
{
  int v3; // eax

  if ( *(_DWORD *)(a1 + 576) == -2 )
    return 0LL;
  v3 = *(_DWORD *)(a1 + 1512);
  if ( (v3 & 0x10) == 0
    && ((v3 & 0x40000000) != 0 || ((*(_QWORD *)(a1 + 1752) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 || a2) )
  {
    *(_DWORD *)(a1 + 576) = -2;
    return 0LL;
  }
  return 3221225506LL;
}
