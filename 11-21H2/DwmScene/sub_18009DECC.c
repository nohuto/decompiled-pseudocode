/*
 * XREFs of sub_18009DECC @ 0x18009DECC
 * Callers:
 *     sub_18009D25C @ 0x18009D25C (sub_18009D25C.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180010EC0 @ 0x180010EC0 (sub_180010EC0.c)
 *     sub_18001DCD4 @ 0x18001DCD4 (sub_18001DCD4.c)
 *     sub_18002A240 @ 0x18002A240 (sub_18002A240.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_18008E70C @ 0x18008E70C (sub_18008E70C.c)
 */

__int64 __fastcall sub_18009DECC(__int64 a1, char a2)
{
  __int64 v4; // rax
  __int128 v5; // kr00_16
  __int64 v6; // rbx
  __int64 *v7; // rax
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10[4]; // [rsp+40h] [rbp-28h] BYREF

  v4 = sub_18008E70C(a1);
  sub_180010EC0(v4, &v9);
  v5 = v9;
  v10[0] = *(_QWORD *)(a1 + 1912);
  v10[1] = *(_QWORD *)(a1 + 1920);
  v9 = 0LL;
  *(_OWORD *)(a1 + 1912) = v5;
  sub_180010910((__int64)v10);
  sub_180010910((__int64)&v9);
  v6 = *(_QWORD *)(a1 + 1912);
  v7 = sub_18001DCD4(v10, (_QWORD *)(a1 + 24), " ColorBuffer");
  sub_18002BC44(v6, v7);
  return sub_18002A240(*(_QWORD *)(a1 + 1912), *(_DWORD *)(a1 + 1940), *(_DWORD *)(a1 + 1940), a2, 3, 0LL);
}
