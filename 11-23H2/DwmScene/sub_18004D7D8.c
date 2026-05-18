/*
 * XREFs of sub_18004D7D8 @ 0x18004D7D8
 * Callers:
 *     sub_18004F4AC @ 0x18004F4AC (sub_18004F4AC.c)
 * Callees:
 *     sub_18001CAA0 @ 0x18001CAA0 (sub_18001CAA0.c)
 *     sub_18001CB40 @ 0x18001CB40 (sub_18001CB40.c)
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_18001DDFC @ 0x18001DDFC (sub_18001DDFC.c)
 *     sub_18004CFF4 @ 0x18004CFF4 (sub_18004CFF4.c)
 *     sub_18004EA38 @ 0x18004EA38 (sub_18004EA38.c)
 */

__int64 __fastcall sub_18004D7D8(__int64 *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v8; // rax
  __int128 v9; // xmm6
  __int64 v10; // rbx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rbx
  _QWORD v15[4]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v16; // [rsp+50h] [rbp-38h] BYREF
  __int64 v17; // [rsp+60h] [rbp-28h]

  v8 = sub_18001CAA0(a1, (__int64)v15, a3);
  v9 = *(_OWORD *)v8;
  v17 = *(_QWORD *)(v8 + 16);
  v10 = v17;
  if ( sub_18001CB40(v11, v17, a3) )
  {
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( a1[1] == 0x276276276276276LL )
      sub_18001DDFC();
    v12 = sub_18004CFF4(v15, (__int64)a1, *a1, (__int64)a3, a4);
    v13 = v12[1];
    v12[1] = 0LL;
    sub_18004EA38(v15);
    v16 = v9;
    *(_QWORD *)a2 = sub_18001DBFC((__int64)a1, (__int64)&v16, v13);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
