/*
 * XREFs of sub_1C0008E14 @ 0x1C0008E14
 * Callers:
 *     sub_1C0007D58 @ 0x1C0007D58 (sub_1C0007D58.c)
 *     sub_1C0008DB8 @ 0x1C0008DB8 (sub_1C0008DB8.c)
 *     sub_1C0010614 @ 0x1C0010614 (sub_1C0010614.c)
 *     sub_1C0013934 @ 0x1C0013934 (sub_1C0013934.c)
 *     sub_1C001A4C0 @ 0x1C001A4C0 (sub_1C001A4C0.c)
 *     sub_1C001F308 @ 0x1C001F308 (sub_1C001F308.c)
 *     sub_1C0037120 @ 0x1C0037120 (sub_1C0037120.c)
 *     sub_1C0038AB8 @ 0x1C0038AB8 (sub_1C0038AB8.c)
 *     sub_1C0038FB0 @ 0x1C0038FB0 (sub_1C0038FB0.c)
 *     sub_1C004BA94 @ 0x1C004BA94 (sub_1C004BA94.c)
 *     sub_1C00557CC @ 0x1C00557CC (sub_1C00557CC.c)
 *     sub_1C005FDF0 @ 0x1C005FDF0 (sub_1C005FDF0.c)
 *     sub_1C0074CA8 @ 0x1C0074CA8 (sub_1C0074CA8.c)
 *     sub_1C00A21E0 @ 0x1C00A21E0 (sub_1C00A21E0.c)
 *     sub_1C00A3D2C @ 0x1C00A3D2C (sub_1C00A3D2C.c)
 *     sub_1C00A6E08 @ 0x1C00A6E08 (sub_1C00A6E08.c)
 *     sub_1C00A7664 @ 0x1C00A7664 (sub_1C00A7664.c)
 *     sub_1C00A7954 @ 0x1C00A7954 (sub_1C00A7954.c)
 *     sub_1C00ACAB4 @ 0x1C00ACAB4 (sub_1C00ACAB4.c)
 *     sub_1C00AEFFC @ 0x1C00AEFFC (sub_1C00AEFFC.c)
 * Callees:
 *     sub_1C000A850 @ 0x1C000A850 (sub_1C000A850.c)
 *     sub_1C000B6FC @ 0x1C000B6FC (sub_1C000B6FC.c)
 *     sub_1C00226F8 @ 0x1C00226F8 (sub_1C00226F8.c)
 *     sub_1C0038530 @ 0x1C0038530 (sub_1C0038530.c)
 */

__int64 __fastcall sub_1C0008E14(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  int v6; // edi
  __int64 v8; // rdx
  __int64 v9; // rbp
  bool v10; // di
  __int64 v11; // rdx

  if ( !*(_BYTE *)(a1 + 4306) )
    return sub_1C000A850(a1, a2);
  v5 = a2[21];
  if ( *(_BYTE *)(v5 + 2) == 40 )
    v6 = *(_DWORD *)(v5 + 24);
  else
    v6 = *(_DWORD *)(v5 + 12);
  if ( (*(_BYTE *)(a1 + 4307) & 4) != 0 )
  {
    v8 = a2[13];
    v9 = a1 + 760;
    v10 = (v6 & 0x40) != 0;
    if ( v8 )
    {
      LOBYTE(a3) = v10;
      sub_1C00226F8(a1 + 760, v8, a3);
    }
    v11 = a2[17];
    if ( v11 )
    {
      LOBYTE(a3) = v10;
      sub_1C00226F8(v9, v11, a3);
    }
    return sub_1C000A850(a1, a2);
  }
  if ( !a2[17] )
  {
    if ( (v6 & 0xC0) != 0 )
      return sub_1C000B6FC();
    return sub_1C000A850(a1, a2);
  }
  return sub_1C0038530();
}
