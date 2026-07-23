/*
 * XREFs of sub_14099F8D8 @ 0x14099F8D8
 * Callers:
 *     sub_14099F3A0 @ 0x14099F3A0 (sub_14099F3A0.c)
 *     sub_14099FAA4 @ 0x14099FAA4 (sub_14099FAA4.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14099F8D8(__int64 a1, _DWORD *a2)
{
  char result; // al

  if ( (*(_DWORD *)(a1 + 760) & 0x10) != 0 )
  {
    *a2 = 0;
    return 1;
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 48LL) & 0x2000000) != 0 )
  {
    result = 1;
    *a2 = 7;
  }
  else if ( *(_DWORD *)(a1 + 768) )
  {
    result = 1;
    *a2 = 6;
  }
  else
  {
    return 0;
  }
  return result;
}
