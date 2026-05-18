/*
 * XREFs of sub_1800A2510 @ 0x1800A2510
 * Callers:
 *     sub_1800A305C @ 0x1800A305C (sub_1800A305C.c)
 * Callees:
 *     sub_18001C7B4 @ 0x18001C7B4 (sub_18001C7B4.c)
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_18001DDFC @ 0x18001DDFC (sub_18001DDFC.c)
 *     sub_1800A2334 @ 0x1800A2334 (sub_1800A2334.c)
 *     sub_1800A2880 @ 0x1800A2880 (sub_1800A2880.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A2510(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbp
  __int64 *v6; // rbx
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+28h] [rbp-30h]
  __int64 *v10; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+38h] [rbp-20h]

  sub_1800A2334(&v8, (__int64)a1, *a1, a3);
  v5 = v9;
  v6 = *(__int64 **)(*a1 + 8);
  v10 = v6;
LABEL_5:
  v11 = 0;
  while ( !*((_BYTE *)v6 + 25) )
  {
    v10 = v6;
    if ( !(unsigned __int8)sub_18001C7B4((_QWORD *)(v5 + 32), v6 + 4) )
    {
      v6 = (__int64 *)v6[2];
      goto LABEL_5;
    }
    v11 = 1;
    v6 = (__int64 *)*v6;
  }
  if ( a1[1] == 0x2E8BA2E8BA2E8BALL )
    sub_18001DDFC();
  v9 = 0LL;
  sub_1800A2880(&v8);
  *(_QWORD *)a2 = sub_18001DBFC((__int64)a1, (__int64)&v10, v5);
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
