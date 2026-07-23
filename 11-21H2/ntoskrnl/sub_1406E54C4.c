/*
 * XREFs of sub_1406E54C4 @ 0x1406E54C4
 * Callers:
 *     sub_1407AB790 @ 0x1407AB790 (sub_1407AB790.c)
 * Callees:
 *     sub_14066AD78 @ 0x14066AD78 (sub_14066AD78.c)
 */

__int64 __fastcall sub_1406E54C4(_DWORD *a1, __int64 a2)
{
  __int128 v3; // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+40h] [rbp-18h]
  int v5; // [rsp+44h] [rbp-14h]

  v3 = 0LL;
  v4 = 0;
  LODWORD(v3) = *a1;
  *((_QWORD *)&v3 + 1) = (int)a1[1];
  v4 = a1[2];
  v5 = a1[3];
  return sub_14066AD78((__int64)&v3, a2);
}
