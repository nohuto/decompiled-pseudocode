/*
 * XREFs of sub_14051BE58 @ 0x14051BE58
 * Callers:
 *     sub_140A5AC18 @ 0x140A5AC18 (sub_140A5AC18.c)
 * Callees:
 *     sub_140507ED8 @ 0x140507ED8 (sub_140507ED8.c)
 */

int __fastcall sub_14051BE58(unsigned __int64 a1)
{
  __int64 v3; // rcx
  unsigned int v4; // edx
  __int128 v5; // [rsp+60h] [rbp-18h] BYREF
  PKINTERRUPT v6; // [rsp+80h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( !a1 )
    return -1073741811;
  v3 = 0LL;
  if ( LOWORD(dword_140D06E40[0]) )
    v3 = qword_140D06E48[0];
  v4 = *(_DWORD *)(a1 + 160);
  v5 = (unsigned __int64)v3;
  return sub_140507ED8(&v5, v4, 0xE4u, 0xFu, 1u, LevelSensitive, (unsigned __int64)sub_14051BE30, a1, 0LL, 0xFu, 7, &v6);
}
