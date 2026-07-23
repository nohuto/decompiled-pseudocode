/*
 * XREFs of sub_14099FA50 @ 0x14099FA50
 * Callers:
 *     sub_14099F3A0 @ 0x14099F3A0 (sub_14099F3A0.c)
 *     sub_14099F6D8 @ 0x14099F6D8 (sub_14099F6D8.c)
 *     sub_14099F920 @ 0x14099F920 (sub_14099F920.c)
 *     sub_14099FAA4 @ 0x14099FAA4 (sub_14099FAA4.c)
 * Callees:
 *     sub_14099E9BC @ 0x14099E9BC (sub_14099E9BC.c)
 */

__int64 __fastcall sub_14099FA50(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD *v4; // r10
  _QWORD *v5; // rax

  v4 = (_QWORD *)(a2 + 16);
  if ( (_QWORD *)*v4 == v4 )
  {
    *(_DWORD *)(a2 + 36) = *(_DWORD *)(a2 + 32);
    v5 = *(_QWORD **)(a1 + 8);
    if ( *v5 != a1 )
      __fastfail(3u);
    *v4 = a1;
    *(_QWORD *)(a2 + 24) = v5;
    *v5 = v4;
    *(_QWORD *)(a1 + 8) = v4;
  }
  return sub_14099E9BC(a2 - 728, a3, a4);
}
