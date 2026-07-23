/*
 * XREFs of sub_1409631D0 @ 0x1409631D0
 * Callers:
 *     sub_140434000 @ 0x140434000 (sub_140434000.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406303E0 @ 0x1406303E0 (sub_1406303E0.c)
 */

__int64 __fastcall sub_1409631D0(__int64 a1, __int64 a2)
{
  if ( a1 && *(_BYTE *)(a1 + 41) )
  {
    _InterlockedAdd(&dword_140D3CAD4, 1u);
    if ( *(_BYTE *)(a1 + 41) )
      sub_14042A5E0(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 56));
    _InterlockedDecrement(&dword_140D3CAD4);
  }
  if ( (BYTE8(xmmword_140D06900[0]) & 0x40) != 0 )
    sub_1406303E0(a2);
  return a2;
}
