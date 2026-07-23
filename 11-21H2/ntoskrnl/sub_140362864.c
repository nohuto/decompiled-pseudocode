/*
 * XREFs of sub_140362864 @ 0x140362864
 * Callers:
 *     sub_140242028 @ 0x140242028 (sub_140242028.c)
 *     sub_1402491D0 @ 0x1402491D0 (sub_1402491D0.c)
 *     sub_14024EFA8 @ 0x14024EFA8 (sub_14024EFA8.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_140366CB0 @ 0x140366CB0 (sub_140366CB0.c)
 *     sub_140367E68 @ 0x140367E68 (sub_140367E68.c)
 *     sub_14036843C @ 0x14036843C (sub_14036843C.c)
 *     sub_14036F8F8 @ 0x14036F8F8 (sub_14036F8F8.c)
 *     sub_140370C40 @ 0x140370C40 (sub_140370C40.c)
 * Callees:
 *     sub_1403628D8 @ 0x1403628D8 (sub_1403628D8.c)
 *     sub_140362B58 @ 0x140362B58 (sub_140362B58.c)
 */

__int64 __fastcall sub_140362864(__int64 a1, __int128 *a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v6; // rax
  __int64 v7; // r10
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int128 v11; // [rsp+40h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v9 = *a2;
  v6 = sub_140362B58(&v9);
  sub_1403628D8(v6 + 88, v7, &v10);
  if ( a3 )
    *a3 = v11;
  if ( a4 )
    *a4 = DWORD2(v11);
  return v10;
}
