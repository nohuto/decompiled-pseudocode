/*
 * XREFs of sub_1800295E0 @ 0x1800295E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 */

__int64 __fastcall sub_1800295E0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+28h] [rbp-10h]

  sub_180011C50(a1 + 72, &v3);
  v1 = sub_180026618(v3);
  if ( v4 )
    sub_180010530(v4);
  return v1;
}
