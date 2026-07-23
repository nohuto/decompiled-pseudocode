/*
 * XREFs of sub_14027DA5C @ 0x14027DA5C
 * Callers:
 *     sub_14024076C @ 0x14024076C (sub_14024076C.c)
 *     sub_14027FEF8 @ 0x14027FEF8 (sub_14027FEF8.c)
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 *     sub_14031CD90 @ 0x14031CD90 (sub_14031CD90.c)
 *     sub_140334C40 @ 0x140334C40 (sub_140334C40.c)
 *     sub_140353230 @ 0x140353230 (sub_140353230.c)
 *     sub_1405A7608 @ 0x1405A7608 (sub_1405A7608.c)
 *     sub_1405A7A00 @ 0x1405A7A00 (sub_1405A7A00.c)
 *     sub_1405C3C6C @ 0x1405C3C6C (sub_1405C3C6C.c)
 * Callees:
 *     sub_14027A9D0 @ 0x14027A9D0 (sub_14027A9D0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 */

__int64 __fastcall sub_14027DA5C(__int64 a1, char a2, _BYTE *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbp
  __int64 v8; // rdx

  v3 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 16);
  sub_14027A9D0(a1);
  if ( a3 )
    *a3 = *(_BYTE *)(a1 + 12);
  else
    a2 = *(_BYTE *)(a1 + 12);
  LOBYTE(v8) = a2;
  if ( (*(_BYTE *)(a1 + 13) & 1) != 0 )
    sub_14030FA80(v3, v8);
  else
    sub_1402B0CE0(v3, v8);
  return v5;
}
