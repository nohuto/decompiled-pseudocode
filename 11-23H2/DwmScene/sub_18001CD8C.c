/*
 * XREFs of sub_18001CD8C @ 0x18001CD8C
 * Callers:
 *     sub_18001D194 @ 0x18001D194 (sub_18001D194.c)
 * Callees:
 *     sub_18001C510 @ 0x18001C510 (sub_18001C510.c)
 *     sub_18001CAA0 @ 0x18001CAA0 (sub_18001CAA0.c)
 *     sub_18001CB40 @ 0x18001CB40 (sub_18001CB40.c)
 *     sub_18001D32C @ 0x18001D32C (sub_18001D32C.c)
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_18001DDFC @ 0x18001DDFC (sub_18001DDFC.c)
 */

__int64 __fastcall sub_18001CD8C(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rbx
  _QWORD v13[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]
  _QWORD *v16; // [rsp+88h] [rbp+20h] BYREF

  sub_18001CAA0(a1, (__int64)&v14, a3);
  v6 = v15;
  if ( sub_18001CB40(v7, v15, a3) )
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( a1[1] == 0x38E38E38E38E38ELL )
      sub_18001DDFC();
    v9 = *a1;
    v16 = a3;
    v10 = sub_18001C510(v13, (__int64)a1, v9, v8, (__int64 *)&v16);
    v11 = v10[1];
    v10[1] = 0LL;
    sub_18001D32C(v13);
    *(_QWORD *)a2 = sub_18001DBFC(a1, &v14, v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
